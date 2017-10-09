#include<stdio.h>
int main(){
    
    FILE* arquivo = fopen("dados.txt","w");
    int i;
    for(i=1;i<=100;i++){

        fprintf(arquivo,"%d\n",i);

    }
    fclose(arquivo);
    return 0;
}
