#include <stdio.h>
#include <stdlib.h>

int main(int argv, char **argc)
{
    char ch[15] = "Teste Geral";
    int valor[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    FILE *arquivo;

    arquivo = fopen("binario.bin", "wb");

    if (arquivo != NULL)
    {
        printf("\n\nArquivo binario.bin for aberto com sucesso.\n");
    }
    else
    {
        printf("\n\nErro: O arquivo binario.bin não foi aberto \n");
        exit(1);
    }

    fwrite(ch, sizeof(char), 15, arquivo);
    fwrite(valor, sizeof(int), 15, arquivo);

    fclose(arquivo);

    return 0;
}
