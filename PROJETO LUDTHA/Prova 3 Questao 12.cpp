/* Terceira avaliacao
Autor:thales.teixeira100@gmail.com
Data:07/12/2020
Objetivo: Questao 12- Faça um programa C contendo uma função que receba, por parâmetro, uma matriz A(3,4) e retorne a multiplicação dos seus
elementos.
*/
#include <stdio.h>
#define NL 3
#define NC 4
// função que recebe como parâmetro uma matriz 3 x 4
int funcao_multiplicacao_matriz(int matriz[NL][NC])
{
    // declarações de variaveis da função
    int i, j, multiplicacao=1;
    // varrer a matriz
    for(i = 0; i < NL; i++)
    {
      for(j = 0; j < NC; j++)
      {
        multiplicacao = multiplicacao * matriz[i][j];
      }
    }
    return multiplicacao;
}
// programa principal
int main()
{
    // declarações das variáveis
    int i, j, matriz[NL][NC], resultado_multiplicacao;
    // entrada de dados da matriz
    for(i = 0; i < NL; i++)
    {
       for(j = 0; j < NC; j++)
       {
        printf("Matriz[%d][%d]:", i, j);
        scanf("%d", & matriz[i][j]);
       }
    }
    // chamada da função 
    resultado_multiplicacao  = funcao_multiplicacao_matriz (matriz);  
    // mostrar o resultado
    printf("A multiplicacao dos elementos da matriz e: %d\n", resultado_multiplicacao);
}
