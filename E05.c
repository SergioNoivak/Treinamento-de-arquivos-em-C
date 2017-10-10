#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define PAR 0
#define IMPAR 1

int main(){


    FILE* saida = fopen("saida.txt","w");
    FILE* arquivo = fopen("exemplo.html","r");
    int i=PAR;
    char c='a';
    while(!feof(arquivo)){
          c = fgetc(arquivo);
         if(c=='<')
            i=IMPAR;
        else if(c=='>')
            i=PAR;
         else if(i==PAR)
            fprintf(saida,"%c",c);
    }
    return 0;
}
