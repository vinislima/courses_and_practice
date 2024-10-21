Os computadores Foram inventados para realizar cálculos muito rapidamente, e atendem a esse requisito de maneira extraordinária. Porém, nem toda conta pode ser feita num computador, pois ele não consegue representar todos os números dentro de sua memória. Em um computador pessoal atual, por exemplo, o maior inteiro que é possível representar em sua memória é 4.294.967.295. Caso alguma conta executada pelo computador de um resultado acima desse número, ocorrerá o que chamamos de overflow, que é quando o computador faz uma conta e o resultado não pode ser representado, por ser maior do que o valor máximo permitido (em inglês overflaw significa trasbordar).

Por exemplo, se um computador só pode representar números menores do que 1023 e mandamos ele executar a conta 1022 +5, val ocorrer overflow.

Dados o maior número que um computador consegue representar uma expressão de dols inteiras, determine se ocorrerá overflow, soma ou multiplicação entre

Entrada

A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente a teclado).

A primeira linha da entrada contém um inteiro N (1 ≤ N ≤500.000) representando o maior número que o computador consegue representar. A segunda linha contém um inteiro P (0 P 1000), seguido de um espaço em branco, seguido de um caractere C (que pode ser + ou", representando os operadores de adição e multiplicação, respectivamente), seguido de um espaço em branco, seguido de um outro inteiro Q (0Q1000). Essa linha representa a expressão PQ, se o caractere C for, ou PQ, se o caractere Cfor

Saida

Seu programa deve imprimir, na salda padrão, a palavra 'OVERFLOW' se o resultado da expressão causar um overflow, ou a palavra 'OK' caso contrário, Ambas as palavras devem ser escritas com letras malúsculas.

Exemplo de entrada:

10
5 + 5

Exemplo de saída:
OK

Exemplo de entrada:
44
23 * 2

Exemplo de saída:
OVERFLOW

Exemplo de entrada:
323500
42 * 35

Exemplo de saída:
OK