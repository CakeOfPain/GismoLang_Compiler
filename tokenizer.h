#ifndef tokenizer_h
#define tokenizer_h



enum TokenTypes {
    TT_Int,
    TT_Float,
    TT_Uint,
    TT_Plus,
    TT_Minus,
    TT_Muliply,
    TT_Divide,
    TT_Equalsign,
    TT_EqualsEquals,
    TT_Colon,
    TT_Identifier,
    TT_RBracket,
    TT_LBracket,
    TT_LCurlyBracket,
    TT_RCurlyBracket,
    TT_String,
    TT_Dot,
    TT_Newline,
    TT_At,
    TT_Comma,
    TT_And,
    TT_AndAnd,
    TT_Or,
    TT_OrOr,
    TT_Exclamationmark,
    TT_Modulo,
    TT_Semicolon,
    TT_NotEquals,
    TT_PlusEqual,
    TT_SubEqual,
    TT_MulEqual,
    TT_DivEqual,
    TT_Less,
    TT_Greater,
    TT_LessEquals,
    TT_GreaterEquals,
    TT_LSquardBracket,
    TT_RSquardBracket,

    // Keywords:
    TTK_Vanguard,
    TTK_Return,
    TTK_As,
    TTK_Is,
    TTK_Num,
    TTK_In,
    TTK_Const,
    TTK_Range,
    TTK_Implement,
    TTK_Node,
    TTK_Txt,
    TTK_Collection,
    TTK_Long,
    TTK_Double,
    TTK_Ulong,
    TTK_Int,
    TTK_Uint,
    TTK_Float,
    TTK_Ushort,
    TTK_Short,
    TTK_Byte,
    TTK_Ubyte,
    TTK_Union,
    TTK_While,
    TTK_If,
    TTK_Else,
    TTK_True,
    TTK_False,

    TT_End
};

const char* KeywordNames[28] = {
    [TTK_Vanguard - TTK_Vanguard] = "vanguard",
    [TTK_Return   - TTK_Vanguard] = "return",
    [TTK_As       - TTK_Vanguard] = "as",
    [TTK_Is       - TTK_Vanguard] = "is",
    [TTK_Num      - TTK_Vanguard] = "num",
    [TTK_In       - TTK_Vanguard] = "in",
    [TTK_Const    - TTK_Vanguard] = "const",
    [TTK_Range    - TTK_Vanguard] = "range",
    [TTK_Implement - TTK_Vanguard] = "implement",
    [TTK_Node      - TTK_Vanguard] = "node",
    [TTK_Txt       - TTK_Vanguard] = "txt",
    [TTK_Collection - TTK_Vanguard] = "Collection",
    [TTK_Long - TTK_Vanguard] = "long",
    [TTK_Double - TTK_Vanguard] = "double",
    [TTK_Ulong - TTK_Vanguard] = "ulong",
    [TTK_Int - TTK_Vanguard] = "int",
    [TTK_Uint - TTK_Vanguard] = "uint",
    [TTK_Float - TTK_Vanguard] = "float",
    [TTK_Ushort - TTK_Vanguard] = "ushort",
    [TTK_Short - TTK_Vanguard] = "short",
    [TTK_Byte - TTK_Vanguard] = "byte",
    [TTK_Ubyte - TTK_Vanguard] = "ubyte",
    [TTK_Union - TTK_Vanguard] = "union",
    [TTK_While - TTK_Vanguard] = "while",
    [TTK_If - TTK_Vanguard] = "if",
    [TTK_Else - TTK_Vanguard] = "else",
    [TTK_True - TTK_Vanguard] = "true",
    [TTK_False - TTK_Vanguard] = "false"
};

// Saves numbers and strings
typedef union TokenValue {
    long long i;
    unsigned long long u;
    double f;
    char* word;
} TokenValue;

// A Token represents a word/number or an text
typedef struct Token {
    unsigned char type;
    TokenValue value;

    // Error Notation
    unsigned int lineNumber;
    unsigned short begin;
    unsigned short end;
} Token;

