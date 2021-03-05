#ifndef CodeGenerator_h
#define CodeGenerator_h

#define BC_NOP                      0

// *** NUMBER OPERATORS:

// Load and Store:
#define BC_LOAD_CONST_NUM8          1
#define BC_LOAD_CONST_NUM16         2
#define BC_LOAD_CONST_NUM32         3
#define BC_LOAD_CONST_NUM64         4

#define BC_LOAD_GLOBAL_NUM8         5
#define BC_LOAD_GLOBAL_NUM16        6
#define BC_LOAD_GLOBAL_NUM32        7
#define BC_LOAD_GLOBAL_NUM64        8

#define BC_STORE_GLOBAL_NUM8        9
#define BC_STORE_GLOBAL_NUM16       10
#define BC_STORE_GLOBAL_NUM32       11
#define BC_STORE_GLOBAL_NUM64       12

#define BC_LOAD_STACK_NUM8          13
#define BC_LOAD_STACK_NUM16         14
#define BC_LOAD_STACK_NUM32         15
#define BC_LOAD_STACK_NUM64         16

#define BC_STORE_STACK_NUM8         17
#define BC_STORE_STACK_NUM16        18
#define BC_STORE_STACK_NUM32        19
#define BC_STORE_STACK_NUM64        20


// Aritmetic:
#define BC_ADD_I                    21
#define BC_ADD_U                    22
#define BC_ADD_F                    23

#define BC_SUB_I                    24      
#define BC_SUB_U                    25
#define BC_SUB_F                    26

#define BC_MUL_I                    27
#define BC_MUL_U                    28
#define BC_MUL_F                    29

#define BC_DIV_I                    30
#define BC_DIV_U                    31
#define BC_DIV_F                    32


// Logical:
#define BC_AND                      33
#define BC_OR                       34
#define BC_NOT                      35

// Compare:
#define BC_EQ_I                     36
#define BC_EQ_U                     37
#define BC_EQ_F                     38

#define BC_EQ_IU                    39
#define BC_EQ_FI                    40
#define BC_EQ_FU                    41

#define BC_BIGGER_I                 42
#define BC_BIGGER_U                 43
#define BC_BIGGER_F                 44

#define BC_BIGGER_IU                45
#define BC_BIGGER_FI                46
#define BC_BIGGER_FU                47

#define BC_SMALLER_I                48
#define BC_SMALLER_U                49
#define BC_SMALLER_F                50

#define BC_SMALLER_IU               51
#define BC_SMALLER_FI               52
#define BC_SMALLER_FU               53

// *** COLLECTION OPERATORS:

#define BC_LOAD_GLOBAL_COLLECTION   54
#define BC_LOAD_STACK_COLLECTION    55

#define BC_STORE_GLOBAL_COLLECTION  56
#define BC_STORE_STACK_COLLECTION   57

#define BC_ADD_ELEMENT              58

#define BC_REMOVE_ELEMENT           59

#define BC_SIZEOF_COLLECTION        60

#define BC_LOAD_ELEMENT             61

#define BC_STORE_ELEMENT            62

// *** FUNCTION OPERATORS:

#define BC_LOAD_CONST_FUNC          63
#define BC_LOAD_GLOBAL_FUNC         64
#define BC_LOAD_STACK_FUNC          65

#define BC_STORE_GLOBAL_FUNC        66
#define BC_STORE_STACK_FUNC         67

#define BC_CALL_FUNC                68
#define BC_RETURN_ELEMENT           69

// *** STACK OPERATORS:

#define BC_POP                      70
#define BC_SWAP                     71
#define BC_ROT                      72

// *** EXIT OPERATORS:

#define BC_EXIT                     73

// *** TEXT OPERATORS:

#define BC_LOAD_CONST_TEXT          74
#define BC_LOAD_GLOBAL_TEXT         75
#define BC_LOAD_STACK_TEXT          76

#define BC_STORE_GLOBAL_TEXT        77
#define BC_STORE_STACK_TEXT         78

#define BC_TEXT_ADD_CHAR            79
#define BC_TEXT_REMOVE_CHAR         80
#define BC_TEXT_POP_CHAR            81
#define BC_TEXT_GETSIZE             82
#define BC_TEXT_GET_CHAR            83

// *** COPY/CLEAR OPS:
#define BC_COPY_COLLECTION          84
#define BC_COPY_TEXT                85

// *** CONSOLE OPS:

#define BC_PRINT_I                  86
#define BC_PRINT_U                  87
#define BC_PRINT_F                  88
#define BC_PRINT_C                  89
#define BC_PRINT_TEXT               90
#define BC_NEWLINE                  91
// Coming soon
#define COLLECTION2TEXT             92

// *** INSTANCE

// Coming soon
#define BC_GET_INSTANCE             93

// *** JUMP OPS:

#define BC_JUMP_ABS                 94
#define BC_JUMP_NEG                 95
#define BC_JUMP_POS                 96
#define BC_JUMP_IF_TRUE_ABS         97
#define BC_JUMP_IF_FALSE_ABS        98
#define BC_JUMP_IF_TRUE_NEG         99
#define BC_JUMP_IF_FALSE_NEG        100
#define BC_JUMP_IF_TRUE_POS         101
#define BC_JUMP_IF_FALSE_POS        102

// Extras

#define BC_MOD_I                    103
#define BC_MOD_U                    104

#define BC_BUILD_EMPTYCOLLECTION    105
#define BC_BUILD_COLLECTION         106

#define BC_INPUT_I                  107
#define BC_INPUT_U                  108
#define BC_INPUT_F                  109
#define BC_INPUT_TEXT               110
#define BC_INPUT_LINE               111

#define BC_TEXT_SET_CHAR            112

#define BC_LOAD_ARGUMENT            113
#define BC_I2U                      114
#define BC_I2F                      115
#define BC_U2I                      116
#define BC_U2F                      117
#define BC_F2I                      118
#define BC_F2U                      119

#define BC_IS_NUM                   120
#define BC_IS_TXT                   121
#define BC_IS_COLLECTION            122
#define BC_IS_FUNC                  123
#define BC_IS_NOTHING               124

#define BC_Float2Double             125
#define BC_Double2Float             126

#define BC_BNOT                     127

#define BC_COLLECTION_INIT          128

#define BC_TO_STRING_I              129
#define BC_TO_STRING_F              130
#define BC_TO_STRING_U              131

#define BC_STR_TO_I                 132
#define BC_STR_TO_F                 133
#define BC_STR_TO_U                 134

#define BC_UNARY_MINUS_I            135
#define BC_UNARY_MINUS_F            136
#define BC_CONCAT                   137


#define BC_INPUT_CHAR               138

#define BC_CALL_VANGUARD            139

#define BC_CLOCK                    140
#define BC_TIME                     141

// GNL IMPLEMENTATIONS


#define BC_GNL_LOAD                 142
#define BC_GNL_SYMBOL               143
#define BC_GNL_EXEC                 144
#define BC_GNL_CLOSE                145

// Const definition:

#define CONST_NOP                   0
#define CONST_NUM8                  1
#define CONST_NUM16                 2
#define CONST_NUM32                 3
#define CONST_NUM64                 4
#define CONST_TEXT                  5
#define CONST_FUNCTION              6

enum Scopes {
    scope_undefined,
    scope_constant,
    scope_global,
    scope_local
};

enum VariableIDs {
    type_undefined,
    type_none,
    type_ubyte,
    type_byte,
    type_ushort,
    type_short,
    type_uint,
    type_int,
    type_float,
    type_ulong,
    type_long,
    type_double,
    type_text,
    type_function,
    type_Collection,
    type_Progression
};

typedef struct Scope {
    unsigned char rgtr;       // Register
    Token function;  // only necessary if the register is in the stack
} Scope;

typedef struct VarDec {
    Token value;           // name, value
    unsigned int index;    // position
    Scope scope;           // Scope where the variable is defined
    unsigned char type;    // type of the variable
    struct {
        unsigned int num8s;
        unsigned int num16s;
        unsigned int num32s;
        unsigned int num64s;
        unsigned int functions;
        unsigned int texts;
        unsigned int collections;
    } memoryDeclaration;
    char* code;
    unsigned int codelength;
    struct{
        Token type;
        Token name;
        unsigned char is_array;
    } arguments[255];
    unsigned char argumentsCount;
    unsigned char returnType;
    unsigned char returnType_isArray;
    unsigned char is_argument;
    unsigned char argument_index;

    unsigned char storingType;

    unsigned char is_extern;
} VarDec;

typedef struct VariableTable {
    struct {
    // KonstantenScope
        unsigned int const_num8s;
        unsigned int const_num16s;
        unsigned int const_num32s;
        unsigned int const_num64s;
        unsigned int const_functions;
        unsigned int const_texts;
    // GlobalScope
        unsigned int global_num8s;
        unsigned int global_num16s;
        unsigned int global_num32s;
        unsigned int global_num64s;
        unsigned int global_functions;
        unsigned int global_texts;
        unsigned int global_collections;
    } memoryDeclaration;

    // functions

    // Variables
    unsigned int numberOfDeclarations;
    VarDec* declarations;
} VariableTable;

typedef struct CodeGenerator {
    Parser* parser;
    char* code;
    unsigned int codeLength;
    VariableTable table;

    char* global_ops;
    unsigned int global_ops_len;

    ByteWriter globalwriter;

    unsigned int vanguards_size;
    VarDec vanguardFunctions[255];

    unsigned int numberOfLibrarys;
    char* librarys[600];
} CodeGenerator;

unsigned char CodeGenerator_addLibPath(CodeGenerator* codeGenerator, char* path) {
    for(unsigned int i = 0; i < codeGenerator->numberOfLibrarys; i++) {
        if(strcmp(path, codeGenerator->librarys[i]) == 0)
            return 0;
    }
    codeGenerator->librarys[codeGenerator->numberOfLibrarys++] = path;
    return 1;
}

// Help Function to reverse float
double reverseDouble(double value) {
    unsigned char* buffer = (unsigned char*) &value;
    unsigned char new[8];
    new[0] = buffer[4];
    new[1] = buffer[5];
    new[2] = buffer[6];
    new[3] = buffer[7];
    new[0] = buffer[0];
    new[1] = buffer[1];
    new[2] = buffer[2];
    new[3] = buffer[3];
    return *((double*) new);
}

unsigned char tokentypeToDatatype(Token token) {
    switch(token.type) {
        case TTK_Ubyte:
            return type_ubyte;
            break;
        case TTK_Byte:
            return type_byte;
            break;
        case TTK_Ushort:
            return type_ushort;
            break;
        case TTK_Short:
            return type_short;
            break;
        case TTK_Uint:
            return type_uint;
            break;
        case TTK_Int:
            return type_int;
            break;
        case TTK_Float:
            return type_float;
            break;
        case TTK_Ulong:
            return type_ulong;
            break;
        case TTK_Long:
            return type_long;
            break;
        case TTK_Double:
            return type_double;
            break;
        case TTK_Txt:
            return type_text;
            break;
        case TTK_Collection:
            return type_Collection;
            break;
        default:
            return type_none;
            break;
    }
}

unsigned char typeToStackType(unsigned char type) {
    switch(type) {
        case type_ubyte:
        case type_uint:
        case type_ushort:
        case type_ulong:
            return type_ulong;
            break;
        case type_byte:
        case type_short:
        case type_int:
        case type_long:
            return type_long;
            break;
        case type_float:
        case type_double:
            return type_double;
            break;
    }
    return type;
}


CodeGenerator* CodeGenerator_build(Parser* parser) {
    CodeGenerator* codeGenerator = (CodeGenerator*) malloc(sizeof(CodeGenerator));
    if(!codeGenerator) {
        puts("Out of Memory!");
        exit(1);
    }
    codeGenerator->parser = parser;
    codeGenerator->code = NULL;
    codeGenerator->codeLength = 0;
    codeGenerator->table = (VariableTable) {
        .declarations = NULL,
        .memoryDeclaration.const_functions = 0,
        .memoryDeclaration.const_num16s = 0,
        .memoryDeclaration.const_num32s = 0,
        .memoryDeclaration.const_num64s = 0,
        .memoryDeclaration.const_num8s = 0,
        .memoryDeclaration.const_texts = 0,
        .memoryDeclaration.global_collections = 0,
        .memoryDeclaration.global_functions = 0,
        .memoryDeclaration.global_num16s = 0,
        .memoryDeclaration.global_num32s = 0,
        .memoryDeclaration.global_num64s = 0,
        .memoryDeclaration.global_num8s = 0,
        .memoryDeclaration.global_texts = 0,
        .numberOfDeclarations = 0
    };
    codeGenerator->global_ops = NULL;
    codeGenerator->global_ops_len = 0;
    codeGenerator->globalwriter = ByteWriter_init(&codeGenerator->global_ops, &codeGenerator->global_ops_len);
    codeGenerator->vanguards_size = 0;
    codeGenerator->numberOfLibrarys = 0;
    CodeGenerator_generate(codeGenerator);
    return codeGenerator;
}

void CodeGenerator_clear(CodeGenerator codeGenerator) {
    free(codeGenerator.code);
}

