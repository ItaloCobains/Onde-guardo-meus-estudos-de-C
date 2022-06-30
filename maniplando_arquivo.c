#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char **argc)
{
    FILE *p;
    int r;

    p = fopen("arquivo.py", "a");

    if (p == NULL)
    {
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }

    r = fputs("print(1 + 1)", p);

    if (r == EOF)
    {
        printf("Erro ao tentar gravar os dados\n");
    }
    else
    {
        printf("Dados gravados com sucesso\n");
    }

    fclose(p);
    return 0;
}