// The Tokenizer reads the raw text and produces tokens out of it
typedef struct Tokenizer {
    unsigned int cIndex;
    const char* code;
    Token* tokens;
    unsigned int length;
    unsigned int index;

    // Notation
    unsigned int line;
    unsigned short lineIndex;
} Tokenizer;

// Reads the next Character from the code
char Tokenizer_nextCharacter(Tokenizer* tokenizer) {
    char character = tokenizer->code[tokenizer->cIndex++];
    if(character == '\r') {
        tokenizer->cIndex++;
        tokenizer->line++;
        tokenizer->lineIndex = 0;
        return '\n'; // Tokenizer_nextCharacter(tokenizer);
    }
    if(character == '\n')
    {
        tokenizer->line++;
        tokenizer->lineIndex = 0;
        return character; // Tokenizer_nextCharacter(tokenizer);
    }
    tokenizer->lineIndex++;
    return character;
}

// Makes the dynamic array bigger and stores a new token inside
void Tokenizer_addToken(Tokenizer* tokenizer, Token token) {
    tokenizer->length++;
    if(tokenizer->tokens == NULL)
        tokenizer->tokens = (Token*) malloc(sizeof(Token) * tokenizer->length);
    else
        tokenizer->tokens = (Token*) realloc(tokenizer->tokens, sizeof(Token) * tokenizer->length);
    tokenizer->tokens[tokenizer->length-1] = token;
}

// Generates out of the code a ulong, long, double number
Token Tokenizer_getNumber(Tokenizer* tokenizer, char firstCharacter) {
    Token token;
    char numberAsText[51];
    numberAsText[0] = firstCharacter;
    unsigned char isDigit = 1;
    char currentChar;
    unsigned char type = 1; // 1 = int, 2 = uint, 3 = float
    unsigned int counter = 1;
    do {
        currentChar = Tokenizer_peekNextCharacter(tokenizer);
        switch(currentChar) {
            
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                numberAsText[counter++] = Tokenizer_nextCharacter(tokenizer);
                break;
            case '.':
                if(type == 3) {
                    markPosError(tokenizer->code, tokenizer->line, tokenizer->lineIndex, tokenizer->lineIndex+1);
                    puts("Two dots are illegal!");
                    exit(1);
                }
                numberAsText[counter++] = Tokenizer_nextCharacter(tokenizer);
                type = 3;
                break;
            case 'u':
                type = 2;
                isDigit = 0;
                Tokenizer_nextCharacter(tokenizer);
                break;
            default:
                isDigit = 0;
        }
    } while(isDigit == 1);
    numberAsText[counter] = '\0';
    if(type == 1) {
        sscanf(numberAsText, "%lld", &token.value.i);
        token.type = TT_Int;
        token.lineNumber = tokenizer->line;
        token.begin = tokenizer->lineIndex - strlen(numberAsText);
        token.end = tokenizer->lineIndex;
    }
    else if (type == 2) {
        sscanf(numberAsText, "%llu", &token.value.u);
        token.type = TT_Uint;
        token.lineNumber = tokenizer->line;
        token.begin = tokenizer->lineIndex - strlen(numberAsText);
        token.end = tokenizer->lineIndex;
    }
    else if (type == 3) {
        sscanf(numberAsText, "%lf", &token.value.f);
        token.type = TT_Float;
        token.lineNumber = tokenizer->line;
        token.begin = tokenizer->lineIndex - strlen(numberAsText);
        token.end = tokenizer->lineIndex;
    }
    return token;
}

// Lets you peek the next character without moving forward
char Tokenizer_peekNextCharacter(Tokenizer* tokenizer) {
    char character = tokenizer->code[tokenizer->cIndex];
    return character;
}

// Checks if the character is idle for an identifier or not
char isIdentifierCharacter(char character) {
    if(character <= 'Z' && character >= 'A')
        return 1;
    else if(character <= 'z' && character >= 'a')
        return 1;
    else if(character >= '0' && character <= '9')
        return 1;
    else if(character == '$' || character == '_')
        return 1;
    else
        return 0;
}