void CodeGenerator_includeLib(CodeGenerator* codeGenerator, char* path) {

    if(CodeGenerator_addLibPath(codeGenerator, path) == 0) {
        return;
    }

    char base[512] = "";
    char* abspath = NULL;
    char* incCode = NULL;
    // current path
    abspath = strcat(base, ".\\");
    abspath = strcat(base, path);
    abspath = strcat(base, ".gsm");
    //printf("including: %s\n", abspath);
    if(access(abspath, F_OK ) == 0) {
        // Must be a lib. inside the compiling folder
        incCode = readFile(abspath);
        Tokenizer incTokenizer = Tokenizer_getTokens(incCode);
        Parser incParser = Parser_build(&incTokenizer);
        unsigned int beginTableSize = codeGenerator->table.numberOfDeclarations;
        Parser* realPaser = codeGenerator->parser;
        codeGenerator->parser = &incParser;
        // Program will be compiled

        /*puts("including:");
        for(unsigned int j = 0; j < incParser.numberOfLibrarys; j++) {
            puts(incParser.librarys[j]);
        }*/

        CodeGenerator_generateProgram(codeGenerator, incParser.ast);
        codeGenerator->parser = realPaser;

        // Rename all new declarations as <Name>At<Library>

        for(unsigned int j = beginTableSize; j < codeGenerator->table.numberOfDeclarations; j++) {
            VarDec vardec = codeGenerator->table.declarations[j];
            if(!vardec.is_extern)
                if(vardec.value.type == TT_Identifier) {
                    unsigned int newNameSize = strlen(vardec.value.value.word) + 2 + strlen(path);
                    char* newName = (char*) malloc(sizeof(char) * (newNameSize+1));
                    newName[0] = '\0';
                    newName = strcat(newName, vardec.value.value.word);
                    newName = strcat(newName, "At");
                    newName = strcat(newName, path);
                    vardec.value.value.word = newName;
                    vardec.is_extern = 1;
                }
            codeGenerator->table.declarations[j] = vardec;
        }
        return;
    }
    base[0] = '\0';
    abspath = strcat(base, ".\\lib\\");
    abspath = strcat(base, path);
    abspath = strcat(base, ".gsm");
    //printf("including: %s\n", abspath);
    if(access(abspath, F_OK ) == 0) {
        // Must be a lib. inside the compiling folder
        incCode = readFile(abspath);
        Tokenizer incTokenizer = Tokenizer_getTokens(incCode);
        Parser incParser = Parser_build(&incTokenizer);
        unsigned int beginTableSize = codeGenerator->table.numberOfDeclarations;
        Parser* realPaser = codeGenerator->parser;
        codeGenerator->parser = &incParser;
        // Program will be compiled

        

        CodeGenerator_generateProgram(codeGenerator, incParser.ast);
        codeGenerator->parser = realPaser;

        // Rename all new declarations as <Name>At<Library>

        for(unsigned int j = beginTableSize; j < codeGenerator->table.numberOfDeclarations; j++) {
            VarDec vardec = codeGenerator->table.declarations[j];
            if(!vardec.is_extern)
                if(vardec.value.type == TT_Identifier) {
                    unsigned int newNameSize = strlen(vardec.value.value.word) + 2 + strlen(path);
                    char* newName = (char*) malloc(sizeof(char) * (newNameSize+1));
                    newName[0] = '\0';
                    newName = strcat(newName, vardec.value.value.word);
                    newName = strcat(newName, "At");
                    newName = strcat(newName, path);
                    vardec.value.value.word = newName;
                    vardec.is_extern = 1;
                }
            codeGenerator->table.declarations[j] = vardec;
        }
        return;
    }

    base[0] = '\0';
    abspath = strcat(base, "C:\\GismoLang\\libs\\");
    abspath = strcat(base, path);
    abspath = strcat(base, ".gsm");
    //printf("including: %s\n", abspath);
    if(access(abspath, F_OK ) == 0) {
        // Must be a lib. inside the compiling folder
        incCode = readFile(abspath);
        Tokenizer incTokenizer = Tokenizer_getTokens(incCode);
        Parser incParser = Parser_build(&incTokenizer);
        unsigned int beginTableSize = codeGenerator->table.numberOfDeclarations;
        Parser* realPaser = codeGenerator->parser;
        codeGenerator->parser = &incParser;
        // Program will be compiled

        CodeGenerator_generateProgram(codeGenerator, incParser.ast);
        codeGenerator->parser = realPaser;

        // Rename all new declarations as <Name>At<Library>

        for(unsigned int j = beginTableSize; j < codeGenerator->table.numberOfDeclarations; j++) {
            VarDec vardec = codeGenerator->table.declarations[j];
            if(!vardec.is_extern)
                if(vardec.value.type == TT_Identifier) {
                    unsigned int newNameSize = strlen(vardec.value.value.word) + 2 + strlen(path);
                    char* newName = (char*) malloc(sizeof(char) * (newNameSize+1));
                    newName[0] = '\0';
                    newName = strcat(newName, vardec.value.value.word);
                    newName = strcat(newName, "At");
                    newName = strcat(newName, path);
                    vardec.value.value.word = newName;
                    vardec.is_extern = 1;
                }
            codeGenerator->table.declarations[j] = vardec;
        }
        return;
    }

    printf("Library '%s' Not found!\n", path);
    exit(1);
}

void CodeGenerator_generate(CodeGenerator* codeGenerator) {
    SyntaxNode program = codeGenerator->parser->ast;
    ByteWriter byteWriter = ByteWriter_init(&codeGenerator->code, &codeGenerator->codeLength);
    VarDec mainfunction = VariableTable_declareVariable(&codeGenerator->table, (Token) {.type = TT_Identifier, .value.word = "$$main$$"}, (Scope) {.rgtr = scope_constant});
    VariableTable_defineVariable(&codeGenerator->table, mainfunction.value, type_function);

    CodeGenerator_generateProgram(codeGenerator, codeGenerator->parser->ast);
    

    // Code Generation

    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.const_num8s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.const_num16s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.const_num32s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.const_num64s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.const_functions);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.const_texts);

    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.global_num8s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.global_num16s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.global_num32s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.global_num64s);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.global_functions);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.global_texts);
    ByteWriter_writeUInt(&byteWriter, codeGenerator->table.memoryDeclaration.global_collections);

    for(unsigned int i = 0; i < codeGenerator->table.memoryDeclaration.const_num8s; i++) {
        ByteWriter_writeByte(&byteWriter, CONST_NUM8);
        VarDec declaration = VariableTable_findConstantByIndex(&codeGenerator->table, i, type_byte); // 1 Byte
        ByteWriter_writeByte(&byteWriter, declaration.value.value.u);
    }

    for(unsigned int i = 0; i < codeGenerator->table.memoryDeclaration.const_num16s; i++) {
        ByteWriter_writeByte(&byteWriter, CONST_NUM16);
        VarDec declaration = VariableTable_findConstantByIndex(&codeGenerator->table, i, type_short); // 2 Byte
        ByteWriter_writeUShort(&byteWriter, declaration.value.value.u);
    }

    for(unsigned int i = 0; i < codeGenerator->table.memoryDeclaration.const_num32s; i++) {
        ByteWriter_writeByte(&byteWriter, CONST_NUM32);
        VarDec declaration = VariableTable_findConstantByIndex(&codeGenerator->table, i, type_int); // 4 Byte
        switch(declaration.type) {
            case type_uint:
                ByteWriter_writeUInt(&byteWriter, (unsigned int) declaration.value.value.u);
                break;
            case type_int:
                ByteWriter_writeInt(&byteWriter, (int) declaration.value.value.i);
                break;
            case type_float:
                ByteWriter_writeFloat(&byteWriter, (float) declaration.value.value.f);
                break;
        }
    }

    for(unsigned int i = 0; i < codeGenerator->table.memoryDeclaration.const_num64s; i++) {
        ByteWriter_writeByte(&byteWriter, CONST_NUM64);
        VarDec declaration = VariableTable_findConstantByIndex(&codeGenerator->table, i, type_long); // 8 Byte
        if(declaration.type == type_double) {
            ByteWriter_writeDouble(&byteWriter, reverseDouble(declaration.value.value.f));
        }
        else
            ByteWriter_writeULongLong(&byteWriter, declaration.value.value.u);
    }

    for(unsigned int i = 0; i < codeGenerator->table.memoryDeclaration.const_texts; i++) {
        ByteWriter_writeByte(&byteWriter, CONST_TEXT);
        VarDec declaration = VariableTable_findConstantByIndex(&codeGenerator->table, i, type_text);
        ByteWriter_writeUInt(&byteWriter, strlen(declaration.value.value.word));
        for(unsigned int ci = 0; ci < strlen(declaration.value.value.word); ci++){
            ByteWriter_writeByte(&byteWriter, declaration.value.value.word[ci]);
        }
    }

    ByteWriter_writeByte(&byteWriter, CONST_FUNCTION);
    ByteWriter_writeUInt(&byteWriter, 0);
    ByteWriter_writeUInt(&byteWriter, 0);
    ByteWriter_writeUInt(&byteWriter, 0);
    ByteWriter_writeUInt(&byteWriter, 0);
    ByteWriter_writeUInt(&byteWriter, 0);
    ByteWriter_writeUInt(&byteWriter, 0);
    ByteWriter_writeUInt(&byteWriter, 0);

    ByteWriter_writeUInt(&byteWriter, (codeGenerator->vanguards_size) * 8 + 5 + codeGenerator->global_ops_len + (codeGenerator->vanguards_size != 0 ? 1 : 0));
    ByteWriter_addOps(&byteWriter, codeGenerator->global_ops, codeGenerator->global_ops_len);
    ByteWriter_writeByte(&byteWriter, BC_LOAD_ARGUMENT);
    ByteWriter_writeUInt(&byteWriter, 0);
    for(unsigned int i = 0; i < codeGenerator->vanguards_size; i++) {
        ByteWriter_writeByte(&byteWriter, BC_COPY_COLLECTION);
        ByteWriter_writeByte(&byteWriter, BC_LOAD_CONST_FUNC);
        ByteWriter_writeUInt(&byteWriter, VariableTable_findVariableByName(&codeGenerator->table, codeGenerator->vanguardFunctions[i].value).index);
        ByteWriter_writeByte(&byteWriter, BC_SWAP);
        if(i == codeGenerator->vanguards_size-1) {
            ByteWriter_writeByte(&byteWriter, BC_CALL_FUNC);
            ByteWriter_writeByte(&byteWriter, BC_POP);
        }
        else
            ByteWriter_writeByte(&byteWriter, BC_CALL_VANGUARD);
    }

    free(codeGenerator->global_ops);

    for(unsigned int i = 1; i < codeGenerator->table.memoryDeclaration.const_functions; i++) {
        VarDec fn = VariableTable_findConstantByIndex(&codeGenerator->table, i, type_function);
        ByteWriter_writeByte(&byteWriter, CONST_FUNCTION);
        ByteWriter_writeUInt(&byteWriter, fn.memoryDeclaration.num8s);
        ByteWriter_writeUInt(&byteWriter, fn.memoryDeclaration.num16s);
        ByteWriter_writeUInt(&byteWriter, fn.memoryDeclaration.num32s);
        ByteWriter_writeUInt(&byteWriter, fn.memoryDeclaration.num64s);
        ByteWriter_writeUInt(&byteWriter, fn.memoryDeclaration.functions);
        ByteWriter_writeUInt(&byteWriter, fn.memoryDeclaration.texts);
        ByteWriter_writeUInt(&byteWriter, fn.memoryDeclaration.collections);
        ByteWriter_writeUInt(&byteWriter, fn.codelength);
        ByteWriter_addOps(&byteWriter, fn.code, fn.codelength);
    }
}

