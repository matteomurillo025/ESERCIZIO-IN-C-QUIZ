#include <stdio.h>

void print_menu();
void gioca_partita();
int i = 0;

int main(){
	
char scelta;

do{
	print_menu();
	scanf(" %c", &scelta);

	if (scelta == 'a' || scelta == 'A'){
			gioca_partita();}
			
		}while(scelta != 'b' && scelta != 'B');
		

		printf("Grazie per aver giocato\n");
	//printf("\nERRORE, INSERISCI UN CARATTERE CORRETTO\n");
return 0;}


void print_menu() {

	printf("\nStart Menu:\nA >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
}

void gioca_partita() {
	

	char nome[10];
	char r;

	printf("NEW PLAYER JOINS THE BLATTLE!!!\nInserisci nome gocatore non piu lungo di 10 caratteri: ");
    	  scanf("%s", &nome);
    	  printf("*************************************\n");
    	  printf("Salve %s", &nome);
    	  printf(", vuoi giocare a un gioco? \n\nTi faro' un quiz, e se risponderai giusto, bhe vivrai, altrimenti....\n\n");
    
    	  printf("Cominciamo!!!\n");
    	  
    do{
    	  printf("********************\n\n");
    	  printf("1 domanda: Cose' una memoria RAM?\nA)Random Array Memory\nB)Random Alocation Memory\nC)Random Acces Memory\nLa tua risposta e':    ");
    	  scanf("%s", &r);
    	  
	}while(r != 'A' && r != 'B' && r != 'C' && r != 'a' && r != 'b' && r != 'c');
    	  if (r == 'C' || r == 'c'){i++;}
    	  
    printf ("hai ottenuto: %d", i);
    
     do{
    	  printf("\n********************\n");
    	  printf("2 domanda: Chi e' l'hacker cattivo?\nA)White Hacker\nB)Black Hacker\nC)Red Hacker\nLa tua risposta e':    ");
    	  scanf ("%s", &r);
    }while(r != 'A' && r != 'B' && r != 'C' && r != 'a' && r != 'b' && r != 'c');
    	  if (r == 'B' || r== 'b'){i++;}
    	  
    printf ("hai ottenuto: %d", i);
    
     do{
    	  printf ("\n********************\n");
    	  printf("3 domanda: Cose' piu pesante?\nA)1kg di ferro\nB)1kg di piume\nC)nessuna delle 2 precedenti\nLa tua risposta e':    ");
    	  scanf ("%s", &r);
    }while(r != 'A' && r != 'B' && r != 'C' && r != 'a' && r != 'b' && r != 'c');
    	  if (r == 'C' || r == 'c'){i++;}
    	    
    
    printf ("hai ottenuto: %d", i);
    	  printf(" punti, bravo, sei il mio giocatore preferito.\n\nGrazie per aver giocato, spero rivederti presto!!!\n");

}
