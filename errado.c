#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
1. Uma certa firma fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Sabendo que foram entrevistadas n pessoas e que o usuário deve
fornecer:
        • o valor de n.
        • o nome completo de cada entrevistado,
        • o sexo de cada entrevistado (f/m),
        • a idade de cada entrevistado,
        • sua resposta (s)im, (n)ão ou (i)ndeciso,
        • e o preço pago pelo produto.
Desenvolva um programa em linguagem C para armazenar os dados dos entrevistados em
um arquivo de texto.
Neste programa, variáveis, vetores, matrizes e ponteiros NÃO poderão ser globais.
        O programa deve ainda, via funções, realizar o seguinte conjunto de funcionalidades:


            1) cálculo da média de idade dos entrevistados e a média de preços paga por eles.
            2) listagem de quais pessoas responderam sim, não ou indeciso, conforme queira
            o usuário.
            3) cálculo de quantos entrevistados têm idade acima, igual e abaixo da média.
            4) cálculo de quantos entrevistados pagaram acima da média e quantos pagaram
            abaixo.


    As funcionalidades 1, 3 e 4 serão implementadas por funções que não ‘imprimem’
mensagem em tela. Assim sendo, os resultados delas devem ser ‘impressos’ em
outra(s) função(ões).
Quanto ao usuário, ele poderá escolher quais funcionalidades utilizar,
selecionando uma por vez e podendo repeti-las.
O usuário poderá determinar ainda se a funcionalidade escolhida se aplicará a
ambos os sexos ou a um determinado por ele.
*/

typedef struct Pessoa{

    char nome[100];
    char sexo;
    int idade;
    char resposta;
    double preco;

}Pessoa;

void ler(Pessoa* p){

    printf("\n entre com o nome:\n");
    fflush(stdin);
    gets(p->nome);
    printf("\n entre com o sexo:(m/f)\n");
    fflush(stdin);
    scanf("%c",&p->sexo);
    printf("\n entre com a idade:\n");
    fflush(stdin);
    scanf("%d",&p->idade);
    printf("\n entre com a resposta:(s/n/i)\n");
    fflush(stdin);
    scanf("%c",&p->resposta);
    printf("\n entre com o preco:\n");
    fflush(stdin);
    scanf("%lf",&p->preco);
}


void exibe(Pessoa* p){

    printf("\n nome:\n");
    puts(p->nome);
    printf("\n sexo:(m/f)\n");
    printf("%c",p->sexo);
    printf("\n idade:\n");
    printf("%d",p->idade);
    printf("\n resposta:\n");
    printf("%c",p->resposta);
    printf("\n preco pago:\n");
    printf("%lf",p->preco);

}


void grava(Pessoa* p,FILE* arquivo){
    fputs(p->nome,arquivo);
    fprintf(arquivo,"\n");
    fprintf(arquivo,"%c",p->sexo);
    fprintf(arquivo,"\n");
    fprintf(arquivo,"%d",p->idade);
    fprintf(arquivo,"\n");
    fprintf(arquivo,"%c",p->resposta);
    fprintf(arquivo,"\n");
    fprintf(arquivo,"%lf",p->preco);
    fprintf(arquivo,"\n");

}

int menu(){
    int resultado;
    printf("\n==============\n");
    printf("\n1.cadastrar   \n");
    printf("\n2.medias      \n");
    printf("\n==============\n");
    scanf("%d",&resultado);

    return resultado;
}



void acao_cadastrar(){

        int n;
        scanf("%d",&n);
        Pessoa** vetor =(Pessoa**) malloc(n*sizeof(Pessoa*));
        int i;
        for(i=0;i<n;i++)
        {
            vetor[i]=(Pessoa*) malloc(sizeof(Pessoa));
            ler(vetor[i]);
            exibe(vetor[i]);
        }

        FILE* arquivo = fopen("myData.txt","a+");
        for(i=0;i<n;i++)
            grava(vetor[i],arquivo);
        fclose(arquivo);
}

void acao_medias(){

    FILE* arquivo = fopen("myData.txt","r");
    Pessoa* corrente =(Pessoa*) malloc(sizeof(Pessoa));
    long int acumulador_idade=0;
    double acumulador_preco=0.0;
    char str_aux[100];
    char c_aux='a';
    int idade_corrente=0;
    double preco_corrente=0.0;
    double preco;
    while(ftell(arquivo)!=SEEK_END)
    {
        while(c_aux!='\n'){
            c_aux = fgetc(arquivo);
            }
        if(c_aux=='\n')
            c_aux=fgetc(arquivo);
        fscanf(arquivo,"%d",&idade_corrente);
        acumulador_idade+=idade_corrente;
        printf("\n idade corrente: %d",idade_corrente);
        fseek(arquivo,3*sizeof(char),SEEK_CUR);
    fscanf(arquivo,"%lf",&preco_corrente);
        printf("\n PRECO corrente: %lf",preco_corrente);
        fseek(arquivo,2*sizeof(char),SEEK_CUR);
        
    }
}

void acao_logica(int resultado){
    switch(resultado){
        case 1 :
            acao_cadastrar();
            break;
        case 2:
            acao_medias();
            break;
    }
}


int main(){

    acao_logica(menu());




    return 0;



}