// reads a whole word
void Tokenizer_getWord(Tokenizer* tokenizer, char beginning, char* buffer) {
    buffer[0] = beginning;
    unsigned int i = 1;
    while(Tokenizer_peekNextCharacter(tokenizer) != ' '   && 
          Tokenizer_peekNextCharacter(tokenizer) != '\t'  &&
          Tokenizer_peekNextCharacter(tokenizer) != '\0'  &&
          Tokenizer_peekNextCharacter(tokenizer) != '\n' &&
          isIdentifierCharacter(Tokenizer_peekNextCharacter(tokenizer)) == 1)
        buffer[i++] = Tokenizer_nextCharacter(tokenizer);
    buffer[i] = '\0';
}

// reads a string like such: "Hello World!"
Token Tokenizer_readString(Tokenizer* tokenizer) {

    // Deklaration:
    Token token;                // Token in which it save the string
    char* string = NULL;        // stringpointer for allocating
    unsigned int size = 0;      // size of the string
    unsigned int plusSize = 0;  // real size of the inputed string
    char current;               // char that is currently used
    char escapeSign;            // the char that comes after a escape sign, like: '\' 
    
    //TODO Comment!

    if(Tokenizer_peekNextCharacter(tokenizer) == '"') {
        Tokenizer_nextCharacter(tokenizer);
        return (Token) {
            .type = TT_String,
            .lineNumber = tokenizer->line,
            .value.word = "",
            .begin = tokenizer->lineIndex-2,
            .end = tokenizer->lineIndex
        };
    }
    for(unsigned int i = 0; Tokenizer_peekNextCharacter(tokenizer) != '"' &&
                            Tokenizer_peekNextCharacter(tokenizer) != '\0'; i++) 
    {
        current = Tokenizer_nextCharacter(tokenizer);
        if(current == '\\') {
            escapeSign = Tokenizer_nextCharacter(tokenizer);
            if(escapeSign == '\0') {
                markPosError(tokenizer->code, tokenizer->line, tokenizer->lineIndex-2, tokenizer->lineIndex-1);
                puts("Illegal Reach of the file end.");
                exit(1);
            }
            else if (escapeSign == 'n')
                current = '\n';
            else if (escapeSign == 'r')
                current = '\r';
            else if (escapeSign == 'a')
                current = '\a';
            else if (escapeSign == 'b')
                current = '\b';
            else if (escapeSign == 'f')
                current = '\f';
            else if (escapeSign == 't')
                current = '\t';
            else if (escapeSign == 'v')
                current = '\v';
            else if (escapeSign == '"')
                current = '"';
            else if (escapeSign == '\\')
                current = '\\';
            else
                current = '?';
            plusSize++;
        }
        size++;
        if(!string)
            string = (char*) malloc(sizeof(char) * (size+1));
        else
            string = (char*) realloc(string, sizeof(char) * (size+1));
        string[i] = current;
    }

    string[size] = '\0';
    if(Tokenizer_peekNextCharacter(tokenizer) == '"')
        plusSize++,
        Tokenizer_nextCharacter(tokenizer);
    else {
        markPosError(tokenizer->code, tokenizer->line, tokenizer->lineIndex, tokenizer->lineIndex);
        puts("Illegal Reach of the file end.");
        exit(1);
    }
    token.type = TT_String;
    token.lineNumber = tokenizer->line;
    token.value.word = string;
    token.begin = tokenizer->lineIndex-(size+plusSize+1);
    token.end = tokenizer->lineIndex;
    return token;
}

