//Projeto Final Jogos de Enigmas
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void menu_principal(){
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
        printf(" Entre com a op��o: [ ] ");
}
void sobre(){
	printf("\n----------------------------");
    printf("\n Universo Ludtha � um jogo de resolu��o de Enigmas");
    printf("\n Desenvolvido por: Ludmila Rocha Silva e Thales Augusto Rocha Teixeira.");
    printf("\n Professora: Dra. Luciene C. Oliveira");	
    printf("\n Objetivo: Aplicar nossos conhecimentos em liguagem C adquiridos na disciplina de ALGORITMOS E T�CNICAS DE PROGRAMA��O");	
    printf("\n----------------------------");
}
void nivel(){
	printf("\n----------------------------");
    printf("\n Escolha o n�vel: ");
    printf("\n [1] - F�cil");
    printf("\n [2] - M�dio");
    printf("\n [3] - D�ficil");
    printf("\n [4] - SuperG�nio");
	printf("\n [5] - Voltar ao menu");	
    printf("\n Digite a op��o desejada: ");
}
void escolha_enigma_facil(){
	printf("\n----------------------------");
    printf("\n Escolha o  enigma: ");
    printf("\n [1] - Enigma do Anivers�rio ");
    printf("\n [2] - Enigma da Vi�va");
    printf("\n [3] - Enigma do Cego");
    printf("\n [4] - Voltar ao menu");
    printf("\n Digite a op��o desejada: ");
}
void enigma_facil_1(){
	printf("%s\n","O enigma do Anivers�rio");
    printf("%s\n","Tenho 100 anos de idade, mas s� tive 25 anivers�rios durante a minha vida.");
    printf("%s\n","Que dia e m�s eu nasci?");
    printf("%s\n","a) 28 de fevereiro");
    printf("%s\n","b) 29 de fevereiro");
    printf("%s\n","c) 27 de fevereiro");
    printf("%s\n","Digite a op��o desejada:");
}
void enigma_facil_2(){
	printf("%s\n","Enigma da Vi�va");
    printf("%s\n","Uma vi�va perde a carteira primeiro, depois o sapato e depois o cachorro.");
    printf("%s\n","O que a senhora perdeu primeiro?");
    printf("%s\n","a) carteira");
    printf("%s\n","b) sapato");
    printf("%s\n","c) marido");
    printf("%s\n","Digite a op��o desejada:");
}void enigma_facil_3(){
	printf("%s\n","Enigma do Cego");
    printf("%s\n","Um cego estava na cadeia e viu 2 cavalos, 5 vacas e 3 cachorros.");
    printf("%s\n","Quantos animais ele viu?");
    printf("%s\n","a) 8 animais");
    printf("%s\n","b) 10 animais");
    printf("%s\n","c) Nenhum animal");
    printf("%s\n","Digite a op��o desejada:");
} 
void escolha_enigma_medio(){
	printf("\n----------------------------");
    printf("\n Escolha o  enigma: ");
    printf("\n [1] - Enigma O mist�rio do qu�mico");
    printf("\n [2] - Enigma do Hospital");
    printf("\n [3] - Enigma dos Dias");
    printf("\n [4] - Voltar ao menu");
    printf("\n Digite a op��o desejada: ");
}
void enigma_medio_1(){
	printf("%s\n","O mist�rio do qu�mico");
    printf("\n");
    printf("%s\n","Um famoso qu�mico foi encontrado morto em seu pr�prio laborat�rio.No local n�o foram encontradas provas, com exce��o de uma folha de papel ao lado do corpo: era uma lista de v�rios elementos qu�micos.O detetive descobriu que no dia em que o cientista foi assassinado, tr�s pessoas o haviam visitado: sua esposa Mary, seu sobrinho N�colas e seu amigo Jonathan.");
    printf("%s\n","O que estava escrito no papel: Carbono, Oxig�nio, N�quel, Lant�nio, Enxofre\n");
    printf("%s\n","Dica: Use as siglas dos elementos qu�micos.");
    printf("%s\n","Quem foi o assassino? \n");
    printf("%s\n","a)N�colas");
    printf("%s\n","b)Mary");
    printf("%s\n","c)Jonathan");
    printf("%s\n","Digite a op��o desejada:");
}
void enigma_medio_2(){
	printf("%s\n","Enigma do Hospital");
    printf("\n");
    printf("%s\n","Uma pessoa passou 3 dias em um hospital, embora estivesse totalmente bem de sa�de. Por�m, ao sair, teve de ser carregada");
    printf("%s\n","Dica: N�o sabia andar.");
    printf("%s\n","Quem  era a pessoa? \n");
    printf("%s\n","a)Uma crian�a");
    printf("%s\n","b)Um r�cem - nascido");
    printf("%s\n","c)Um cachorro");
    printf("%s\n","Digite a op��o desejada:");
}
void enigma_medio_3(){
	printf("%s\n","Enigma dos Dias");
    printf("\n");
    printf("%s\n","Se o amanh� de ontem era quinta-feira.");
    printf("%s\n","Qua dia � o dia depois de amanh� de ontem?.");
    printf("%s\n","Dica:Examine frase por frase\n");
    printf("%s\n","a)Quinta-Feira");
    printf("%s\n","b)Quarta-Feira");
    printf("%s\n","c)Sexta-Feira");
    printf("%s\n","Digite a op��o desejada:");
}
void escolha_enigma_dificil(){
	printf("\n----------------------------");
    printf("\n Escolha o  enigma: ");
    printf("\n [1] - Enigma do Vigia");
    printf("\n [2] - Enigma das Duas Portas");
    printf("\n [3] - Enigma do Condenado");
    printf("\n [4] - Voltar ao menu");
    printf("\n Digite a op��o desejada: ");
}
void enigma_dificil_1(){
	printf("%s\n","Enigma do Vigia");
    printf("\n");
    printf("%s\n","Um vigia noturno vivia dormindo durante seu trabalho.Um dia, o chefe avisou que se isso acontecesse novamente, ele seria demitido.Na noite seguinte o chefe o pegou no flagra, com a cabe�a apoiada sobre as m�os e os cotovelos sobre os joelhos. Te peguei, declarou o chefe. O vigia noturno acordou assustado e respondeu ao chefe utilizando apenas uma palavra.O chefe, ent�o, se desculpou e foi embora..");
    printf("%s\n","Qual palavra o vigia falou??.");
    printf("%s\n","a)Am�m");
    printf("%s\n","b)Adeus");
    printf("%s\n","c)Chorei");
    printf("%s\n","Digite a op��o desejada:");
}
void enigma_dificil_2(){
	printf("%s\n","Enigma das Duas Portas");
    printf("\n");
    printf("%s\n","Um homem est� preso em uma sala com apenas duas sa�das poss�veis, por meio de portas. Atr�s de uma das portas, existe uma sala constru�da a partir de lentes de aumento, mas os raios solares podem fritar instantaneamente qualquer um que entrar ali. Atr�s da outra porta, existe um drag�o que cospe fogo.");
    printf("%s\n","Qual a forma mais segura de escapar?");
    printf("%s\n","a)Porta 1");
    printf("%s\n","b)Porta 2");
    printf("%s\n","c)Porta 3");
    printf("%s\n","Digite a op��o desejada:");
}
void enigma_dificil_3(){
	printf("%s\n","Enigma do Condenado");
    printf("\n");
    printf("%s\n","Um assassino condenado a morte precisa escolher entre tr�s salas para receber sua execu��o. Na sala um, h� v�rios focos de inc�ndio; na sala dois, v�rios assassinos com armas carregadas; na sala tr�s, v�rios le�es que n�o comem h� cerca de tr�s meses..");
    printf("%s\n","Qual sala o assassino deve escolher, se quiser escapar da morte??");
    printf("%s\n","a)A sala 1.");
    printf("%s\n","b)A sala 3.");
    printf("%s\n","c)A sala 2.");
    printf("%s\n","Digite a op��o desejada:");
}
void escolha_enigma_super(){
	printf("\n----------------------------");
    printf("\n Escolha o  enigma: ");
    printf("\n [1] - Enigma do Ratoullie");
    printf("\n [2] - Enigma das Balas");
    printf("\n [3] - Enigma do Viajante");
    printf("\n [4] - Voltar ao menu");
    printf("\n Digite a op��o desejada: ");
}
void enigma_super_1(){
	printf("%s\n","Enigma do Ratoullie");
    printf("\n");
    printf("%s\n","Considere uma esp�cie de rato que � capaz de gerar 12 beb�s por m�s, sendo que podem dar � luz a partir de dois meses de vida. Voc� pegou um desses ratos num pet shop e levou para casa um dia ap�s o seu nascimento.");
    printf("%s\n","Depois de dez meses, quantos ratos voc� vai ter em casa?.");
    printf("%s\n","a)0");
    printf("%s\n","b)120");
    printf("%s\n","c)96");
    printf("%s\n","Digite a op��o desejada:");
}
void enigma_super_2(){
	printf("%s\n","Enigma das Balas");
    printf("\n");
    printf("%s\n","A av� dividiu 20 balas entre as duas netas.");
    printf("%s\n","Que horas s�o??");
    printf("%s\n","a)10:02");
    printf("%s\n","b)13:50");
    printf("%s\n","c)20:02");
    printf("%s\n","Digite a opcao desejada:");
}
void enigma_super_3(){
	printf("%s\n","Enigma do Viajante");
    printf("\n");
    printf("%s\n","Um viajante se deparou com uma bifurca��o na estrada em que estava, com caminhos para duas aldeias.Numa delas, as pessoas sempre contam mentiras, e na outra elas sempre dizem a verdade.O viajante precisa chegar na vila em que todos dizem a verdade, mas n�o existe nenhuma indica��o de qual caminho ele deve seguir. Em frente � bifurca��o, est� um homem nativo de uma das duas aldeias.Depois de fazer uma pergunta ao homem, o viajante descobre qual caminho deve seguir."); 
    printf("%s\n","Qual pergunta o viajante fez ao homem?");
    printf("%s\n","a)Qual caminho � o certo para sua aldeia?");
    printf("%s\n","b)Em que ano estamos?");
    printf("%s\n","c)Voc� fala verdade?");
    printf("%s\n","Digite a op��o desejada:");
}
// Programa principal
int main()
{  
   //comando que permite as letras com acentua��o
   setlocale(LC_ALL, "Portuguese");
   //Variaveis do prgrama principal
   char enigma_resposta1, enigma_resposta2, enigma_resposta3, enigma_resposta4, enigma_resposta5, enigma_resposta6,  enigma_resposta7, enigma_resposta8, enigma_resposta9, enigma_resposta10, enigma_resposta11, enigma_resposta12;
   int opcao, escolha, enigma, enigma_m, enigma_d, enigma_s;
   do{
        menu_principal();
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
	        nivel();
	        do{
                gotoxy(51,9);
                scanf("%d",&escolha);
            } while ( (escolha < 1) || (escolha > 5 ));
            // Limpa a tela
            system("cls");
	        //leitura dos enigmas
	       //Nivel Facil
	       if ( escolha == 1) {
	        	do{
	        		system("cls");
	        	    system ("color 02");
	                escolha_enigma_facil();
		            scanf("%d", & enigma);
		            system("pause");
		            system("cls");
		            //Enigma do Anivers�rio
		            if ( enigma == 1){
		                enigma_facil_1();
		                scanf("%s", &enigma_resposta1);
	                    if ( enigma_resposta1 == 'b' ){
	    	                system("color 2F");
	                        printf(" Acertou! Voc� � um G�nio.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
		            //Enigma da Vi�va
		            if ( enigma == 2){
		                enigma_facil_2();
		                scanf("%s", &enigma_resposta2);
	                    if ( enigma_resposta2 == 'c' ){
	    	                system("color 2F");
	                        printf(" Acertou! Voce � um G�nio.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
		            //Enigma do Cego
		            if ( enigma == 3){
		                enigma_facil_3();
		                scanf("%s", &enigma_resposta3);
	                    if ( enigma_resposta3 == 'c' ){
	    	                system("color 2F");
	                        printf(" Acertou! Voc� � um G�nio.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }	
		        }while(enigma != 4);
	        }
            //Nivel M�dio
	        if ( escolha == 2) {
	            //escolha dos enigmas de nivel medio
	            do{
	            	system("cls");
	        	    system ("color 02");
		            escolha_enigma_medio();
		            scanf("%d", & enigma_m);
		            system("pause");
		            system("cls");	
		            //Enigma O mist�rio do qu�mico
		            if ( enigma_m == 1){
	                    enigma_medio_1();
	                    scanf("%s", &enigma_resposta4);
	                    if ( enigma_resposta4 == 'a' ){
	    	                system("color 2F");
	                        printf(" Acertou! Voc� � um G�nio.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
		            //Enigma do Hospital
		            if ( enigma_m == 2) {
	                    enigma_medio_2();
	                    scanf("%s", &enigma_resposta5);
	                    if ( enigma_resposta5 == 'b' ){
	    	                system("color 2F");
	                        printf(" Acertou! Voc� � um Genio.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                    printf("\n");
		                    system("pause");
		            }
		            //Enigma dos Dias
		            if ( enigma_m == 3) {
	                    enigma_medio_3();
	                    scanf("%s", &enigma_resposta6);
	                    if ( enigma_resposta6 == 'c' ){
	    	                system("color 2F");
	                        printf(" Acertou! Voc� � um G�nio.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
	            }while(enigma != 4);
            }
            if ( escolha == 3){
                //escolha dos enigmas de nivel dificil
                do{
		            escolha_enigma_dificil();
		            scanf("%d", & enigma_d);
		            system("pause");
		            system("cls");
		            //Enigma do Vigia
		            if (enigma_d == 1){
	                    enigma_dificil_1();
	                    scanf("%s", &enigma_resposta7);
	                    if ( enigma_resposta7 == 'a' ){
	    	                system("color 2F");
	                        printf(" Acertou! Voc� � um G�nio.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
		            if (enigma_d == 2){
	                    enigma_dificil_2();
	                    scanf("%s", &enigma_resposta8);
	                    if ( enigma_resposta8 == 'a' ){
	    	                system("color 2F");
	                        printf("%s\n"," Acertou! Voc� � um G�nio. O homem deve esperar at� o sol se p�r para conseguir escapar pela primeira porta.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
		            if (enigma_d == 3){
	                    enigma_dificil_3();
	                    scanf("%s", &enigma_resposta9);
	                    if ( enigma_resposta9 == 'b' ){
	    	                system("color 2F");
	                        printf("%s\n","Acertou! Voc� � um G�nio. Pois os le�es que est�o tanto tempo sem comer est�o mortos.");	
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
	            }while(enigma != 4);
	        }
	        // Nivel SuperGenio 
	        if ( escolha == 4){
                //escolha dos enigmas de nivel  SuperGenio
                do{
		            escolha_enigma_super();
		            scanf("%d", & enigma_s);
		            system("pause");
		            system("cls");
		            //Enigma do Ratoullie
		            if (enigma_s == 1){
	                    enigma_super_1();
	                    scanf("%s", &enigma_resposta10);
	                    if ( enigma_resposta10 == 'a' ){
	    	                system("color 2F");
	                        printf("%s\n","Acertou! Voc� � um G�nio. Considerando que voc� trouxe apenas um rato e ele n�o se reproduz sozinho, continua tendo apenas um.");
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
		            //Enigma das Balas
		            if (enigma_s == 2){
	                    enigma_super_2();
	                    scanf("%s", &enigma_resposta11);
	                    if ( enigma_resposta11 == 'b' ){
	    	                system("color 2F");
	                        printf("%s\n","Acertou! Se a av� dividiu 20 balas entre as duas netas, cada neta recebeu 10 balas, ou seja, s�o dez para as duas (13h50).");
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
		            //Enigma do Viajante
		            if (enigma_s == 3){
	                    
	                    scanf("%s", &enigma_resposta12);
	                    if ( enigma_resposta12 == 'a' ){
	    	                system("color 2F");
	                        printf("%s\n","Acertou!Qual caminho � o certo para sua aldeia? Se o homem � nativo da aldeia da verdade, ele estaria sendo sincero, por outro lado, se ele estivesse mentindo,tamb�m apontaria para o mesmo caminho,j� que evitaria apontar o da aldeia da mentira.");
		                }else {
			                system("color 0C");
		                    printf("\nVoc� errou!\n");
		                }
		                printf("\n");
		                system("pause");
		            }
	            }while(enigma != 4);
            }
            //system("pause");
            //getch();
	        printf("\n");
            break;
	        // sobre o nosso projeto
	        case 2: 
	        sobre();	
	        system("pause");
            break;
        }
        gotoxy(10,20);
        printf( "Tecle <ENTER> para continuar.");
    }while( opcao!=3);
	system("pause") ; 
	return 0;
}
