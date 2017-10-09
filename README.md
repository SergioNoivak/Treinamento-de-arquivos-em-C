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
<h2>
Funcoes para abertura de arquivos texto:
</h2>

Podemos abrir com a seguinte funcão:

```
FILE * fopen ( const char * filename, const char * mode )
```

A funcao `fopen` retorna um ponteiro do tipo `FILE` e recebe por parametro `char * filename` que é o nome do arquivo e `const char * mode` que é uma das opções de modo da tabela anterior, exemplo:

```
 FILE* arquivo_leitura;
 arquivo_leitura = fopen("arq_leitura.txt","r");
```
<h2>
Verificar se o arquivo foi aberto corretamente
</h2>

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

<h2>
Fechar o arquivo
</h2>
Sempre quando não for mais utilizar um arquivo é necessario fecha-lo com a funcao

```
int fclose ( FILE * stream )
```
exemplo:
```
    FILE* arquivo_leitura = fopen("arq_leitura.txt","r");
    fclose(arquivo_leitura);
```


## Arquivo BINARIO
       
        