void CodeGenerator_generateProgram(struct CodeGenerator* codeGenerator, struct SyntaxNode program) {
    SyntaxNode node;

    for(unsigned int i = 0; i < program.programsNode->size; i++) {
        node = program.programsNode->declarations[i];
        switch(node.type) {
            case ID_FunctionNode:
            {
                // Function declaration:
                FunctionNode functionNode = *node.functionNode;
                VarDec functiondeclaration = VariableTable_declareVariable(&codeGenerator->table, functionNode.name, (Scope) {.rgtr = scope_constant});
                VariableTable_defineVariable(&codeGenerator->table, functiondeclaration.value, type_function);
                functiondeclaration = VariableTable_findVariableByName(&codeGenerator->table, functiondeclaration.value);
                if(functionNode.arguments.type != ID_None) {
                    unsigned char j = 0;
                    ArgumentNode next = *functionNode.arguments.argumentNode;
                    unsigned char is_next = 1;
                    while(is_next) {
                        functiondeclaration.arguments[j].name = next.name;
                        functiondeclaration.arguments[j].type = next.type;
                        functiondeclaration.arguments[j].is_array = next.is_array;
                        j++;
                        if(next.next.type == ID_None)
                            is_next = 0;
                        else
                            next = *next.next.argumentNode;
                    }
                    functiondeclaration.argumentsCount = j;
                }
                functiondeclaration.returnType = tokentypeToDatatype(functionNode.returnType);
                functiondeclaration.returnType_isArray = functionNode.returns_array;
                VariableTable_setVariableByName(&codeGenerator->table, functiondeclaration.value, functiondeclaration);
            }
                break;
            case ID_VanguardNode:
                // Vanguard declaration:
            {
                FunctionNode functionNode = *node.vanguardNode->functionDeclaration.functionNode;
                VarDec functiondeclaration = VariableTable_declareVariable(&codeGenerator->table, functionNode.name, (Scope) {.rgtr = scope_constant, .function = (Token) {.type = TT_Identifier}});
                VariableTable_defineVariable(&codeGenerator->table, functiondeclaration.value, type_function);
                functiondeclaration = VariableTable_findVariableByName(&codeGenerator->table, functiondeclaration.value);
                if(functionNode.arguments.type != ID_None) {
                    unsigned char j = 0;
                    ArgumentNode next = *functionNode.arguments.argumentNode;
                    unsigned char is_next = 1;
                    while(is_next) {
                        functiondeclaration.arguments[j].name = next.name;
                        functiondeclaration.arguments[j].type = next.type;
                        functiondeclaration.arguments[j].is_array = next.is_array;
                        j++;
                        if(next.next.type == ID_None)
                            is_next = 0;
                        else
                            next = *next.next.argumentNode;
                    }
                    functiondeclaration.argumentsCount = j;
                }
                functiondeclaration.returnType = tokentypeToDatatype(functionNode.returnType);
                functiondeclaration.returnType_isArray = functionNode.returns_array;
                VariableTable_setVariableByName(&codeGenerator->table, functiondeclaration.value, functiondeclaration);
                codeGenerator->vanguardFunctions[codeGenerator->vanguards_size++] = functiondeclaration;
            }
                break;
        }
    }

    for(unsigned int i = 0; i < codeGenerator->parser->numberOfLibrarys; i++) {
        char* path = codeGenerator->parser->librarys[i];
        CodeGenerator_includeLib(codeGenerator, path);
    }

    /*
    char* global_ops = NULL;
    unsigned int global_ops_len = 0;

    ByteWriter globalwriter = ByteWriter_init(&global_ops, &global_ops_len);
    */
   
    for(unsigned int i = 0; i < program.programsNode->size; i++) {
        node = program.programsNode->declarations[i];
        if(node.type == ID_BinOpNode) {
            unsigned char type = CodeGenerator_generateExpression(codeGenerator, node, (Scope) {.rgtr = scope_global}, &codeGenerator->globalwriter);
            if(type != type_none) {
                puts("Must be a declaration!");
                markTokenError(codeGenerator->parser->tokenizer->code, node.binOpNode->operator);
                exit(1);
            }
        }
    }

    for(unsigned int i = 0; i < program.programsNode->size; i++) {
        node = program.programsNode->declarations[i];
        if(node.type == ID_FunctionNode) {
            FunctionNode functionNode = *node.functionNode;
            VarDec functiondeclaration = VariableTable_findVariableByName(&codeGenerator->table, functionNode.name);
            ByteWriter tempWriter = ByteWriter_init(&functiondeclaration.code, &functiondeclaration.codelength); 
            Scope fscope = (Scope) {
                .rgtr = scope_local,
                .function = functiondeclaration.value
            };
            for(unsigned char argsIndex = 0; argsIndex < functiondeclaration.argumentsCount; argsIndex++) {
                VarDec argumentvar = VariableTable_declareVariable(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, fscope);
                unsigned index;
                if(functiondeclaration.arguments[argsIndex].is_array)
                    index = VariableTable_defineVariable(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, type_Collection);
                else
                    index = VariableTable_defineVariable(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type));
                argumentvar.is_argument = 1;
                argumentvar.argument_index = (functiondeclaration.argumentsCount - argsIndex)-1;
                argumentvar.index = index;
                argumentvar.type = functiondeclaration.arguments[argsIndex].is_array ? type_Collection : tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type);
                if(functiondeclaration.arguments[argsIndex].is_array) {
                    argumentvar.storingType = tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type);
                }
                VariableTable_setVariableByName(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, argumentvar);

                ByteWriter_writeByte(&tempWriter, BC_LOAD_ARGUMENT);
                ByteWriter_writeUInt(&tempWriter, argumentvar.argument_index);
                if(functiondeclaration.arguments[argsIndex].is_array) {
                    ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_COLLECTION);
                }
                else
                    switch(tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type)) {
                        case type_ubyte:
                        case type_byte:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM8);
                            break;
                        case type_ushort:
                        case type_short:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM16);
                            break;
                        case type_uint:
                        case type_int:
                        case type_float:
                            if(tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type) == type_float) {
                                ByteWriter_writeByte(&tempWriter, BC_Double2Float);
                            }
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM32);
                            break;
                        case type_ulong:
                        case type_long:
                        case type_double:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM64);
                            break;
                        case type_text:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_TEXT);
                            break;
                        default:
                            puts("This kind of type isn't supported yet!");
                            exit(1);
                    }
                ByteWriter_writeUInt(&tempWriter, argumentvar.index);
            }
            CodeGenerator_generateStatement(codeGenerator, functionNode.statements, fscope, &tempWriter);
            VarDec datafunctiondeclaration = VariableTable_findVariableByName(&codeGenerator->table, functionNode.name);
            functiondeclaration.memoryDeclaration = datafunctiondeclaration.memoryDeclaration;
            VariableTable_setVariableByName(&codeGenerator->table, functiondeclaration.value, functiondeclaration);
            VariableTable_removeAllLocal(&codeGenerator->table);
        }
        else if(node.type == ID_VanguardNode) {
            FunctionNode functionNode = *node.vanguardNode->functionDeclaration.functionNode;
            VarDec functiondeclaration = VariableTable_findVariableByName(&codeGenerator->table, functionNode.name);
            ByteWriter tempWriter = ByteWriter_init(&functiondeclaration.code, &functiondeclaration.codelength);
            Scope fscope = (Scope) {
                .rgtr = scope_local,
                .function = functiondeclaration.value
            };
            for(unsigned char argsIndex = 0; argsIndex < functiondeclaration.argumentsCount; argsIndex++) {
                VarDec argumentvar = VariableTable_declareVariable(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, fscope);
                unsigned index;
                if(functiondeclaration.arguments[argsIndex].is_array)
                    index = VariableTable_defineVariable(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, type_Collection);
                else
                    index = VariableTable_defineVariable(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type));
                argumentvar.is_argument = 1;
                argumentvar.argument_index = (functiondeclaration.argumentsCount - argsIndex)-1;
                argumentvar.index = index;
                argumentvar.type = functiondeclaration.arguments[argsIndex].is_array ? type_Collection : tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type);
                if(functiondeclaration.arguments[argsIndex].is_array) {
                    argumentvar.storingType = tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type);
                }
                VariableTable_setVariableByName(&codeGenerator->table, functiondeclaration.arguments[argsIndex].name, argumentvar);

                ByteWriter_writeByte(&tempWriter, BC_LOAD_ARGUMENT);
                ByteWriter_writeUInt(&tempWriter, argumentvar.argument_index);
                if(functiondeclaration.arguments[argsIndex].is_array) {
                    ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_COLLECTION);
                }
                else
                    switch(tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type)) {
                        case type_ubyte:
                        case type_byte:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM8);
                            break;
                        case type_ushort:
                        case type_short:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM16);
                            break;
                        case type_uint:
                        case type_int:
                        case type_float:
                            if(tokentypeToDatatype(functiondeclaration.arguments[argsIndex].type) == type_float) {
                                ByteWriter_writeByte(&tempWriter, BC_Double2Float);
                            }
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM32);
                            break;
                        case type_ulong:
                        case type_long:
                        case type_double:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_NUM64);
                            break;
                        case type_text:
                            ByteWriter_writeByte(&tempWriter, BC_STORE_STACK_TEXT);
                            break;
                        default:
                            puts("This kind of type isn't supported yet!");
                            exit(1);
                    }
                ByteWriter_writeUInt(&tempWriter, argumentvar.index);
            }
            CodeGenerator_generateStatement(codeGenerator, functionNode.statements, fscope, &tempWriter);
            VarDec datafunctiondeclaration = VariableTable_findVariableByName(&codeGenerator->table, functionNode.name);
            functiondeclaration.memoryDeclaration = datafunctiondeclaration.memoryDeclaration;
            VariableTable_setVariableByName(&codeGenerator->table, functiondeclaration.value, functiondeclaration);
            VariableTable_removeAllLocal(&codeGenerator->table);
        }
    }
}


void CodeGenerator_generateStatement(struct CodeGenerator* codeGenerator, struct SyntaxNode node, struct Scope scope, struct ByteWriter* byteWriter) {
    switch(node.type) {
        case ID_IfNode:
        {
            // If-Statement
            IfNode ifNode = *node.ifNode;
            CodeGenerator_generateExpression(codeGenerator, ifNode.condition, scope, byteWriter);
            char* statementsCode = NULL;
            unsigned int statementsCodeLength = 0;
            char* elseStatementsCode = NULL;
            unsigned int elseStatementsCodeLength = 0;
            ByteWriter tempWriter = ByteWriter_init(&statementsCode, &statementsCodeLength);
            CodeGenerator_generateStatement(codeGenerator, ifNode.statements, scope, &tempWriter);
            tempWriter = (ByteWriter) ByteWriter_init(&elseStatementsCode, &elseStatementsCodeLength); 
            CodeGenerator_generateStatement(codeGenerator, ifNode.elseStatements, scope, &tempWriter);
            ByteWriter_writeByte(byteWriter, BC_JUMP_IF_TRUE_POS);
            ByteWriter_writeUShort(byteWriter, elseStatementsCodeLength+3);
            ByteWriter_addOps(byteWriter, elseStatementsCode, elseStatementsCodeLength);
            ByteWriter_writeByte(byteWriter, BC_JUMP_POS);
            ByteWriter_writeUShort(byteWriter, statementsCodeLength);
            ByteWriter_addOps(byteWriter, statementsCode, statementsCodeLength);
        }
            break;
        case ID_WhileNode:
        {
            // While-Statement
            WhileNode whileNode = *node.whileNode;
            char* statements = NULL;
            unsigned int statementsLength = 0;
            unsigned int begin = *byteWriter->length;
            ByteWriter tempWriter = ByteWriter_init(&statements, &statementsLength);
            CodeGenerator_generateStatement(codeGenerator, whileNode.statements, scope, &tempWriter);
            CodeGenerator_generateExpression(codeGenerator, whileNode.condition, scope, byteWriter);
            ByteWriter_writeByte(byteWriter, BC_JUMP_IF_FALSE_POS);
            ByteWriter_writeUShort(byteWriter, statementsLength+3);
            ByteWriter_addOps(byteWriter, statements, statementsLength);
            unsigned int end = *byteWriter->length;
            unsigned short spann = end - begin;
            ByteWriter_writeByte(byteWriter, BC_JUMP_NEG);
            ByteWriter_writeUShort(byteWriter, spann);
        }
            break;
        case ID_StatementsNode:
        {
            StatementsNode statementNode = *node.statementsNode;
            CodeGenerator_generateStatement(codeGenerator, statementNode.first, scope, byteWriter);
            CodeGenerator_generateStatement(codeGenerator, statementNode.second, scope, byteWriter);
        }
            break;
        case ID_ReturnNode:
        {
            ReturnNode returnNode = *node.returnNode;
            unsigned char type = type_none;
            VarDec fn = VariableTable_findVariableByName(&codeGenerator->table, scope.function);
            unsigned char returntype = fn.returnType;
            if(returntype != type_none)
                type = CodeGenerator_generateExpression(codeGenerator, returnNode.expression, scope, byteWriter);

            returntype = typeToStackType(returntype);
            type = typeToStackType(type);

            // if the function has no implicit type and it returns something, it will take the type of the return
            //if(returntype == type_none) {
            //    fn.returnType = type;
            //    VariableTable_setVariableByName(&codeGenerator->table, fn.value, fn);
            //    fn = VariableTable_findVariableByName(&codeGenerator->table, fn.value);
            //    returntype = type;
            //}

            if(returntype != type) {
                switch(type) {
                    case type_ulong:
                        if(returntype == type_long)
                            ByteWriter_writeByte(byteWriter, BC_U2I);
                        else if(returntype == type_double)
                            ByteWriter_writeByte(byteWriter, BC_U2F);
                        else {
                            puts("The Function returns a different Datatype!");
                            markTokenError(codeGenerator->parser->tokenizer->code, fn.value);
                            exit(1);
                        }
                        break;
                    case type_long:
                        if(returntype == type_ulong)
                            ByteWriter_writeByte(byteWriter, BC_I2U);
                        else if(returntype == type_double)
                            ByteWriter_writeByte(byteWriter, BC_I2F);
                        else {
                            puts("The Function returns a different Datatype!");
                            markTokenError(codeGenerator->parser->tokenizer->code, fn.value);
                            exit(1);
                        }
                        break;
                    case type_double:
                        if(returntype == type_ulong)
                            ByteWriter_writeByte(byteWriter, BC_F2U);
                        else if(returntype == type_long)
                            ByteWriter_writeByte(byteWriter, BC_F2I);
                        else {
                            puts("The Function returns a different Datatype!");
                            markTokenError(codeGenerator->parser->tokenizer->code, fn.value);
                            exit(1);
                        }
                        break;
                    case type_text:
                        puts("The Function returns a different Datatype!");
                        markTokenError(codeGenerator->parser->tokenizer->code, fn.value);
                        exit(1);
                        break;
                    case type_Collection:
                        puts("The Function returns a different Datatype!");
                        markTokenError(codeGenerator->parser->tokenizer->code, fn.value);
                        exit(1);
                        break;
                    case type_none:
                        ByteWriter_writeByte(byteWriter, BC_BUILD_EMPTYCOLLECTION);
                        break;
                }
            }

            ByteWriter_writeByte(byteWriter, BC_RETURN_ELEMENT);
        }
            break;
        default:;
            // Expression
            unsigned char type = CodeGenerator_generateExpression(codeGenerator, node, scope, byteWriter);
            if(type != type_none)
                ByteWriter_writeByte(byteWriter, BC_POP);
    }
}

