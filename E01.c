
#include<stdio.h>
int main(){
    
    /* Abre para a escrita, se o arquivo existir o seu conteudo será apagado, senao um novo arquivo sera criado.*/
    FILE* arquivo_escrita;
    arquivo_escrita = fopen("arq_escrita.txt","w");

    /* Abre para a leitura, se o arquivo existir abre ele, senao retorna NULL para arquivo_leitura.*/
    FILE* arquivo_leitura;
    arquivo_leitura = fopen("arq_leitura.txt","r");

    /* Abre para adicionar no fim do arquivo, se o arquivo existir adiciona no final dele, senao cria um novo arquivo*/
    FILE* arquivo_sobrescrita;
    arquivo_leitura = fopen("arq_sobrescrita.txt","a");
    
    /* Abre para leitura e escrita, se o arquivo existir abre normalmente, senao retorna NULL */
    FILE* arquivo_leitura_e_escrita_1;
    arquivo_leitura_e_escrita_1 = fopen("arq_le_01.txt","r+");
    
    /* Abre para leitura e escrita, se o arquivo existir apaga o anterior e cria um novo, senao cria um novo */
    FILE* arquivo_leitura_e_escrita_2;
    arquivo_leitura_e_escrita_2 = fopen("arq_le_02.txt","w+");
    
    /* Abre para leitura e escrita no fim do arquivo, se o arquivo existir abre normalmente, senao cria um novo */
    FILE* arquivo_leitura_e_escrita_no_fim;
    arquivo_leitura_e_escrita_no_fim = fopen("arq_le_03.txt","a+");
    
        
    
    fclose(arquivo_escrita);
    fclose(arquivo_leitura);
    fclose(arquivo_sobrescrita);
    fclose(arquivo_leitura_e_escrita_1);
    fclose(arquivo_leitura_e_escrita_2);
    fclose(arquivo_leitura_e_escrita_no_fim);

    return 0;
}
