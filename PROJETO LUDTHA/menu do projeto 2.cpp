/* Menu em C */

#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
/* Funcao que soma dois numeros */
int soma(int a,int b)
{
   int s;
   s = a + b;
   return s;
}

/* Funcao que sutrai dois numeros */
int subtracao(int a,int b)
{
   int s;
   s = a - b;
   return s;
}

void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Programa principal
int main()
{
   //Variaveis do prgrama principal
   int numero1,numero2,resultado1,resultado2;
   int opcao;

   do {
     // Limpa a tela
     system("cls");
     system ("color 1B"); // cor de fundo azul e letras azuis claras
     // Exibe o menu
     gotoxy(32,1);
     printf(" Menu de opcoes   ");
     gotoxy(22,3);
     printf(" [1] - Soma de dois numeros ");
     gotoxy(22,5);
     printf(" [2] - Subtrair dois numeros ");
     gotoxy(22,7);
     printf(" [3] - Sair ");
     gotoxy(30,9);
     printf(" Entre com a opcao: [ ] ");
     // Leitura da opcao digitada pelo usuario
     do{
       gotoxy(51,9);
       scanf("%d",&opcao);
     } while ( (opcao < 1) || (opcao > 3 ));
     // Limpa a tela
     system("cls");
     // Verifica qual opcao deve executar
     switch (opcao)
     {
       case 1:
	 // Somar dois numeros
	 printf("\n Informe o primeiro numero: ");
	 scanf("%d",&numero1);
	 printf(" Informe o segundo numero: ");
	 scanf("%d",&numero2);
	 // Chamada da funcao
	 resultado1=soma(numero1,numero2);
	 // Exibe resultado da soma
	 printf(" \n\n\n A soma entre os numeros ‚ %d",resultado1);
	 break;
       case 2:
	 // Subtair dois numeros
	 printf("\n Informe o primeiro numero: ");
	 scanf("%d",&numero1);
	 printf(" Informe o segundo numero: ");
	 scanf("%d",&numero2);
	 // Chamada da funcao
	 resultado2=subtracao(numero1,numero2);
	 // Exibe resultado da subtracao
	 printf(" \n\n\n A subtracao entre os numeros ‚ %d",resultado2);
	break;
    }
    gotoxy(10,20);
    printf( "Tecle <ENTER> para continuar.");
   } while( opcao!=3);
}
