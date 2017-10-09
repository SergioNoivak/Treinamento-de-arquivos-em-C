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
## Arquivo BINARIO
       
        
