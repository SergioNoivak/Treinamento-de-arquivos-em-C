#include<stdio.h>

/*
Faça um programa que leia um arquivo texto do disco, lendo linha a linha, e exibindo
cada uma das linhas numeradas na tela. A ideia é podermos pegar um arquivo um
arquivo texto qualquer (pode ser inclusive o arquivo do programa fonte – arquivo “.c”
– de um destes exercícios) e mostrar na tela com as linhas numeradas. As primeiras
linhas do arquivo iriam ser exibidas na tela da seguinte forma:
1: #include
2: #include
3:
4: FILE *ArqEntrada;
5: ...
*/

#define TAM_LINHA 1000000
int main(){

    FILE* arquivo = fopen("dados.txt","r");
    long long int numero_de_linhas = 0;
    char str_aux[TAM_LINHA];
    while(!feof(arquivo)){

        fgets(str_aux,TAM_LINHA,arquivo);
        numero_de_linhas++;
    }
    fclose(arquivo);
    printf("%d",numero_de_linhas);
    return 0;
}