Tokenizer Tokenizer_getTokens(const char* code) {
    Tokenizer tokenizer = (Tokenizer) {
        .line = 1,
        .lineIndex = 0,
        .cIndex = 0,
        .code = code,
        .index = 0,
        .length = 0,
        .tokens = NULL
    };
    char character = Tokenizer_nextCharacter(&tokenizer);
    while(character != '\0') {
        switch(character) {
            case ' ':
            case '\t':
            case '\r':
                break;
            case '+':
            {
                if(Tokenizer_peekNextCharacter(&tokenizer) == '=') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_PlusEqual,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-2,
                        .end = tokenizer.lineIndex,
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Plus,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-1,
                        .end = tokenizer.lineIndex,
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
            }
                break;
            case '-':
            {
                if(Tokenizer_peekNextCharacter(&tokenizer) == '=') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_SubEqual,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex - 2,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Minus,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex - 1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
            }
                break;
            case '*':
            {
                if(Tokenizer_peekNextCharacter(&tokenizer) == '=') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_MulEqual,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex - 2,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Muliply,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex - 1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
            }
                break;
            case '/':
                if(Tokenizer_peekNextCharacter(&tokenizer) == '/') {
                    Tokenizer_nextCharacter(&tokenizer);
                    while(Tokenizer_peekNextCharacter(&tokenizer) != '\n' &&
                          Tokenizer_peekNextCharacter(&tokenizer) != '\r' &&
                          Tokenizer_peekNextCharacter(&tokenizer) != '\0')
                        Tokenizer_nextCharacter(&tokenizer);
                    /*if(Tokenizer_peekNextCharacter(&tokenizer) != '\0') {
                        Tokenizer_nextCharacter(&tokenizer);
                    }*/
                    if(Tokenizer_peekNextCharacter(&tokenizer) != '\r') {
                        Tokenizer_nextCharacter(&tokenizer);
                    }
                }
                else if(Tokenizer_peekNextCharacter(&tokenizer) == '=') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_DivEqual,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex - 2,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Divide,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex - 1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                break;
            case '(':
            {
                Token token = (Token) {
                    .type = TT_LBracket,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex - 1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;
            case ')':
            {
                Token token = (Token) {
                    .type = TT_RBracket,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;
            case '&':
                if(Tokenizer_peekNextCharacter(&tokenizer) == '&') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                    .type = TT_AndAnd,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-2,
                    .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_And,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                break;
            case '|':
                if(Tokenizer_peekNextCharacter(&tokenizer) == '|') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                    .type = TT_OrOr,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-2,
                    .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Or,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                break;
            case '!':
            {
                if(Tokenizer_peekNextCharacter(&tokenizer) == '=') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_NotEquals,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-2,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Exclamationmark,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
            }
                break;
            case '%':
            {
                Token token = (Token) {
                    .type = TT_Modulo,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;
            case ';':
            {
                Token token = (Token) {
                    .type = TT_Semicolon,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;

            case '<':
            {
                if(Tokenizer_peekNextCharacter(&tokenizer) == '=') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_LessEquals,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-2,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Less,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
            }
            break;

            case '>':
                if(Tokenizer_peekNextCharacter(&tokenizer) == '=') {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_GreaterEquals,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-2,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Greater,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                break;

            // Number parsing:

            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                Tokenizer_addToken(&tokenizer, Tokenizer_getNumber(&tokenizer, character));
                break;
            case '.':
            {
                Token token = (Token) {
                    .type = TT_Dot,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;
            case '\n':
            {
                Token token = (Token) {
                    .type = TT_Newline,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex,
                    .end = tokenizer.lineIndex+1
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;
            case '=':
                if(Tokenizer_peekNextCharacter(&tokenizer) == '=')
                {
                    Tokenizer_nextCharacter(&tokenizer);
                    Token token = (Token) {
                        .type = TT_EqualsEquals,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-2,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                else {
                    Token token = (Token) {
                        .type = TT_Equalsign,
                        .lineNumber = tokenizer.line,
                        .begin = tokenizer.lineIndex-1,
                        .end = tokenizer.lineIndex
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                break;
            case ':':
            {
                Token token = (Token) {
                    .type = TT_Colon,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;
            case '{':
            {
                Token token = (Token) {
                    .type = TT_LCurlyBracket,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;
            case '}':
            {
                Token token = (Token) {
                    .type = TT_RCurlyBracket,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;

            case '@':
            {
                Token token = (Token) {
                    .type = TT_At,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;

            case '"':
                Tokenizer_addToken(&tokenizer, Tokenizer_readString(&tokenizer));
                break;
            
            case ',':
            {
                Token token = (Token) {
                    .type = TT_Comma,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;

            case '[':
            {
                Token token = (Token) {
                    .type = TT_LSquardBracket,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;

            case ']':
            {
                Token token = (Token) {
                    .type = TT_RSquardBracket,
                    .lineNumber = tokenizer.line,
                    .begin = tokenizer.lineIndex-1,
                    .end = tokenizer.lineIndex
                };
                Tokenizer_addToken(&tokenizer, token);
            }
                break;

            // Keywords & Identifier allowed tokens
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            case '$':
            case '_':
            {
                

                char word[50];
                Tokenizer_getWord(&tokenizer, character, word);

                char found = 0;
                for (unsigned int i = 0; i < TT_End - TTK_Vanguard; ++i)
                {
                    if (strcmp(word, KeywordNames[i]) == 0) {
                        found = 1;
                        Token token = (Token) {
                            .type = i + TTK_Vanguard,
                            .lineNumber = tokenizer.line,
                            .end = tokenizer.lineIndex,
                            .begin = tokenizer.lineIndex - strlen(KeywordNames[i])
                        };
                        Tokenizer_addToken(&tokenizer, token);
                        break;
                    }
                }

                if (!found) {
                    char* name = (char*) malloc(sizeof(char) * (1+strlen(word)));
                    if(!name)
                        fprintf(stderr, "Out of Memory!\n"),
                        exit(1);
                    for(unsigned int i = 0; i < strlen(word); i++) 
                        name[i] = word[i];
                    name[strlen(word)] = '\0';
                    Token token = (Token) {
                        .type = TT_Identifier,
                        .value.word = name,
                        .lineNumber = tokenizer.line,
                        .end = tokenizer.lineIndex,
                        .begin = tokenizer.lineIndex-strlen(word)
                    };
                    Tokenizer_addToken(&tokenizer, token);
                }
                
            }
                break;

            default:
                markPosError(tokenizer.code, tokenizer.line, tokenizer.lineIndex-1, tokenizer.lineIndex);
                printf("Illegal character!");
                exit(1);
        }

        character = Tokenizer_nextCharacter(&tokenizer);
    }
    return tokenizer;
}

void Tokenizer_clear(Tokenizer tokenizer) {
    for(unsigned int i = 0; i < tokenizer.length; i++) {
        TokenValue value = tokenizer.tokens[i].value;
        if(tokenizer.tokens[i].type == TT_String || tokenizer.tokens[i].type == TT_Identifier)
            free(value.word);
    }
    free(tokenizer.tokens);
}

void markPosError(const char* srcCode, unsigned int line, unsigned short begin, unsigned short end) {
    printf("In Line %u:\n", line);
    char ch = srcCode[0];
    unsigned int linepos = 1;
    unsigned int i = 0;
    unsigned int begin_pos = 0;

    // find where the line starts
    while(ch != '\0' && linepos < line){
        ch = srcCode[++i];
        if(ch == '\n')
            linepos++;
    }

    // check if there are any issues
    if(ch == '\0')
        return;
    if(ch != '\n')
        i--;
    begin_pos = i;
    ch = srcCode[++i];
    
    // print the line that's gonna be marked
    while(ch != '\0' && ch != '\n') {
        if(ch == '\t') {
            putchar(' ');
            putchar(' ');
            putchar(' ');
            putchar(' ');
        }
        else
            putchar(ch);
        ch = srcCode[++i];
    }

    // underline it
    putchar('\n');
    for(unsigned short j = 0; j < begin; j++)
        if(srcCode[j+begin_pos] == '\t') {
            putchar(' ');
            putchar(' ');
            putchar(' ');
            putchar(' ');
        }
        else
            putchar(' ');
    for(unsigned short j = begin; j < end; j++)
        if(srcCode[j+begin_pos] == '\t') {
            putchar('^');
            putchar('^');
            putchar('^');
            putchar('^');
        }
        else
            putchar('^');
    putchar('\n');
}

void markTokenError(const char* text, Token token) {
    markPosError(text, token.lineNumber, token.begin, token.end);
}

#endif