// returns a type
unsigned char CodeGenerator_generateExpression(struct CodeGenerator* codeGenerator, struct SyntaxNode node, struct Scope scope, struct ByteWriter* byteWriter) {
    switch(node.type) {
        case ID_BinOpNode:
        {
            BinOpNode* binOpNode = node.binOpNode;
            switch(binOpNode->operator.type) {
                case TT_Plus:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);

                    // Actually it parses it in the wrong order so here it gets fixed
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int + Int = Int
                    // UInt + UInt = UInt
                    // Float + Float = Float
                    // Int + Float = Float
                    // UInt + Float = Float
                    // Int + UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_U);
                                    return type_ulong;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_I);
                                    return type_long;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_F);
                                    return type_double;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_F);
                                    return type_double;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_ADD_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_text:
                            if(type_right == type_text) {
                                ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                ByteWriter_writeByte(byteWriter, BC_CONCAT);
                                return type_text;
                            } else {
                                puts("Cannot work with collections yet!");
                                exit(1);
                            }
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;
                case TT_Minus:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int - Int = Int
                    // UInt - UInt = UInt
                    // Float - Float = Float
                    // Int - Float = Float
                    // UInt - Float = Float
                    // Int - UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_U);
                                    return type_ulong;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_I);
                                    return type_long;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_F);
                                    return type_double;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_F);
                                    return type_double;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SUB_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;
                case TT_Muliply:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int * Int = Int
                    // UInt * UInt = UInt
                    // Float * Float = Float
                    // Int * Float = Float
                    // UInt * Float = Float
                    // Int * UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_U);
                                    return type_ulong;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_I);
                                    return type_long;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_F);
                                    return type_double;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_F);
                                    return type_double;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MUL_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;
                case TT_Divide:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int / Int = Int
                    // UInt / UInt = UInt
                    // Float / Float = Float
                    // Int / Float = Float
                    // UInt / Float = Float
                    // Int / UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_U);
                                    return type_ulong;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_I);
                                    return type_long;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_I);
                                    return type_long;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_F);
                                    return type_double;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_F);
                                    return type_double;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_DIV_F);
                                    return type_double;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;
                case TT_Modulo:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MOD_U);
                                    return type_ulong;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_MOD_I);
                                    return type_long;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_MOD_I);
                                    return type_long;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_MOD_I);
                                    return type_long;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_EqualsEquals:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    // Int == Int = ubyte
                    // UInt == UInt = ubyte
                    // Float == Float = ubyte
                    // Int == Float = ubyte
                    // UInt == Float = ubyte
                    // Int == UInt = ubyte
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_U);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_I);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_F);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_Less:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int < Int = ubyte
                    // UInt < UInt = ubyte
                    // Float < Float = ubyte
                    // Int < Float = ubyte
                    // UInt < Float = ubyte
                    // Int < UInt = ubyte
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_U);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_IU);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FU);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_IU);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_I);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FI);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FU);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FI);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_F);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_Greater:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int < Int = ubyte
                    // UInt < UInt = ubyte
                    // Float < Float = ubyte
                    // Int < Float = ubyte
                    // UInt < Float = ubyte
                    // Int < UInt = ubyte
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_U);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_IU);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FU);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_IU);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_I);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FI);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FU);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FI);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_F);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;


                case TT_LessEquals:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int <= Int = ubyte
                    // UInt <= UInt = ubyte
                    // Float <= Float = ubyte
                    // Int <= Float = ubyte
                    // UInt <= Float = ubyte
                    // Int <= UInt = ubyte
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_U);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_U);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_IU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_IU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_I);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_I);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FI);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FI);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_F);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_F);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_GreaterEquals:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int <= Int = ubyte
                    // UInt <= UInt = ubyte
                    // Float <= Float = ubyte
                    // Int <= Float = ubyte
                    // UInt <= Float = ubyte
                    // Int <= UInt = ubyte
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_U);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_U);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_IU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_IU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_I);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_I);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_BIGGER_FI);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FU);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_FI);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_F);
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_SMALLER_F);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_NotEquals:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);
                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    // Int == Int = ubyte
                    // UInt == UInt = ubyte
                    // Float == Float = ubyte
                    // Int == Float = ubyte
                    // UInt == Float = ubyte
                    // Int == UInt = ubyte
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_U);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_IU);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_I);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_SWAP);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_float:
                        case type_double:
                            // Float
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FU);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_FI);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                                case type_float:
                                case type_double:
                                    // Float
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_EQ_F);
                                    ByteWriter_writeByte(byteWriter, BC_NOT);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_And:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);

                    // Actually it parses it in the wrong order so here it gets fixed
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int + Int = Int
                    // UInt + UInt = UInt
                    // Float + Float = Float
                    // Int + Float = Float
                    // UInt + Float = Float
                    // Int + UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_ulong;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_long;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_long;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_long;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_Or:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);

                    // Actually it parses it in the wrong order so here it gets fixed
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int + Int = Int
                    // UInt + UInt = UInt
                    // Float + Float = Float
                    // Int + Float = Float
                    // UInt + Float = Float
                    // Int + UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ulong;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_long;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_long;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_long;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_AndAnd:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);

                    // Actually it parses it in the wrong order so here it gets fixed
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int + Int = Int
                    // UInt + UInt = UInt
                    // Float + Float = Float
                    // Int + Float = Float
                    // UInt + Float = Float
                    // Int + UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_writeByte(byteWriter, BC_AND);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TT_OrOr:
                {
                    char* left_ops = NULL;
                    unsigned int left_ops_length = 0;
                    char* right_ops = NULL;
                    unsigned int right_ops_length = 0;
                    ByteWriter tmpWriter = ByteWriter_init(&left_ops, &left_ops_length);

                    tmpWriter = ByteWriter_init(&right_ops, &right_ops_length);

                    // Actually it parses it in the wrong order so here it gets fixed
                    unsigned char type_left = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, &tmpWriter);
                    unsigned char type_right = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, &tmpWriter);

                    // Int + Int = Int
                    // UInt + UInt = UInt
                    // Float + Float = Float
                    // Int + Float = Float
                    // UInt + Float = Float
                    // Int + UInt = Int
                    switch(type_left) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            // UInt
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            // Int
                            switch(type_right) {
                                case type_ubyte:
                                case type_ushort:
                                case type_uint:
                                case type_ulong:
                                    // UInt
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                                case type_byte:
                                case type_short:
                                case type_int:
                                case type_long:
                                    // Int
                                    ByteWriter_addOps(byteWriter, left_ops, left_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_addOps(byteWriter, right_ops, right_ops_length);
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    ByteWriter_writeByte(byteWriter, BC_OR);
                                    return type_ubyte;
                                    break;
                            }
                            break;
                        case type_text:
                            puts("Cannot work with text yet!");
                            exit(1);
                            break;
                        case type_Collection:
                            puts("Cannot work with collections yet!");
                            exit(1);
                            break;
                        default:
                            puts("Unusable Datatype!");
                            exit(1);
                            break;
                    }
                }
                    break;

                case TTK_Is:
                {
                    
                    if(binOpNode->left.type != ID_ValueNode) 
                        if(binOpNode->left.valueNode->value.type != TT_Identifier){
                            puts("Expected an identifier!");
                            markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->left.valueNode->value);
                            exit(1);
                        }
                    Token variableName = binOpNode->left.valueNode->value;

                    if(VariableTable_findVariableByName(&codeGenerator->table, variableName).type == type_undefined) {
                        VariableTable_declareVariable(&codeGenerator->table, variableName, scope);
                    }
                    if(VariableTable_findVariableByName(&codeGenerator->table, variableName).type != type_none) {
                        puts("Variable has already a type!");
                        markTokenError(codeGenerator->parser->tokenizer->code, variableName);
                        exit(1);
                    }
                    VarDec variableDeclaration = VariableTable_findVariableByName(&codeGenerator->table, variableName);

                    if(variableDeclaration.is_argument) {
                        puts("Variable is a function-argument!");
                        markTokenError(codeGenerator->parser->tokenizer->code, variableName);
                        exit(1);
                    }

                    if(binOpNode->right.type == ID_ValueNode) {
                        Token variableType = binOpNode->right.valueNode->value;
                        switch(variableType.type) {
                            
                            case TTK_Ubyte:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_ubyte);
                                return type_none;
                                break;
                            case TTK_Byte:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_byte);
                                return type_none;
                                break;
                            case TTK_Ushort:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_ushort);
                                return type_none;
                                break;
                            case TTK_Short:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_short);
                                return type_none;
                                break;
                            case TTK_Uint:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_uint);
                                return type_none;
                                break;
                            case TTK_Int:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_int);
                                return type_none;
                                break;
                            case TTK_Float:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_float);
                                return type_none;
                                break;
                            case TTK_Ulong:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_ulong);
                                return type_none;
                                break;
                            case TTK_Long:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_long);
                                return type_none;
                                break;
                            case TTK_Double:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_double);
                                return type_none;
                                break;

                            case TTK_Txt:
                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_text);
                                return type_none;
                                break;

                           /*  case TTK_Collection:
                            {

                                VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_Collection);
                            }
                                return type_none;
                                break; */

                            default:
                                puts("Expected a type!");
                                markTokenError(codeGenerator->parser->tokenizer->code, variableType);
                                exit(1);
                        }
                        
                    }
                    else if(binOpNode->right.type == ID_SquareCallNode) {
                        SquareCallNode squareCallNode = *binOpNode->right.squareCallNode;
                        if(squareCallNode.identifier.type == ID_ValueNode) {
                            ValueNode collectionType = *squareCallNode.identifier.valueNode;
                            /*switch(collectionType.value.type) {
                                case TTK_Collection:
                                {
                                    if(squareCallNode.numbersOfArguments == 0 || squareCallNode.arguments[0].type != ID_ValueNode) {
                                        puts("Cannot create Collection without type!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, variableName);
                                        exit(1);
                                    }
                                    Token storingType = squareCallNode.arguments[0].valueNode->value;
                                    VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_Collection);
                                    VarDec collection = VariableTable_findVariableByName(&codeGenerator->table, variableDeclaration.value);
                                    collection.storingType = tokentypeToDatatype(storingType);
                                    VariableTable_setVariableByName(&codeGenerator->table, variableDeclaration.value, collection);

                                    // Initzalisation
                                    ByteWriter_writeByte(byteWriter, BC_BUILD_EMPTYCOLLECTION);
                                    switch(scope.rgtr) {
                                        case scope_local:
                                            ByteWriter_writeByte(byteWriter, BC_STORE_STACK_COLLECTION);
                                            break;
                                        case scope_global:
                                            ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_COLLECTION);
                                            break;
                                    }
                                    ByteWriter_writeUInt(byteWriter, collection.index);
                                    return type_none;
                                }
                                    break;
                                default:
                                    puts("Cannot create Collection!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, variableName);
                                    exit(1);
                            }*/
                            unsigned char arrayType = typeToStackType(tokentypeToDatatype(collectionType.value));


                            VariableTable_defineVariable(&codeGenerator->table, variableDeclaration.value, type_Collection);
                            VarDec collection = VariableTable_findVariableByName(&codeGenerator->table, variableDeclaration.value);
                            collection.storingType = arrayType;
                            VariableTable_setVariableByName(&codeGenerator->table, variableDeclaration.value, collection);

                            // Initzalisation
                            ByteWriter_writeByte(byteWriter, BC_BUILD_EMPTYCOLLECTION);
                            for(unsigned int e = 0; e < squareCallNode.numbersOfArguments; e++) {
                                unsigned char etype = CodeGenerator_generateExpression(codeGenerator, squareCallNode.arguments[e], scope, byteWriter);
                                etype = typeToStackType(etype);
                                if(etype != arrayType) {
                                    puts("All elements must be the same type of the array!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, variableName);
                                    exit(1);
                                }
                                ByteWriter_writeByte(byteWriter, BC_ADD_ELEMENT);
                            }
                            switch(collection.scope.rgtr) {
                                case scope_local:
                                    ByteWriter_writeByte(byteWriter, BC_STORE_STACK_COLLECTION);
                                    break;
                                case scope_global:
                                    ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_COLLECTION);
                                    break;
                            }
                            ByteWriter_writeUInt(byteWriter, collection.index);
                            return type_none;
                        } else {
                            puts("Cannot create Collection!");
                            markTokenError(codeGenerator->parser->tokenizer->code, variableName);
                            exit(1);
                        }
                    }
                    else {
                        puts("Missing Type!");
                        markTokenError(codeGenerator->parser->tokenizer->code, variableName);
                        exit(1);
                    }
                }
                
                break;

                case TT_Colon:
                {
                    SyntaxNode nodeleft = binOpNode->left;
                    SyntaxNode noderight = binOpNode->right;

                    if(nodeleft.type == ID_SquareCallNode) {
                        unsigned char type = CodeGenerator_generateExpression(codeGenerator, noderight, scope, byteWriter);
                        SquareCallNode squareCallNode = *nodeleft.squareCallNode;
                        Token name = squareCallNode.identifier.valueNode->value;
                        VarDec collection = VariableTable_findVariableByName(&codeGenerator->table, name);
                        unsigned char ctype = typeToStackType(collection.storingType);

                        if(ctype != typeToStackType(type)) {
                            puts("No given index!");
                            markTokenError(codeGenerator->parser->tokenizer->code, name);
                            exit(1);
                        }
                        
                        // Loading Collection
                        if(collection.scope.rgtr == scope_local)
                            ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_COLLECTION);
                        else
                            ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_COLLECTION);

                        ByteWriter_writeUInt(byteWriter, collection.index);
                        ByteWriter_writeByte(byteWriter, BC_SWAP);

                        if(squareCallNode.numbersOfArguments == 0) {
                            puts("No given index!");
                            markTokenError(codeGenerator->parser->tokenizer->code, name);
                            exit(1);
                        }
                        CodeGenerator_generateExpression(codeGenerator, squareCallNode.arguments[0], scope, byteWriter);

                        ByteWriter_writeByte(byteWriter, BC_STORE_ELEMENT);

                        // Cleaning up by storing the collection back
                        if(collection.scope.rgtr == scope_local)
                            ByteWriter_writeByte(byteWriter, BC_STORE_STACK_COLLECTION);
                        else
                            ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_COLLECTION);

                        ByteWriter_writeUInt(byteWriter, collection.index);
                        return type_none;
                    }

                    if(nodeleft.type != ID_ValueNode) 
                        if(nodeleft.valueNode->value.type != TT_Identifier) {
                            puts("Only except an identifier; no 'is' statement with an colon operator!");
                            markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                            exit(1);
                        }
                    unsigned char type = CodeGenerator_generateExpression(codeGenerator, noderight, scope, byteWriter);
                    VarDec vardec = VariableTable_findVariableByName(&codeGenerator->table, nodeleft.valueNode->value);


                    unsigned int index = 0;
                    if(vardec.type == type_undefined) {
                        vardec = VariableTable_declareVariable(&codeGenerator->table, nodeleft.valueNode->value, scope);
                        index = VariableTable_defineVariable(&codeGenerator->table, nodeleft.valueNode->value, type_text);
                    }
                    else {
                        index = vardec.index;
                    }
                    if(type != type_text) {
                        puts("Only except an text value!");
                        markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                        exit(1);
                    }
                    switch(vardec.scope.rgtr) {
                        case scope_global:
                            ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_TEXT);
                            break;
                        case scope_local:
                            ByteWriter_writeByte(byteWriter, BC_STORE_STACK_TEXT);
                            break;
                        
                        default:
                            puts("Unsupported scope!");
                            markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                            exit(1);
                    }
                    ByteWriter_writeUInt(byteWriter, index);
                    return type_none;
                }
                    break;

                case TT_Equalsign:
                {
                    SyntaxNode nodeleft = binOpNode->left;
                    unsigned char type = CodeGenerator_generateExpression(codeGenerator, binOpNode->right, scope, byteWriter);

                    if(nodeleft.type == ID_BinOpNode) {
                        BinOpNode binOpNode_def = *nodeleft.binOpNode;
                        if(binOpNode_def.operator.type == TTK_Is) {
                            CodeGenerator_generateExpression(codeGenerator, nodeleft, scope, byteWriter);
                            nodeleft = nodeleft.binOpNode->left;
                        }
                        else {
                            puts("Expected an Operator like 'is'!");
                            markTokenError(codeGenerator->parser->tokenizer->code, binOpNode_def.operator);
                            exit(1);
                        }
                    } 

                    if(nodeleft.type == ID_ValueNode) {
                        ValueNode valueNode = *nodeleft.valueNode;
                        if(valueNode.value.type == TT_Identifier) {
                            VarDec variable = VariableTable_findVariableByName(&codeGenerator->table, valueNode.value);

                            if(variable.type == type_undefined) {
                                VarDec newVariable = VariableTable_declareVariable(&codeGenerator->table, valueNode.value, scope);
                                switch(type) {
                                    case type_ubyte:
                                    case type_ushort:
                                    case type_uint:
                                    case type_ulong:
                                        // unsigned integer
                                    {
                                        unsigned int index = VariableTable_defineVariable(&codeGenerator->table, newVariable.value, type_ulong);
                                        switch(newVariable.scope.rgtr) {
                                            case scope_global:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_NUM64);
                                                break;
                                            case scope_local:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_NUM64);
                                                break;
                                            default:
                                                puts("Unmutable Variable!");
                                                markTokenError(codeGenerator->parser->tokenizer->code, newVariable.value);
                                                exit(1);
                                        }
                                        ByteWriter_writeUInt(byteWriter, index);
                                        return type_none;
                                    }
                                        break;
                                    case type_byte:
                                    case type_short:
                                    case type_int:
                                    case type_long:
                                        // integer
                                    {
                                        unsigned int index = VariableTable_defineVariable(&codeGenerator->table, newVariable.value, type_long);
                                        switch(newVariable.scope.rgtr) {
                                            case scope_global:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_NUM64);
                                                break;
                                            case scope_local:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_NUM64);
                                                break;
                                            default:
                                                puts("Unmutable Variable!");
                                                markTokenError(codeGenerator->parser->tokenizer->code, newVariable.value);
                                                exit(1);
                                        }
                                        ByteWriter_writeUInt(byteWriter, index);
                                        return type_none;
                                    }
                                        break;
                                    case type_float:
                                    case type_double:
                                        // float
                                    {
                                        unsigned int index = VariableTable_defineVariable(&codeGenerator->table, newVariable.value, type_double);
                                        switch(newVariable.scope.rgtr) {
                                            case scope_global:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_NUM64);
                                                break;
                                            case scope_local:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_NUM64);
                                                break;
                                            default:
                                                puts("Unmutable Variable!");
                                                markTokenError(codeGenerator->parser->tokenizer->code, newVariable.value);
                                                exit(1);
                                        }
                                        ByteWriter_writeUInt(byteWriter, index);
                                        return type_none;
                                    }
                                        break;
                                }
                            }
                            else {
                                switch(variable.type) {
                                    case type_ubyte:
                                    case type_ushort:
                                    case type_uint:
                                    case type_ulong:
                                        // unsigned integer
                                        switch(type) {
                                            case type_byte:
                                            case type_short:
                                            case type_int:
                                            case type_long:
                                                ByteWriter_writeByte(byteWriter, BC_I2U);
                                                type = type_ulong;
                                                break;
                                            case type_float:
                                            case type_double:
                                                ByteWriter_writeByte(byteWriter, BC_F2U);
                                                type = type_ulong;
                                                break;
                                        }
                                        break;
                                    case type_byte:
                                    case type_short:
                                    case type_int:
                                    case type_long:
                                        // integer
                                        switch(type) {
                                            case type_ubyte:
                                            case type_ushort:
                                            case type_uint:
                                            case type_ulong:
                                                ByteWriter_writeByte(byteWriter, BC_U2I);
                                                type = type_long;
                                                break;
                                            case type_float:
                                            case type_double:
                                                ByteWriter_writeByte(byteWriter, BC_F2I);
                                                type = type_long;
                                                break;
                                        }
                                        break;
                                    case type_float:
                                    case type_double:
                                        switch(type) {
                                            case type_ubyte:
                                            case type_ushort:
                                            case type_uint:
                                            case type_ulong:
                                                ByteWriter_writeByte(byteWriter, BC_U2F);
                                                type = type_double;
                                                break;
                                            case type_byte:
                                            case type_short:
                                            case type_int:
                                            case type_long:
                                                ByteWriter_writeByte(byteWriter, BC_I2F);
                                                type = type_double;
                                                break;
                                        }
                                        break;
                                }

                                // depending on the register writing a store operator
                                switch(variable.scope.rgtr) {
                                    case scope_global:
                                        switch(variable.type) {
                                            case type_ubyte:
                                            case type_byte:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_NUM8);
                                                break;
                                            case type_ushort:
                                            case type_short:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_NUM16);
                                                break;
                                            case type_uint:
                                            case type_int:
                                            case type_float:
                                                if(type == type_double || type == type_float) {
                                                    ByteWriter_writeByte(byteWriter, BC_Double2Float);
                                                }
                                                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_NUM32);
                                                break;
                                            case type_ulong:
                                            case type_long:
                                            case type_double:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_NUM64);
                                                break;
                                            default:
                                                puts("This kind of type isn't supported yet!");
                                                exit(1);
                                        }
                                        break;
                                    case scope_local:
                                        switch(variable.type) {
                                            case type_ubyte:
                                            case type_byte:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_NUM8);
                                                break;
                                            case type_ushort:
                                            case type_short:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_NUM16);
                                                break;
                                            case type_uint:
                                            case type_int:
                                            case type_float:
                                                if(type == type_float || type == type_double) {
                                                    ByteWriter_writeByte(byteWriter, BC_Double2Float);
                                                }
                                                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_NUM32);
                                                break;
                                            case type_ulong:
                                            case type_long:
                                            case type_double:
                                                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_NUM64);
                                                break;
                                            default:
                                                puts("This kind of type isn't supported yet!");
                                                exit(1);
                                        }
                                        break;
                                    default:
                                        puts("The variable is a const, therefore it is unmutable!");
                                        markTokenError(codeGenerator->parser->tokenizer->code ,valueNode.value);
                                        exit(1);
                                }
                                ByteWriter_writeUInt(byteWriter, variable.index);
                                return type_none;
                            }
                        }
                        else {
                            puts("Expected an Identifier!");
                            markTokenError(codeGenerator->parser->tokenizer->code, valueNode.value);
                            exit(1);
                        }
                    } else if(nodeleft.type == ID_SquareCallNode) {
                        SquareCallNode squareCallNode = *nodeleft.squareCallNode;
                        Token name = squareCallNode.identifier.valueNode->value;
                        VarDec collection = VariableTable_findVariableByName(&codeGenerator->table, name);
                        unsigned char ctype = typeToStackType(collection.storingType);

                        if(ctype != typeToStackType(type)) {
                            puts("No given index!");
                            markTokenError(codeGenerator->parser->tokenizer->code, name);
                            exit(1);
                        }
                        
                        // Loading Collection
                        if(collection.scope.rgtr == scope_local)
                            ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_COLLECTION);
                        else
                            ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_COLLECTION);

                        ByteWriter_writeUInt(byteWriter, collection.index);
                        ByteWriter_writeByte(byteWriter, BC_SWAP);

                        if(squareCallNode.numbersOfArguments == 0) {
                            puts("No given index!");
                            markTokenError(codeGenerator->parser->tokenizer->code, name);
                            exit(1);
                        }
                        CodeGenerator_generateExpression(codeGenerator, squareCallNode.arguments[0], scope, byteWriter);

                        ByteWriter_writeByte(byteWriter, BC_STORE_ELEMENT);

                        // Cleaning up by storing the collection back
                        if(collection.scope.rgtr == scope_local)
                            ByteWriter_writeByte(byteWriter, BC_STORE_STACK_COLLECTION);
                        else
                            ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_COLLECTION);

                        ByteWriter_writeUInt(byteWriter, collection.index);
                        return type_none;
                    }
                }
                    break;

                case TTK_As:
                {
                    unsigned char type = CodeGenerator_generateExpression(codeGenerator, binOpNode->left, scope, byteWriter);
                    unsigned char stype = typeToStackType(type);
                    if(binOpNode->right.type != ID_ValueNode) {
                        puts("Type conversation have to be an existing Type!");
                        markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                        exit(1);
                    }
                    unsigned char rtype = tokentypeToDatatype(binOpNode->right.valueNode->value);
                    unsigned char srtype = typeToStackType(rtype);
                    switch(stype) {
                        case type_long:
                            switch(srtype) {
                                case type_ulong:
                                    ByteWriter_writeByte(byteWriter, BC_I2U);
                                    break;
                                case type_long:
                                    break;
                                case type_double:
                                    ByteWriter_writeByte(byteWriter, BC_I2F);
                                    break;
                                case type_text:
                                    ByteWriter_writeByte(byteWriter, BC_TO_STRING_I);
                                    break;
                                default:
                                    puts("Type conversation, unsupported datatype!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                                    exit(1);
                            }
                            break;
                        case type_ulong:
                            switch(srtype) {
                                case type_ulong:
                                    break;
                                case type_long:
                                    ByteWriter_writeByte(byteWriter, BC_U2I);
                                    break;
                                case type_double:
                                    ByteWriter_writeByte(byteWriter, BC_U2F);
                                    break;
                                case type_text:
                                    ByteWriter_writeByte(byteWriter, BC_TO_STRING_U);
                                    break;
                                default:
                                    puts("Type conversation, unsupported datatype!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                                    exit(1);
                            }
                            break;
                        case type_double:
                            switch(srtype) {
                                case type_ulong:
                                    ByteWriter_writeByte(byteWriter, BC_F2U);
                                    break;
                                case type_long:
                                    ByteWriter_writeByte(byteWriter, BC_F2I);
                                    break;
                                case type_double:
                                    break;
                                case type_text:
                                    ByteWriter_writeByte(byteWriter, BC_TO_STRING_F);
                                    break;
                                default:
                                    puts("Type conversation, unsupported datatype!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                                    exit(1);
                            }
                            break;
                        case type_text:
                            switch(srtype) {
                                case type_ulong:
                                    ByteWriter_writeByte(byteWriter, BC_STR_TO_U);
                                    break;
                                case type_long:
                                    ByteWriter_writeByte(byteWriter, BC_STR_TO_I);
                                    break;
                                case type_double:
                                    ByteWriter_writeByte(byteWriter, BC_STR_TO_F);
                                    break;
                                case type_text:
                                    break;
                                default:
                                    puts("Type conversation, unsupported datatype!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                                    exit(1);
                            }
                            break;
                        default:
                            puts("Type conversation, unsupported datatype!");
                            markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                            exit(1);
                    }
                    return srtype;
                }
                    break;

                case TT_Dot:
                {
                    SyntaxNode left = binOpNode->left;
                    SyntaxNode right = binOpNode->right;
                    if(right.type == ID_FunctionCallNode) {
                        FunctionCallNode fn = *right.functionCallNode;
                        if(left.type == ID_ValueNode)
                            if(left.valueNode->value.type == TT_Identifier) {
                                Token name = left.valueNode->value;
                                VarDec collection = VariableTable_findVariableByName(&codeGenerator->table, name);
                                unsigned char rtype = type_none;
                                if(collection.type == type_Collection) {
                                    if(collection.scope.rgtr == scope_local)
                                        ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_COLLECTION);
                                    else
                                        ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_COLLECTION);
                                    ByteWriter_writeUInt(byteWriter, collection.index);
                                    if(strcmp(fn.identifier.valueNode->value.value.word, "Init") == 0) {
                                        if(fn.numbersOfArguments != 1) {
                                            puts("The function must have 1 argument!");
                                            markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                            exit(1);
                                        }
                                        CodeGenerator_generateExpression(codeGenerator, fn.arguments[0], scope, byteWriter);
                                        ByteWriter_writeByte(byteWriter, BC_COLLECTION_INIT);
                                    } else if(strcmp(fn.identifier.valueNode->value.value.word, "Size") == 0) {
                                        if(fn.numbersOfArguments != 0) {
                                            puts("The function does not have any argument!!");
                                            markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                            exit(1);
                                        }
                                        ByteWriter_writeByte(byteWriter, BC_SIZEOF_COLLECTION);
                                        ByteWriter_writeByte(byteWriter, BC_SWAP);
                                        rtype =  type_ulong;
                                    } else if(strcmp(fn.identifier.valueNode->value.value.word, "Remove") == 0) {
                                        if(fn.numbersOfArguments != 1) {
                                            puts("The function must have 1 argument!");
                                            markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                            exit(1);
                                        }
                                        CodeGenerator_generateExpression(codeGenerator, fn.arguments[0], scope, byteWriter);
                                        ByteWriter_writeByte(byteWriter, BC_REMOVE_ELEMENT);
                                        rtype =  collection.storingType;
                                    } else if(strcmp(fn.identifier.valueNode->value.value.word, "Add") == 0) {
                                        if(fn.numbersOfArguments != 1) {
                                            puts("The function must have 1 argument!");
                                            markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                            exit(1);
                                        }
                                        CodeGenerator_generateExpression(codeGenerator, fn.arguments[0], scope, byteWriter);
                                        ByteWriter_writeByte(byteWriter, BC_ADD_ELEMENT);
                                    }
                                    if(collection.scope.rgtr == scope_local)
                                        ByteWriter_writeByte(byteWriter, BC_STORE_STACK_COLLECTION);
                                    else
                                        ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_COLLECTION);
                                    ByteWriter_writeUInt(byteWriter, collection.index);
                                    return rtype;
                                }
                            } 
                        unsigned char type = CodeGenerator_generateExpression(codeGenerator, left, scope, byteWriter);
                        if(type == type_text) {
                            if(strcmp(fn.identifier.valueNode->value.value.word, "Length") == 0) {
                                if(fn.numbersOfArguments != 0) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                ByteWriter_writeByte(byteWriter, BC_TEXT_GETSIZE);
                                return type_ulong;
                            }
                            else if(strcmp(fn.identifier.valueNode->value.value.word, "InsertChar") == 0) {
                                if(fn.numbersOfArguments < 1) {
                                    puts("Too few function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                if(fn.numbersOfArguments > 1) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                unsigned char argtype = CodeGenerator_generateExpression(codeGenerator, fn.arguments[0], scope, byteWriter);
                                switch(argtype) {
                                    case type_ubyte:
                                    case type_ushort:
                                    case type_uint:
                                    case type_ulong:
                                        ByteWriter_writeByte(byteWriter, BC_U2I);
                                        break;
                                    case type_byte:
                                    case type_short:
                                    case type_int:
                                    case type_long:
                                        break;

                                    case type_float:
                                    case type_double:
                                        ByteWriter_writeByte(byteWriter, BC_F2I);
                                        break;
                                    default:
                                        puts("Wrong datatype as argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                        exit(1);
                                        break;
                                }
                                ByteWriter_writeByte(byteWriter, BC_TEXT_ADD_CHAR);
                                return type_text;
                            }
                            else if(strcmp(fn.identifier.valueNode->value.value.word, "Pop") == 0) {
                                if(fn.numbersOfArguments != 0) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                ByteWriter_writeByte(byteWriter, BC_TEXT_POP_CHAR);
                                return type_text;
                            }
                            else if(strcmp(fn.identifier.valueNode->value.value.word, "CharAt") == 0) {
                                if(fn.numbersOfArguments < 1) {
                                    puts("Too few function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                if(fn.numbersOfArguments > 1) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                unsigned char argtype = CodeGenerator_generateExpression(codeGenerator, fn.arguments[0], scope, byteWriter);
                                switch(argtype) {
                                    case type_ubyte:
                                    case type_ushort:
                                    case type_uint:
                                    case type_ulong:
                                        break;
                                    case type_byte:
                                    case type_short:
                                    case type_int:
                                    case type_long:
                                        ByteWriter_writeByte(byteWriter, BC_I2U);
                                        break;

                                    case type_float:
                                    case type_double:
                                        ByteWriter_writeByte(byteWriter, BC_F2U);
                                        break;
                                    default:
                                        puts("Wrong datatype as argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                        exit(1);
                                        break;
                                }
                                ByteWriter_writeByte(byteWriter, BC_TEXT_GET_CHAR);
                                return type_byte;
                            }
                            else if(strcmp(fn.identifier.valueNode->value.value.word, "Remove") == 0) {
                                if(fn.numbersOfArguments < 1) {
                                    puts("Too few function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                if(fn.numbersOfArguments > 1) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                unsigned char argtype = CodeGenerator_generateExpression(codeGenerator, fn.arguments[0], scope, byteWriter);
                                switch(argtype) {
                                    case type_ubyte:
                                    case type_ushort:
                                    case type_uint:
                                    case type_ulong:
                                        break;
                                    case type_byte:
                                    case type_short:
                                    case type_int:
                                    case type_long:
                                        ByteWriter_writeByte(byteWriter, BC_I2U);
                                        break;

                                    case type_float:
                                    case type_double:
                                        ByteWriter_writeByte(byteWriter, BC_F2U);
                                        break;
                                    default:
                                        puts("Wrong datatype as argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                        exit(1);
                                        break;
                                }
                                ByteWriter_writeByte(byteWriter, BC_TEXT_REMOVE_CHAR);
                                return type_text;
                            }else if(strcmp(fn.identifier.valueNode->value.value.word, "SetChar") == 0) {
                                if(fn.numbersOfArguments < 2) {
                                    puts("Too few function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                if(fn.numbersOfArguments > 2) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                unsigned char argtype = CodeGenerator_generateExpression(codeGenerator, fn.arguments[1], scope, byteWriter);
                                switch(argtype) {
                                    case type_ubyte:
                                    case type_ushort:
                                    case type_uint:
                                    case type_ulong:
                                        break;
                                    case type_byte:
                                    case type_short:
                                    case type_int:
                                    case type_long:
                                        ByteWriter_writeByte(byteWriter, BC_I2U);
                                        break;

                                    case type_float:
                                    case type_double:
                                        ByteWriter_writeByte(byteWriter, BC_F2U);
                                        break;
                                    default:
                                        puts("Wrong datatype as argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                        exit(1);
                                        break;
                                }
                                unsigned char postype = CodeGenerator_generateExpression(codeGenerator, fn.arguments[0], scope, byteWriter);
                                switch(postype) {
                                    case type_ubyte:
                                    case type_ushort:
                                    case type_uint:
                                    case type_ulong:
                                        break;
                                    case type_byte:
                                    case type_short:
                                    case type_int:
                                    case type_long:
                                        ByteWriter_writeByte(byteWriter, BC_I2U);
                                        break;

                                    case type_float:
                                    case type_double:
                                        ByteWriter_writeByte(byteWriter, BC_F2U);
                                        break;
                                    default:
                                        puts("Wrong datatype as argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                        exit(1);
                                        break;
                                }
                                ByteWriter_writeByte(byteWriter, BC_TEXT_SET_CHAR);
                                return type_text;
                            }
                            else if(strcmp(fn.identifier.valueNode->value.value.word, "Print") == 0) {
                                if(fn.numbersOfArguments != 0) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                ByteWriter_writeByte(byteWriter, BC_PRINT_TEXT);
                                return type_none;
                            }
                            else if(strcmp(fn.identifier.valueNode->value.value.word, "Println") == 0) {
                                if(fn.numbersOfArguments != 0) {
                                    puts("Too many function-arguments!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, fn.identifier.valueNode->value);
                                    exit(1);
                                }
                                ByteWriter_writeByte(byteWriter, BC_PRINT_TEXT);
                                ByteWriter_writeByte(byteWriter, BC_NEWLINE);
                                return type_none;
                            }
                        }
                        else {
                            // TODO
                        }
                    }
                }
                    break;
                
                default:
                    markTokenError(codeGenerator->parser->tokenizer->code, binOpNode->operator);
                    puts("Unusable binary operator!");
                    exit(1);
            }
        }
            break;
        case ID_UnaryOpNode: //TODO
        {
            UnaryOpNode* unaryOpNode = node.unaryOpNode;
            unsigned char type = typeToStackType(CodeGenerator_generateExpression(codeGenerator, unaryOpNode->operand, scope, byteWriter));
            switch(unaryOpNode->operator.type) {
                case TT_Minus:
                    if(type == type_ulong) {
                        puts("Cannot use binary minus on an unsigned!");
                        markTokenError(codeGenerator->parser->tokenizer->code, unaryOpNode->operator);
                        exit(1);
                    }
                    else if(type == type_double) {
                        ByteWriter_writeByte(byteWriter, BC_UNARY_MINUS_F);
                        return type_double;
                    }
                    else if(type == type_long) {
                        ByteWriter_writeByte(byteWriter, BC_UNARY_MINUS_I);
                        return type_long;
                    }
                    else {
                        puts("Cannot use binary minus other types then floats and ints");
                        markTokenError(codeGenerator->parser->tokenizer->code, unaryOpNode->operator);
                        exit(1);
                    }
                    break;
                case TT_Plus:
                    break;

                case TT_Exclamationmark:
                {
                    //unsigned char type = CodeGenerator_generateExpression(codeGenerator, unaryOpNode->operand, scope, byteWriter);
                    switch(type) {
                        
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            ByteWriter_writeByte(byteWriter, BC_NOT);
                            return type_ubyte;
                            break;

                        default:
                            markTokenError(codeGenerator->parser->tokenizer->code, unaryOpNode->operator);
                            puts("Unusable datatype!");
                            exit(1);
                    }
                }
                    break;
                default:
                    markTokenError(codeGenerator->parser->tokenizer->code, unaryOpNode->operator);
                    puts("Unusable unary operator!");
                    exit(1);
            }
        }
            break;
        case ID_ValueNode:
        {
            ValueNode* valueNode = node.valueNode;
            switch(valueNode->value.type) {
                
                case TT_Int:
                case TT_Uint:
                case TT_Float:
                case TT_String:
                    // They are all constants
                {
                    VarDec declaration = VariableTable_findVariableByName(&codeGenerator->table, valueNode->value);
                    if(declaration.type == type_undefined) {
                        VarDec constant = VariableTable_declareVariable(&codeGenerator->table, valueNode->value, (Scope) {.rgtr = scope_constant});
                        switch(valueNode->value.type) {
                            case TT_Int:
                                if(valueNode->value.value.i >= SCHAR_MIN && valueNode->value.value.i <= SCHAR_MAX) { // Byte/Char in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_byte);
                                }
                                else if(valueNode->value.value.i >= SHRT_MIN && valueNode->value.value.i <= SHRT_MAX) { // 16Bits/Short in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_short);
                                }
                                else if(valueNode->value.value.i >= INT_MIN && valueNode->value.value.i <= INT_MAX) { // 32Bits/Int in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_int);
                                }
                                else if(valueNode->value.value.i >= LLONG_MIN && valueNode->value.value.i <= LLONG_MAX) { // 64Bits/Long in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_long);
                                }
                                else {
                                    puts("This Value is out of range!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                    exit(1);
                                }
                                break;
                            case TT_Uint:
                                if(valueNode->value.value.u >= 0 && valueNode->value.value.u <= UCHAR_MAX) { // Byte/Char in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_ubyte);
                                }
                                else if(valueNode->value.value.u >= 0 && valueNode->value.value.u <= USHRT_MAX) { // 16Bits/Short in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_ushort);
                                }
                                else if(valueNode->value.value.u >= 0 && valueNode->value.value.u <= UINT_MAX) { // 32Bits/Int in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_uint);
                                }
                                else if(valueNode->value.value.u >= 0 && valueNode->value.value.u <= ULLONG_MAX) { // 64Bits/Long in C (64 Version)
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_ulong);
                                }
                                else {
                                    puts("This Value is out of range!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                    exit(1);
                                }
                                break;
                            case TT_Float:
                                if(valueNode->value.value.f >= FLT_MIN && valueNode->value.value.f <= FLT_MAX) { 
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_float);
                                }
                                else if(valueNode->value.value.f >= DBL_MIN && valueNode->value.value.f <= DBL_MAX) { 
                                    VariableTable_defineVariable(&codeGenerator->table, constant.value, type_double);
                                }
                                else {
                                    puts("This Value is out of range!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                    exit(1);
                                }
                                break;
                            case TT_String:
                                VariableTable_defineVariable(&codeGenerator->table, constant.value, type_text);
                                break;
                        }
                    }
                    declaration = VariableTable_findVariableByName(&codeGenerator->table, valueNode->value);
                    switch(declaration.type) {
                        case type_ubyte:
                        case type_byte:
                            ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM8);
                            ByteWriter_writeUInt(byteWriter, declaration.index);
                            break;
                        case type_short:
                        case type_ushort:
                            ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM16);
                            ByteWriter_writeUInt(byteWriter, declaration.index);
                            break;
                        case type_uint:
                        case type_int:
                        case type_float:
                            ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM32);
                            ByteWriter_writeUInt(byteWriter, declaration.index);
                            if(declaration.type == type_float) {
                                ByteWriter_writeByte(byteWriter, BC_Float2Double);
                            }
                            break;
                        case type_ulong:
                        case type_long:
                        case type_double:
                            ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM64);
                            ByteWriter_writeUInt(byteWriter, declaration.index);
                            break;
                        case type_text:
                            ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_TEXT);
                            ByteWriter_writeUInt(byteWriter, declaration.index);
                            break;
                        default:
                            puts("This type isn't supported yet!");
                            exit(1);
                    }
                    return declaration.type;
                }
                    break;

                case TTK_True:
                {
                    unsigned int index = 0;
                    if(VariableTable_findVariableByName(&codeGenerator->table,
                        (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 1}).type == type_undefined) {
                            VariableTable_declareVariable(&codeGenerator->table,
                                (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 1},
                                (Scope) {.rgtr = scope_constant}
                            );
                            index = VariableTable_defineVariable(&codeGenerator->table,
                                (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 1},
                                type_ubyte
                            );
                    } else {
                        index = VariableTable_findVariableByName(&codeGenerator->table, 
                            (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 1}).index;
                    }
                    ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM8);
                    ByteWriter_writeUInt(byteWriter, index);
                    return type_ubyte;
                }
                    break;

                case TTK_False:
                {
                    unsigned int index = 0;
                    if(VariableTable_findVariableByName(&codeGenerator->table,
                        (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 0}).type == type_undefined) {
                            VariableTable_declareVariable(&codeGenerator->table,
                                (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 0},
                                (Scope) {.rgtr = scope_constant}
                            );
                            index = VariableTable_defineVariable(&codeGenerator->table,
                                (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 0},
                                type_ubyte
                            );
                    } else {
                        index = VariableTable_findVariableByName(&codeGenerator->table, 
                            (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_Uint, .value.u = 0}).index;
                    }
                    ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM8);
                    ByteWriter_writeUInt(byteWriter, index);
                    return type_ubyte;
                }
                    break;
                
                case TT_Identifier:
                {
                    // Loads the corresponding variable by the variable table and checks it does exist
                    VarDec declaration = VariableTable_findVariableByName(&codeGenerator->table, valueNode->value);
                    if(declaration.type == type_undefined) {
                        puts("Undefined Variable, therefore it's impossible to load a value!");
                        markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                        exit(1);
                    }

                    // React to the type of the variable to generate the correct bytecode
                    switch (declaration.type)
                    {
                    case type_ubyte:
                    case type_byte:
                        // Now it has to match the right scope
                        switch(declaration.scope.rgtr) {
                            
                            case scope_constant:
                                // If the scope is constant, it loads it from constants register
                                ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM8);
                                break;
                            case scope_global:
                                // If the scope is global, it loads it from the global register
                                ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_NUM8);
                                break;
                            case scope_local:
                                // If the scope is local/stack, it loads it from the stack register
                                ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_NUM8);
                                break;

                            default:
                                puts("Unusable Register Id!");
                                markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                exit(1);
                        }
                        // then comes the matching index of the variable
                        ByteWriter_writeUInt(byteWriter, declaration.index);
                        break;
                    
                    case type_ushort:
                    case type_short:
                        // In this case the variable has a size of 16 bits / 2 bytes
                        switch(declaration.scope.rgtr) {
                            
                            // Same game as above
                            case scope_constant:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM16);
                                break;
                            case scope_global:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_NUM16);
                                break;
                            case scope_local:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_NUM16);
                                break;

                            default:
                                puts("Unusable Register Id!");
                                markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                exit(1);
                        }
                        ByteWriter_writeUInt(byteWriter, declaration.index);
                        break;
                    
                    case type_uint:
                    case type_int:
                    case type_float:
                        // Size of 32 bits / 4 bytes
                        switch(declaration.scope.rgtr) {
                            
                            case scope_constant:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM32);
                                break;
                            case scope_global:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_NUM32);
                                break;
                            case scope_local:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_NUM32);
                                break;

                            default:
                                puts("Unusable Register Id!");
                                markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                exit(1);
                        }
                        ByteWriter_writeUInt(byteWriter, declaration.index);
                        if(declaration.type == type_float) {
                            ByteWriter_writeByte(byteWriter, BC_Float2Double);
                        }
                        break;
                    
                    case type_ulong:
                    case type_long:
                    case type_double:
                        // Size of 64 bits / 8 bytes
                        switch(declaration.scope.rgtr) {
                            
                            case scope_constant:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_NUM64);
                                break;
                            case scope_global:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_NUM64);
                                break;
                            case scope_local:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_NUM64);
                                break;

                            default:
                                puts("Unusable Register Id!");
                                markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                exit(1);
                        }
                        ByteWriter_writeUInt(byteWriter, declaration.index);
                        break;
                    
                    case type_text:
                        // Just a string
                        switch(declaration.scope.rgtr) {
                            
                            case scope_constant:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_TEXT);
                                break;
                            case scope_global:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_TEXT);
                                break;
                            case scope_local:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_TEXT);
                                break;

                            default:
                                puts("Unusable Register Id!");
                                markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                exit(1);
                        }
                        ByteWriter_writeUInt(byteWriter, declaration.index);
                        break;

                    case type_Collection:
                        // a collection
                        switch(declaration.scope.rgtr) {

                            case scope_global:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_COLLECTION);
                                break;
                            case scope_local:
                                ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_COLLECTION);
                                break;

                            default:
                                puts("Unusable Register Id!");
                                markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                                exit(1);
                        }
                        ByteWriter_writeUInt(byteWriter, declaration.index);
                        break;
                    default:
                        puts("Unusable Datatype for variable!");
                        markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                        exit(1);
                        break;
                    }
                    return declaration.type;
                }

                    break;
                default:
                    markTokenError(codeGenerator->parser->tokenizer->code, valueNode->value);
                    puts("Unusable value");
                    exit(1);
            }
        }
            break;

        case ID_FunctionCallNode:
        {
            FunctionCallNode functionCallNode = *node.functionCallNode;
            Token name = functionCallNode.identifier.valueNode->value;
            if(strcmp(name.value.word, "$$printInt$$") == 0) {
                if(functionCallNode.numbersOfArguments < 1) {
                    puts("Missing integer number as argument!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                if(functionCallNode.numbersOfArguments > 1) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                SyntaxNode argumentNode = functionCallNode.arguments[0];
                CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                ByteWriter_writeByte(byteWriter, BC_PRINT_I);
                return type_none;
            }
            else if(strcmp(name.value.word, "$$printFloat$$") == 0) {
                if(functionCallNode.numbersOfArguments < 1) {
                    puts("Missing floating point number as argument!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                if(functionCallNode.numbersOfArguments > 1) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                SyntaxNode argumentNode = functionCallNode.arguments[0];
                CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                ByteWriter_writeByte(byteWriter, BC_PRINT_F);
                return type_none;
            }
            else if(strcmp(name.value.word, "$$printUnsigned$$") == 0) {
                if(functionCallNode.numbersOfArguments < 1) {
                    puts("Missing unsigned integer number as argument!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                if(functionCallNode.numbersOfArguments > 1) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                SyntaxNode argumentNode = functionCallNode.arguments[0];
                CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                ByteWriter_writeByte(byteWriter, BC_PRINT_U);
                return type_none;
            }
            else if(strcmp(name.value.word, "$$newline$$") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_NEWLINE);
                return type_none;
            }
            else if(strcmp(name.value.word, "$$print$$") == 0) {
                if(functionCallNode.numbersOfArguments < 1) {
                    puts("Missing text as argument!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                if(functionCallNode.numbersOfArguments > 1) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                SyntaxNode argumentNode = functionCallNode.arguments[0];
                CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                ByteWriter_writeByte(byteWriter, BC_PRINT_TEXT);
                return type_none;
            }
            else if(strcmp(name.value.word, "exit") == 0) {
                if(functionCallNode.numbersOfArguments < 1) {
                    puts("Missing integer number as argument!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                if(functionCallNode.numbersOfArguments > 1) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                SyntaxNode argumentNode = functionCallNode.arguments[0];
                CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                ByteWriter_writeByte(byteWriter, BC_EXIT);
                return type_none;
            }
            else if(strcmp(name.value.word, "output") == 0) {
                for(unsigned int i = 0; i < functionCallNode.numbersOfArguments; i++) {
                    SyntaxNode argumentNode = functionCallNode.arguments[i];
                    unsigned char type = CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                    switch(type) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_U);
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_I);
                            break;
                        case type_float:
                        case type_double:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_F);
                            break;
                        
                        case type_text:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_TEXT);
                            break;

                        default:
                            markTokenError(codeGenerator->parser->tokenizer->code ,name);
                            puts("Unsupported Datatype!");
                            exit(1);
                    }
                }
                ByteWriter_writeByte(byteWriter, BC_NEWLINE);
                return type_none;
            }
            else if(strcmp(name.value.word, "$$getUnsigned$$") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_INPUT_U);
                return type_ulong;
            }
            else if(strcmp(name.value.word, "$$getInt$$") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code ,name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_INPUT_I);
                return type_long;
            }
            else if(strcmp(name.value.word, "$$getFloat$$") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_INPUT_F);
                return type_double;
            }
            else if(strcmp(name.value.word, "$$get$$") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_INPUT_LINE);
                return type_text;
            }
            else if(strcmp(name.value.word, "getch") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_INPUT_CHAR);
                return type_ubyte;
            }
            else if(strcmp(name.value.word, "clock") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_CLOCK);
                return type_ulong;
            }
            else if(strcmp(name.value.word, "time") == 0) {
                if(functionCallNode.numbersOfArguments > 0) {
                    puts("Too many arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_TIME);
                return type_ulong;
            }
            else if(strcmp(name.value.word, "type") == 0) {
                if(functionCallNode.numbersOfArguments < 1) {
                    puts("Too few arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                char* tmptxt = NULL;
                unsigned int tmplen = 0;
                ByteWriter tmpWriter = ByteWriter_init(&tmptxt, &tmplen);
                unsigned char type = CodeGenerator_generateExpression(codeGenerator, functionCallNode.arguments[0], scope, &tmpWriter);
                free(tmptxt);
                unsigned int index = 0;
                char* typetxt = NULL;
                switch(type) {
                    case type_ubyte:
                        typetxt = "ubyte";
                        break;
                    case type_ushort:
                        typetxt = "ushort";
                        break;
                    case type_uint:
                        typetxt = "uint";
                        break;
                    case type_ulong:
                        typetxt = "ulong";
                        break;
                    case type_byte:
                        typetxt = "byte";
                        break;
                    case type_short:
                        typetxt = "short";
                        break;
                    case type_int:
                        typetxt = "int";
                        break;
                    case type_long:
                        typetxt = "long";
                        break;
                    case type_float:
                        typetxt = "float";
                        break;
                    case type_double:
                        typetxt = "double";
                        break;
                    case type_text:
                        typetxt = "text";
                        break;
                    case type_function:
                        typetxt = "function";
                        break;
                    case type_Collection:
                        typetxt = "Collection";
                        break;
                    case type_undefined:
                        typetxt = "undefined";
                        break;
                    case type_none:
                        typetxt = "none";
                        break;
                    default:
                        puts("Unusable type!");
                        exit(1);
                }

                if(VariableTable_findVariableByName(&codeGenerator->table, 
                    (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_String, .value.word = typetxt}).type == type_undefined) {

                    VariableTable_declareVariable(&codeGenerator->table, 
                        (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_String, .value.word = typetxt}, 
                        (Scope) {.rgtr = scope_constant}
                    );
                    index = VariableTable_defineVariable(&codeGenerator->table, 
                        (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_String, .value.word = typetxt},
                        type_text
                    );
                }
                else {
                    index = VariableTable_findVariableByName(&codeGenerator->table, 
                    (Token) {.begin = 0, .end = 0, .lineNumber = 0, .type = TT_String, .value.word = typetxt}).index;
                }

                ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_TEXT);
                ByteWriter_writeUInt(byteWriter, index);

                return type_text;
            }
            else if(strcmp(name.value.word, "input") == 0) {
                for(unsigned int i = 0; i < functionCallNode.numbersOfArguments; i++) {
                    SyntaxNode argumentNode = functionCallNode.arguments[i];
                    unsigned char type = CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                    switch(type) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_U);
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_I);
                            break;
                        case type_float:
                        case type_double:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_F);
                            break;
                        
                        case type_text:
                            ByteWriter_writeByte(byteWriter, BC_PRINT_TEXT);
                            break;

                        default:
                            markTokenError(codeGenerator->parser->tokenizer->code ,name);
                            puts("Unsupported Datatype!");
                            exit(1);
                    }
                }
                ByteWriter_writeByte(byteWriter, BC_INPUT_LINE);
                return type_text;
            }
            else if(strcmp(name.value.word, "fmt") == 0) {
                for(unsigned int i = 0; i < functionCallNode.numbersOfArguments; i++) {
                    SyntaxNode argumentNode = functionCallNode.arguments[functionCallNode.numbersOfArguments-i-1];
                    unsigned char type = CodeGenerator_generateExpression(codeGenerator, argumentNode, scope, byteWriter);
                    switch(type) {
                        case type_ubyte:
                        case type_ushort:
                        case type_uint:
                        case type_ulong:
                            ByteWriter_writeByte(byteWriter, BC_TO_STRING_U);
                            break;
                        case type_byte:
                        case type_short:
                        case type_int:
                        case type_long:
                            ByteWriter_writeByte(byteWriter, BC_TO_STRING_I);
                            break;
                        case type_float:
                        case type_double:
                            ByteWriter_writeByte(byteWriter, BC_TO_STRING_F);
                            break;
                        
                        case type_text:
                            break;

                        default:
                            markTokenError(codeGenerator->parser->tokenizer->code ,name);
                            puts("Unsupported Datatype!");
                            exit(1);
                    }
                    if(i != 0)
                        ByteWriter_writeByte(byteWriter, BC_CONCAT);
                }
                return type_text;
            }
            else if(strcmp(name.value.word, "GNL_LOAD") == 0) {
                // Will handle Library Loading
                if(functionCallNode.numbersOfArguments != 1) {
                    puts("Missing Path for GNL Library!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                
                SyntaxNode libpath = functionCallNode.arguments[0];

                unsigned char type = CodeGenerator_generateExpression(codeGenerator, libpath, scope, byteWriter);
                
                if(type != type_text) {
                    puts("GNL Library Path must be a text value!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                
                ByteWriter_writeByte(byteWriter, BC_GNL_LOAD);

                return type_ushort;
            }
            else if(strcmp(name.value.word, "GNL_SYMBOL") == 0) {
                // Will handle the symbole table for the native Librarys
                if(functionCallNode.numbersOfArguments != 2) {
                    puts("Wrong Arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }
                
                SyntaxNode libhandle = functionCallNode.arguments[0];
                SyntaxNode symbol = functionCallNode.arguments[1];

                unsigned char libhandle_type = CodeGenerator_generateExpression(codeGenerator, libhandle, scope, byteWriter);
                unsigned char symbol_type = CodeGenerator_generateExpression(codeGenerator, symbol, scope, byteWriter);

                if(libhandle_type != type_ushort) {
                    puts("GNL Library Handle must be a ushort value!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }

                if(symbol_type != type_text) {
                    puts("GNL Symbol must be a text value!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }

                ByteWriter_writeByte(byteWriter, BC_GNL_SYMBOL);

                return type_ushort;
            }
            else if(strcmp(name.value.word, "GNL_EXEC") == 0) {
                // Will load a function pointer and executes it with some informations
                if(functionCallNode.numbersOfArguments < 3) {
                    puts("Too few arguments!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }

                SyntaxNode libhandle = functionCallNode.arguments[0];
                SyntaxNode fnhandle = functionCallNode.arguments[1];
                SyntaxNode rtype = functionCallNode.arguments[2];

                unsigned char libhandle_type = CodeGenerator_generateExpression(codeGenerator, libhandle, scope, byteWriter);
                unsigned char fnhandle_type  = CodeGenerator_generateExpression(codeGenerator, fnhandle, scope, byteWriter);
                unsigned char returnType = type_none;
                if(libhandle_type != type_ushort) {
                    puts("GNL Library Handle must be a ushort!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }

                if(fnhandle_type != type_ushort) {
                    puts("GNL Function Handle must be a ushort!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }

                if(rtype.type != ID_ValueNode) {
                    puts("GNL wrong return type!");
                    markTokenError(codeGenerator->parser->tokenizer->code, name);
                    exit(1);
                }

                switch(rtype.valueNode->value.type) {
                    
                    case TT_Int:
                        if(rtype.valueNode->value.value.i != 0) {
                            puts("GNL wrong return type!");
                            markTokenError(codeGenerator->parser->tokenizer->code, name);
                            exit(1);
                        }
                        break;

                    default:
                        returnType = tokentypeToDatatype(rtype.valueNode->value);
                }

                for(unsigned int i = 3; i < functionCallNode.numbersOfArguments; i++) {
                    CodeGenerator_generateExpression(codeGenerator, functionCallNode.arguments[i], scope, byteWriter);
                }

                ByteWriter_writeByte(byteWriter, BC_GNL_EXEC);

                ByteWriter_writeUInt(byteWriter, functionCallNode.numbersOfArguments-3);

                if(returnType == type_none)
                    ByteWriter_writeByte(byteWriter, BC_POP);

                return returnType;
            }
            else if(strcmp(name.value.word, "GNL_CLOSE") == 0) {
                // Will close a native Library while execution

                puts("Isn't supported by the VM yet!");
                markTokenError(codeGenerator->parser->tokenizer->code, name);
                exit(1);
            }
            else {
                //Regulare
                VarDec vardec = VariableTable_findVariableByName(&codeGenerator->table, functionCallNode.identifier.valueNode->value);
                if(vardec.type == type_undefined) {
                    puts("Undefined function!");
                    markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                    exit(1);
                }
                if(functionCallNode.numbersOfArguments < vardec.argumentsCount) {
                    puts("To few function-argument!");
                    markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                    exit(1);
                }
                if(functionCallNode.numbersOfArguments > vardec.argumentsCount) {
                    puts("To many function-argument!");
                    markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                    exit(1);
                }
                ByteWriter_writeByte(byteWriter, BC_LOAD_CONST_FUNC);
                ByteWriter_writeUInt(byteWriter, vardec.index);
                for(unsigned int i = 0; i < vardec.argumentsCount; i++) {
                    unsigned char fntype = typeToStackType(tokentypeToDatatype(vardec.arguments[i].type));
                    if(vardec.arguments[i].is_array) {
                        if(functionCallNode.arguments[i].type != ID_ValueNode) {
                            puts("Missing Array!");
                            markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                            exit(1);
                        }
                        Token arrayName = functionCallNode.arguments[i].valueNode->value;
                        if(arrayName.type != TT_Identifier) {
                            puts("Missing Array!");
                            markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                            exit(1);
                        }
                        VarDec array = VariableTable_findVariableByName(&codeGenerator->table, arrayName);
                        if(array.type != type_Collection) {
                            puts("Missing Array!");
                            markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                            exit(1);
                        }
                        if(fntype != array.storingType) {
                            puts("Wrong Datatype for Array!");
                            markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                            exit(1);
                        }
                        if(array.scope.rgtr == scope_local)
                            ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_COLLECTION);
                        else
                            ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_COLLECTION);
                        ByteWriter_writeUInt(byteWriter, array.index);
                        ByteWriter_writeByte(byteWriter, BC_COPY_COLLECTION);
                        if(array.scope.rgtr == scope_local)
                            ByteWriter_writeByte(byteWriter, BC_STORE_STACK_COLLECTION);
                        else
                            ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_COLLECTION);
                        ByteWriter_writeUInt(byteWriter, array.index);
                    }
                    else {
                        unsigned char argtype = typeToStackType(CodeGenerator_generateExpression(codeGenerator, functionCallNode.arguments[i], scope, byteWriter));
                        if(argtype != fntype) {
                            switch(fntype) {
                                case type_ulong:
                                    if(argtype == type_long) {
                                        ByteWriter_writeByte(byteWriter, BC_I2U);
                                    }
                                    else if(argtype == type_double) {
                                        ByteWriter_writeByte(byteWriter, BC_F2U);
                                    }
                                    else {
                                        puts("Wrong Datatype for function-argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                                        exit(1);
                                    }
                                    break;
                                case type_long:
                                    if(argtype == type_ulong) {
                                        ByteWriter_writeByte(byteWriter, BC_U2I);
                                    }
                                    else if(argtype == type_double) {
                                        ByteWriter_writeByte(byteWriter, BC_F2I);
                                    }
                                    else {
                                        puts("Wrong Datatype for function-argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                                        exit(1);
                                    }
                                    break;
                                case type_double:
                                    if(argtype == type_ulong) {
                                        ByteWriter_writeByte(byteWriter, BC_U2F);
                                    }
                                    else if(argtype == type_long) {
                                        ByteWriter_writeByte(byteWriter, BC_I2F);
                                    }
                                    else {
                                        puts("Wrong Datatype for function-argument!");
                                        markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                                        exit(1);
                                    }
                                    break;
                                case type_text:
                                    puts("Wrong Datatype for function-argument!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                                    exit(1);
                                    break;
                                case type_Collection:
                                    puts("Wrong Datatype for function-argument!");
                                    markTokenError(codeGenerator->parser->tokenizer->code, functionCallNode.identifier.valueNode->value);
                                    exit(1);
                                    break;
                            }
                        }
                    }
                }
                ByteWriter_writeByte(byteWriter, BC_CALL_FUNC);
                if(vardec.returnType == type_none)
                    ByteWriter_writeByte(byteWriter, BC_POP);
                return vardec.returnType;
            }
            puts("error!");
        }
            break;

        case ID_SquareCallNode:
        {
            SquareCallNode squareCallNode = *node.squareCallNode;
            Token name = squareCallNode.identifier.valueNode->value;
            VarDec variable = VariableTable_findVariableByName(&codeGenerator->table, name);
            if(variable.scope.rgtr == scope_local) {
                ByteWriter_writeByte(byteWriter, BC_LOAD_STACK_COLLECTION);
            } else {
                ByteWriter_writeByte(byteWriter, BC_LOAD_GLOBAL_COLLECTION);
            }
            ByteWriter_writeUInt(byteWriter, variable.index);

            if(squareCallNode.numbersOfArguments == 0) {
                puts("No given index!");
                markTokenError(codeGenerator->parser->tokenizer->code, name);
                exit(1);
            }

            CodeGenerator_generateExpression(codeGenerator, squareCallNode.arguments[0], scope, byteWriter);

            ByteWriter_writeByte(byteWriter, BC_LOAD_ELEMENT);
            
            ByteWriter_writeByte(byteWriter, BC_SWAP);
            if(variable.scope.rgtr == scope_local) {
                ByteWriter_writeByte(byteWriter, BC_STORE_STACK_COLLECTION);
            } else {
                ByteWriter_writeByte(byteWriter, BC_STORE_GLOBAL_COLLECTION);
            }
            ByteWriter_writeUInt(byteWriter, variable.index);
            return variable.storingType;
        }
            break;

        case ID_None:
            return type_none; 
            break;
        default:
            // Should never be called.
            printf("ID => %u\n", node.type);
            puts("Error in Expression!");
            exit(1);
    }
    return type_none;
}


VarDec VariableTable_declareVariable(VariableTable* table, Token value, Scope scope) {
    VarDec* vardec = VariableTable_addDeclaration(table);
    vardec->value = value;
    vardec->scope = scope;
    vardec->type = type_none;
    vardec->index = 0;        // Because the type is none, the index has no meaning => Null
    return *vardec;
}

unsigned int VariableTable_defineVariable(VariableTable* table, Token name, unsigned char type) {
    unsigned int index;

    VarDec vardec = VariableTable_findVariableByName(table, name);
    switch(vardec.scope.rgtr) {
        case scope_constant:
            switch(type) {
                case type_ubyte:
                case type_byte:
                    index = table->memoryDeclaration.const_num8s++;
                    break;

                case type_short:
                case type_ushort:
                    index = table->memoryDeclaration.const_num16s++;
                    break;

                case type_uint:
                case type_int:
                case type_float:
                    index = table->memoryDeclaration.const_num32s++;
                    break;
                
                case type_ulong:
                case type_long:
                case type_double:
                    index = table->memoryDeclaration.const_num64s++;
                    break;
                
                case type_function:
                    index = table->memoryDeclaration.const_functions++;
                    break;
                
                case type_text:
                    index = table->memoryDeclaration.const_texts++;
                    break;
                default:
                    puts("Unusable Datatype!");
                    exit(1);
            }
            break;
        case scope_global:
            switch(type) {
                case type_ubyte:
                case type_byte:
                    index = table->memoryDeclaration.global_num8s++;
                    break;

                case type_short:
                case type_ushort:
                    index = table->memoryDeclaration.global_num16s++;
                    break;

                case type_uint:
                case type_int:
                case type_float:
                    index = table->memoryDeclaration.global_num32s++;
                    break;
                
                case type_ulong:
                case type_long:
                case type_double:
                    index = table->memoryDeclaration.global_num64s++;
                    break;
                
                case type_function:
                    index = table->memoryDeclaration.global_functions++;
                    break;
                
                case type_text:
                    index = table->memoryDeclaration.global_texts++;
                    break;

                case type_Collection:
                    index = table->memoryDeclaration.global_collections++;
                    break;
                
                case type_Progression:
                    // TODO: Coming soon
                    break;
            }
            break;
        case scope_local:
        {
            VarDec function = VariableTable_findVariableByName(table, vardec.scope.function);
            switch(type) {
                case type_ubyte:
                case type_byte:
                    index = function.memoryDeclaration.num8s++;
                    break;

                case type_short:
                case type_ushort:
                    index = function.memoryDeclaration.num16s++;
                    break;

                case type_uint:
                case type_int:
                case type_float:
                    index = function.memoryDeclaration.num32s++;
                    break;
                
                case type_ulong:
                case type_long:
                case type_double:
                    index = function.memoryDeclaration.num64s++;
                    break;
                
                case type_function:
                    index = function.memoryDeclaration.functions++;
                    break;
                
                case type_text:
                    index = function.memoryDeclaration.texts++;
                    break;

                case type_Collection:
                    index = function.memoryDeclaration.collections++;
                    break;
                
                case type_Progression:
                    // TODO: COMING SOON!
                    break;
            }
            VariableTable_setVariableByName(table, function.value, function);
        }
            break;
        default:
            puts("Illegal Scope!");
            exit(1);
            break;
    }

    vardec.index = index;
    vardec.type = type;

    VariableTable_setVariableByName(table, vardec.value, vardec);

    return index;
}

VarDec VariableTable_findVariableByName(VariableTable* table, Token value) {
    for(unsigned int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec* variable = &table->declarations[i];
        if(variable->value.type != value.type)
            continue;
        switch(variable->value.type) {
            case TT_Identifier:
            case TT_String:
                if(strcmp(variable->value.value.word, value.value.word) != 0)
                    continue;
                break;
            case TT_Int:
            case TT_Uint:
            case TT_Float:
                if(variable->value.value.u != value.value.u)
                    continue;
                break;
        }
        return *variable;
    }
    return (VarDec) {
        .type = type_undefined
    };
}

VarDec* VariableTable_findVariableReferenceByName(VariableTable* table, Token value) {
    for(unsigned int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec* variable = &table->declarations[i];
        if(variable->value.type != value.type)
            continue;
        switch(variable->value.type) {
            case TT_Identifier:
            case TT_String:
                if(strcmp(variable->value.value.word, value.value.word) != 0)
                    continue;
                break;
            case TT_Int:
            case TT_Uint:
            case TT_Float:
                if(variable->value.value.u != value.value.u)
                    continue;
                break;
        }
        return variable;
    }
    puts("Cannot find reference to variable!");
    exit(1);
}

VarDec VariableTable_findVariableByIndex(VariableTable* table, unsigned int index, unsigned char type, Scope scope) {
    for(unsigned int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec* variable = &table->declarations[i];
        if(variable->type != type)
            continue;
        if(variable->index != index)
            continue;
        if(variable->scope.rgtr != scope.rgtr)
            continue;
        if(variable->scope.rgtr == scope_local)
            if(strcmp(variable->scope.function.value.word, scope.function.value.word) != 0)
                continue;
        return *variable;
    }
    return (VarDec) {
        .type = type_undefined
    };
}

VarDec VariableTable_findConstantByIndex(struct VariableTable* table, unsigned int index, unsigned char type) {
    for(unsigned int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec* variable = &table->declarations[i];
        if(variable->index != index)
            continue;
        if(variable->scope.rgtr != scope_constant)
            continue;
        
        if((type == type_ubyte || type == type_byte) && (variable->type == type_ubyte || variable->type == type_byte)) {
            return *variable;
        }
        else if((type == type_ushort || type == type_short) && (variable->type == type_ushort || variable->type == type_short)) {
            return *variable;
        }
        else if((type == type_uint || type == type_int || type == type_float) && (variable->type == type_uint || variable->type == type_int || variable->type == type_float)) {
            return *variable;
        }
        else if((type == type_ulong || type == type_long || type == type_double) && (variable->type == type_ulong || variable->type == type_long || variable->type == type_double)) {
            return *variable;
        }
        else if(variable->type == type) {
            return *variable;
        }
    }
    puts("Error!");
    exit(1);
}

// Will allocate one place for one variable declaration and returns a reference to define it
VarDec* VariableTable_addDeclaration(VariableTable* table) {
    table->numberOfDeclarations++;
    table->declarations = (VarDec*) realloc(table->declarations, sizeof(VarDec) * table->numberOfDeclarations);
    if(!table->declarations) {
        puts("Out of Memory!");
        exit(1);
    }

    table->declarations[table->numberOfDeclarations-1] = (VarDec) {
        .index = 0,
        .scope = (Scope) {.rgtr = scope_undefined},
        .type = 0,
        .value = (Token) {
            .begin = 0,
            .end = 0,
            .lineNumber = 0,
            .type = 0,
            .value = 0
        },
        .code = NULL,
        .codelength = 0,
        .argumentsCount = 0,
        .memoryDeclaration.collections = 0,
        .memoryDeclaration.functions = 0,
        .memoryDeclaration.num16s = 0,
        .memoryDeclaration.num32s = 0,
        .memoryDeclaration.num64s = 0,
        .memoryDeclaration.num8s = 0,
        .memoryDeclaration.texts = 0,

        .returnType = type_none,
        .returnType_isArray = 0,
        .is_argument = 0,
        .argumentsCount = 0,
        .argument_index = 0,

        .is_extern = 0
    };
    return &table->declarations[table->numberOfDeclarations-1];
}

void VariableTable_removeAllLocal(VariableTable* table) {
    for(int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec var = table->declarations[i];
        if(var.scope.rgtr == scope_local) {
            VariableTable_removeDeclaration(table, i--);
        }
    }
}

void VariableTable_listAll(VariableTable* table) {
    puts("\n### Symbol Table ###\n");
    for(unsigned int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec var = table->declarations[i];
        printf("name/value: ");
        switch(var.value.type) {
            case TT_Identifier:
                printf("%-30s ", var.value.value.word);
                break;
            case TT_String:
                printf("<str>%-25s ", var.value.value.word);
                break;
            case TT_Int:
                printf("%-30d ", var.value.value.i);
                break;
            case TT_Uint:
                printf("%-30u ", var.value.value.u);
                break;
            case TT_Float:
                printf("%-31.-10f ", var.value.value.f);
                break;
        }
        printf("type: %-10u scope: %-10u index: %-10u length: %-10u\n", var.type, var.scope.rgtr, var.index, var.codelength);
    }
    puts("");
}

void VariableTable_removeDeclaration(VariableTable* table, unsigned int index) {
    table->numberOfDeclarations--;
    VarDec* newList = (VarDec*) malloc(sizeof(VarDec) * table->numberOfDeclarations);
    if(!newList) {
        puts("Out of Memory!");
        exit(1);
    }
    for(unsigned int i = 0; i < index; i++)
        newList[i] = table->declarations[i];

    for(unsigned int i = index+1; i < table->numberOfDeclarations+1; i++) {
        newList[i - 1] = table->declarations[i];
    }

    free(table->declarations);
    table->declarations = newList;
}

void VariableTable_setVariableByName(VariableTable* table, Token value, VarDec vardec) {
    for(unsigned int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec* variable = &table->declarations[i];
        if(variable->value.type != value.type)
            continue;
        switch(variable->value.type) {
            case TT_Identifier:
            case TT_String:
                if(strcmp(variable->value.value.word, value.value.word) != 0)
                    continue;
                break;
            case TT_Int:
            case TT_Uint:
            case TT_Float:
                if(variable->value.value.u != value.value.u)
                    continue;
                break;
        }
        *variable = vardec;
        return;
    }
    puts("Cannot find reference to variable!");
    exit(1);
}

void VariableTable_setConstantByIndex(VariableTable* table, unsigned int index, unsigned char type, VarDec vardec) {
    for(unsigned int i = 0; i < table->numberOfDeclarations; i++) {
        VarDec* variable = &table->declarations[i];
        if(variable->index != index)
            continue;
        if((type == type_ubyte || type == type_byte) && (variable->type == type_ubyte || variable->type == type_byte)) {
            *variable = vardec;
            return;
        }
        else if((type == type_ushort || type == type_short) && (variable->type == type_ushort || variable->type == type_short)) {
            *variable = vardec;
            return;
        }
        else if((type == type_uint || type == type_int || type == type_float) && (variable->type == type_uint || variable->type == type_int || variable->type == type_float)) {
            *variable = vardec;
            return;
        }
        else if((type == type_ulong || type == type_long || type == type_double) && (variable->type == type_ulong || variable->type == type_long || variable->type == type_double)) {
            *variable = vardec;
            return;
        }
        else if(variable->type == type) {
            *variable = vardec;
            return;
        }
    }
    puts("No declaration found!");
    exit(1);
}

#endif