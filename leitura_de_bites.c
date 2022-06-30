#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch[15];
    int valor[15], i = 0;

    FILE *ptrArq;

    ptrArq = fopen("binario.bin", "rb");

    if (ptrArq != NULL)
        printf("\n\nArquivo binario.bin foi aberto com sucesso\n\n");
    else
    {
        printf("\n\nERRO: O arquivo binario.bin não foi aberto e criado\n");
        system("pause");
        exit(1);
    }

    fread(ch, sizeof(ch), 1, ptrArq);

    fread(valor, sizeof(valor), 1, ptrArq);

    for(i = 0; i < 15; i++)
  {
    printf("%c",ch[i]);
  }
   
  printf("\nVetor de inteiros: ");
  
  for(i = 0; i < 15; i++)
  {
    printf("\n%d",valor[i]);
  }
   
  //fechando o arquivo
  fclose(ptrArq);  
  
  printf("\n");
  return(0);
}