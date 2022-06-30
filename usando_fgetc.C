#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char **argc)
{
    FILE *p;
    char frase[50];

    p = fopen("arquivo.txt", "r");

    while (fgets(frase, 50, p) != NULL)
        ;
    printf("%s", frase);

    fclose(p);

    return 0;
}