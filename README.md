# Treinamento-de-arquivos-em-C
## Podemos classificar os arquivos em duas modalidades:
* TEXTO
* BINARIO
<br>O arquivo será o lugar que vamos substituir um ou ambos de nossos fluxos principais, Entrada e Saida.
A linguagem C conta com diversas funções para tais manipulações.
## Arquivo TEXTO
Podemos abrir um arquivo `.txt` Das seguintes formas:
<table border="1">
<tr>
<td><b>MODO</b></td>
<td><b>Descrição</b></td>
<td><b>se o arquivo EXISTIR</b></td>
<td><b>se o arquivo NÃO EXISTIR</b></td>
</tr>
<tr>
<td>”r”</td>
<td>Abre o arquivo somente para leitura, a partir do início. O arquivo deve existir.</td>
<td>abre normalmente</td>
<td>ponteiro NULL</td>
<tr>
<td>"w"</td>
<td>Cria um arquivo vazio para escrita. Se já havia o arquivo, ele é perdido</td>
<td>O anterior é apagado e cria um novo</td>
<td>Cria um novo arquivo</td>
</tr>
<tr>
<td>”a”</td>
<td>Abre o arquivo para adicicionar no final</td>
<td>abre normalmente</td>
<td>cria um novo</td>
</tr>
<tr>
<td>”r+”</td>
<td>Abre o arquivo para leitura e escrita, a partir do inicio.</td>
<td>abre normalmente</td>
<td>ponteiro NULL</td>
</tr>  
 <tr>
<td>”w+”</td>
<td>cria um novo arquivo para leitura e escrita</td>
<td>O anterior é apagado e cria um novo</td>
<td>cria um novo</td>
</tr>
  <tr>
<td>”a+”</td>
<td>Abre para edição e leitura no fim do arquivo</td>
<td>Abre normalmente</td>
<td>cria um novo</td>
</tr>  
</table>

Os modos de abertura de arquivo estão evidenciados em `E01.c`.
<h3>
Funcoes para abertura de arquivos texto:
</h3>

Podemos abrir com a seguinte funcão:

```
FILE * fopen ( const char * filename, const char * mode )
```

A funcao `fopen` retorna um ponteiro do tipo `FILE` e recebe por parametro `char * filename` que é o nome do arquivo e `const char * mode` que é uma das opções de modo da tabela anterior, exemplo:

```
 FILE* arquivo_leitura;
 arquivo_leitura = fopen("arq_leitura.txt","r");
```
<h3>
Verificar se o arquivo foi aberto corretamente
</h3>

é sempre importante saber se um arquivo foi aberto corretamente a fim de tratarmos se isso não acontecer, exemplo:

```
    FILE* arquivo_leitura;
    arquivo_leitura = fopen("arq_leitura.txt","r");
    if(arquivo_leitura==NULL)
        {
          printf("Arquivo nao encontrado");
          return 0;
        }
```

<h3>
Fechar o arquivo
</h3>
Sempre quando não for mais utilizar um arquivo é necessario fecha-lo com a funcao

```
int fclose ( FILE * stream )
```
exemplo:
```
    FILE* arquivo_leitura = fopen("arq_leitura.txt","r");
    fclose(arquivo_leitura);
```

<h1>
Exercicios
</h1>

<table border="1">

<tr>
 
<td>
 1
 </td>
 <td>
Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”,
e escreva neste arquivo em disco uma contagem que vá de 1 até 100, com um número
em cada linha. </td>
</tr>
</table>

O exercicio resolvido esta em `E02.c`.

<table border="1">
<tr>
<td>
 2
 </td>
 <td>
Faça um programa que leia um arquivo texto do disco, lendo linha a linha, e exibindo
cada uma das linhas numeradas na tela. A ideia é podermos pegar um arquivo um
arquivo texto qualquer (pode ser inclusive o arquivo do programa fonte – arquivo “.c”
– de um destes exercícios) e mostrar na tela com as linhas numeradas. As primeiras
linhas do arquivo iriam ser exibidas na tela da seguinte forma:
<br>1: #include
<br>2: #include
<br>3:
<br>4: FILE *ArqEntrada;
<br>5: ...
 </td>
</tr>
</table>

O exercicio resolvido esta em `E03.c`.






## Arquivo BINARIO
       
        
