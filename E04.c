#include<stdio.h>
#define TAM 1
#define TAM_LINHA 100

/*
Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o nome,
nota1, nota2. Calcule a média aritmética simples dos 10 alunos e depois escreva em
um arquivo texto os dados de cada aluno: nome, nota1, nota2 e média. Lembre-se de
que as notas e média deverão ser apresentadas como valores que possuem até 2 casas
após a vírgula.
*/

typedef struct Aluno{

    char nome[TAM_LINHA];
    double nota1;
    double nota2;
    double media;

}Aluno;

  void ler_aluno(Aluno* a){

    fflush(stdin);
    gets(a->nome);
    fflush(stdin);
    scanf("%lf",&a->nota1);
    fflush(stdin);
    scanf("%lf",&a->nota2);
    a->media = (a->nota1+a->nota2)/(double)2;

  }
  void exibe_aluno(Aluno a){


    puts(a.nome);
    printf("\n%f",a.nota1);
    printf("\n%f",a.nota2);
    printf("\n%f",a.media);


  }

    void grava_aluno(Aluno a, FILE* arquivo){

    fputs(a.nome,arquivo);
    fprintf(arquivo,"\n%.2lf\n",a.nota1);
    fprintf(arquivo,"%.2lf\n",a.nota2);
    fprintf(arquivo,"%.2lf\n",a.media);
    }


int main(){

    Aluno alunos[TAM];
    int i=0;
    for(i=0;i<TAM;i++)
    ler_aluno(&alunos[i]);
    for(i=0;i<TAM;i++)
    exibe_aluno(alunos[i]);

    FILE* arquivo = fopen("dados.txt","w");
    for(i=0;i<TAM;i++)
        grava_aluno(alunos[i],arquivo);

    fclose(arquivo);

    return 0;
}
