//Projeto Final Jogos de Enigmas
#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
// Programa principal
int main(void)
{  
   //comando que permite as letras com acentua��o
   setlocale(LC_ALL, "Portuguese");
   //Variaveis do prgrama principal
   char enigma_resposta1, enigma_resposta2, enigma_resposta3, enigma_resposta4, enigma_resposta5, enigma_resposta6;
   int opcao, nivel, enigma, enigma_m;
   do {
    // Limpa a tela
    system("cls");
    system ("color 02"); // cor de fundo Preta e letras verdes
    // Exibe o menu
    gotoxy(32,1);
    printf(" Bem Vindo ao Universo Ludtha  ");
    gotoxy(22,3);
    printf(" [1] - Jogar ");
    gotoxy(22,5);
    printf(" [2] - Sobre ");
    gotoxy(22,7);
    printf(" [3] - Sair ");
    gotoxy(30, 9);
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
    //escolha do n�vel 	
	printf("\n----------------------------");
	printf("\n Escolha o n�vel: ");
	printf("\n [1] - F�cil");
	printf("\n [2] - M�dio");
	printf("\n [3] - D�ficil");
	printf("\n [4] - SuperGenio");	
	printf("\n Digite a opcao desejada: ");
	scanf("%d", &nivel);
    // Limpa a tela
    system("cls");
	//leitura dos enigmas
	//Nivel Facil
	if ( nivel == 1) {
        printf("\n----------------------------");
	    printf("\n Escolha o  enigma: ");
	    printf("\n [1] - Enigma do Anivers�rio ");
	    printf("\n [2] - Enigma da Vi�va");
	    printf("\n [3] - Enigma do Cego");
	    printf("\n Digite a opcao desejada: ");
	    scanf("%d", & enigma);
	    system("pause");
	    system("cls");
	//Enigma do Anivers�rio
	if ( enigma == 1){
	    printf("%s\n","O enigma do Anivers�rio");
	    printf("%s\n","Tenho 100 anos de idade, mas s� tive 25 anivers�rios durante a minha vida.");
	    printf("%s\n","Que dia e m�s eu nasci?");
	    printf("%s\n","a) 28 de fevereiro");
	    printf("%s\n","b) 29 de fevereiro");
	    printf("%s\n","c) 27 de fevereiro");
	    printf("%s\n","Digite a opcao desejada:");
	    scanf("%s", &enigma_resposta1);
    if ( enigma_resposta1 == 'b' ){
        printf(" Acertou! Voce � um Genio.");	
	}else {
	    printf ("\nVoce errou!\n");
	}
	printf("\n");
	system("pause");
	}
	//Enigma da Vi�va
	if ( enigma == 2){
	    printf("%s\n","Enigma da Vi�va");
	    printf("%s\n","Uma vi�va perde a carteira primeiro, depois o sapato e depois o cachorro.");
	    printf("%s\n","O que a senhora perdeu primeiro?");
	    printf("%s\n","a) carteira");
	    printf("%s\n","b) sapato");
	    printf("%s\n","c) marido");
	    printf("%s\n","Digite a opcao desejada:");
	    scanf("%s", &enigma_resposta2);
    if ( enigma_resposta2 == 'c' ){
        printf(" Acertou! Voce � um Genio.");	
	}else {
	    printf ("\nVoce errou!\n");
	}
	printf("\n");
	system("pause");
	}
	//Enigma do Cego
	if ( enigma == 3){
	    printf("%s\n","Enigma do Cego");
	    printf("%s\n","Um cego estava na cadeia e viu 2 cavalos, 5 vacas e 3 cachorros.");
	    printf("%s\n","Quantos animais ele viu?");
	    printf("%s\n","a) 8 animais");
	    printf("%s\n","b) 10 animais");
	    printf("%s\n","c) 0 animais");
	    printf("%s\n","Digite a opcao desejada:");
	    scanf("%s", &enigma_resposta3);
    if ( enigma_resposta3 == 'c' ){
        printf(" Acertou! Voce � um Genio.");	
	}else {
	    printf ("\nVoce errou!\n");
	}
	printf("\n");
	system("pause");
	}	
	}
    //Nivel M�dio
	if ( nivel == 2) {
	//escolha dos enigmas de nivel medio
	    printf("\n----------------------------");
	    printf("\n Escolha o  enigma: ");
	    printf("\n [1] - Enigma O mist�rio do qu�mico");
	    printf("\n [2] - Enigma do Hospital");
	    printf("\n [3] - Enigma dos Dias");
	    printf("\n Digite a opcao desejada: ");
	    scanf("%d", & enigma_m);
	    system("pause");
	    system("cls");	
	//Enigma O mist�rio do qu�mico
	if ( enigma_m == 1) {
        printf("%s\n","O mist�rio do qu�mico");
        printf("\n");
        printf("%s\n","Um famoso qu�mico foi encontrado morto em seu pr�prio laborat�rio.No local n�o foram encontradas provas, com exce��o de uma folha de papel ao lado do corpo: era uma lista de v�rios elementos qu�micos.O detetive descobriu que no dia em que o cientista foi assassinado, tr�s pessoas o haviam visitado: sua esposa Mary, seu sobrinho Nicolas e seu amigo Jonathan.");
        printf("%s\n","O que estava escrito no papel: carbono, oxigenio, n�quel, lant�nio, enxofre\n");
        printf("%s\n","Dica: Use as siglas dos elementos qu�micos.");
        printf("%s\n","Quem foi o assassino? \n");
        printf("%s\n","a)Nicolas");
	    printf("%s\n","b)Mary");
	    printf("%s\n","c)Jonathan");
	    printf("%s\n","Digite a opcao desejada:");
        scanf("%s", &enigma_resposta4);
    if ( enigma_resposta4 == 'a' ){
        printf(" Acertou! Voce � um Genio.");	
	}else {
	    printf ("\nVoce errou!\n");
	}
	printf("\n");
	system("pause");
	}
	//Enigma do Hospital
	if ( enigma_m == 2) {
        printf("%s\n","Enigma do Hospital");
        printf("\n");
        printf("%s\n","Uma pessoa passou 3 dias em um hospital, embora estivesse totalmente bem de sa�de. Por�m, ao sair, teve de ser carregada");
        printf("%s\n","Dica: N�o sabia andar.");
        printf("%s\n","Quem  era a pessoa? \n");
        printf("%s\n","a)Uma crian�a");
	    printf("%s\n","b)Um r�cem - nascido");
	    printf("%s\n","c)Um cachorro");
	    printf("%s\n","Digite a opcao desejada:");
        scanf("%s", &enigma_resposta5);
    if ( enigma_resposta5 == 'b' ){
        printf(" Acertou! Voce � um Genio.");	
	}else {
	    printf ("\nVoce errou!\n");
	}
	printf("\n");
	system("pause");
	}
	
	//Enigma dos Dias
	if ( enigma_m == 3) {
        printf("%s\n","Enigma dos Dias");
        printf("\n");
        printf("%s\n","Se o amanh� de ontem era quinta-feira.");
        printf("%s\n","Qua dia � o dia depois de amanh� de ontem?.");
        printf("%s\n","Dica:Examine frase por frase\n");
        printf("%s\n","a)Quinta-Feira");
	    printf("%s\n","b)Quarta-Feira");
	    printf("%s\n","c)Sexta-Feira");
	    printf("%s\n","Digite a opcao desejada:");
        scanf("%s", &enigma_resposta6);
    if ( enigma_resposta6 == 'c' ){
        printf(" Acertou! Voce � um Genio.");	
	}else {
	    printf ("\nVoce errou!\n");
	}
	printf("\n");
	system("pause");
	}
    }
	 break;
	// sobre o nosso projeto
	case 2:
	 
