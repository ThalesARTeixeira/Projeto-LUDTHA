/* Menu em C */
#include <stdio.h>
int main()
{
  int opcao;
  do {
   clrs();
   gotoxy(32,1);
   printf("MENU DE OPCOES");
   gotoxy(22,3);
   printf("[1] - Atualizar tabela");
   gotoxy(22,5);
   printf("[2] - Fazer consulta...");
   gotoxy(22,7);
   printf("[3] - Cadastrar Cliente");
   gotoxy(22,9);
   printf("[4] - Calcular Producao Total");
   gotoxy(22,11);
   printf("[5] - Sair");
   gotoxy(30,13);
   printf("Entre com a opcao: [   ]");
   do {
      gotoxy(51,13);
      scanf("%d",&opcao);
   } while ((opcao < 1) || (opcao > 5));

   clrscr();
   switch (opcao)
   {
    case 1:
	   printf("opcao 1");
	break;
    case 2:
	   printf("opcao 2");
	break;
    case 3:
	   printf("opcao 3");
	break;
    case 4:
	   printf("opcao 4");
	break;
   }
   gotoxy(10,20);
   printf("Tecle <ENTER> para continuar...");
   getch();
  } while (opcao != 5);
}
