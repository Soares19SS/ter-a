#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isIdentifierValid(char *identifier)
{
}

void parseIdentifierList()
{
    char identifier[100];
    scanf("%s", identifier);

    if (!isIdentifierValid(identifier))
    {
        printf("Erro: identificador inválido\n");
        exit(1);
    }
}

void parseVariableDeclaration()
{
    parseIdentifierList();

    char type[10];
    scanf("%s", type);
}

void parseVariableDeclarations()
{
    while (1)
    {
        char keyword[10];
        scanf("%s", keyword);

        if (strcmp(keyword, "var") != 0)
        {
            break;
        }

        parseVariableDeclaration();

        char semicolon[2];
        scanf("%s", semicolon);

        if (strcmp(semicolon, ";") != 0)
        {
            printf("Erro: ponto e vírgula esperado\n");
            exit(1);
        }
    }
}

void parseProcedureCall()
{
    char identifier[100];
    scanf("%s", identifier);
}

void parseConditionalCommand()
{
}

void parseRepetitiveCommand()
{
}

void parseCommand()
{
    char keyword[10];
    scanf("%s", keyword);

    if (strcmp(keyword, "begin") == 0)
    {
    }
    else if (strcmp(keyword, "if") == 0)
    {
        parseConditionalCommand();
    }
    else if (strcmp(keyword, "while") == 0)
    {
        parseRepetitiveCommand();
    }
    else
    {
    }
}

void parseBlock()
{
    parseVariableDeclarations();

    parseCommand();
}

void parseProgram()
{
    char keyword[10];
    scanf("%s", keyword);

    if (strcmp(keyword, "program") != 0)
    {
        printf("Erro: palavra-chave 'program' esperada\n");
        exit(1);
    }

    char identifier[100];
    scanf("%s", identifier);

    if (!isIdentifierValid(identifier))
    {
        printf("Erro: identificador inválido\n");
        exit(1);
    }

    char semicolon[2];
    scanf("%s", semicolon);

    if (strcmp(semicolon, ";") != 0)
    {
        printf("Erro: ponto e vírgula esperado\n");
        exit(1);
    }

    parseBlock();

    char dot[2];
    scanf("%s", dot);

    if (strcmp(dot, ".") != 0)
    {
        printf("Erro: ponto final esperado\n");
        exit(1);
    }
}

int main()
{
    parseProgram();

    printf("Análise sintática concluída com sucesso!\n");

    return 0;
}
