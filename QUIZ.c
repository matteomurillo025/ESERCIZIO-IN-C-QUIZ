#include <stdio.h>

int
main (){

  char x;

  printf ("a)Cominciare Partita    b)Uscire dal gioco\n");
  scanf ("%s", &x);

      if (x == 'a'){
    
          int f = 0;
          do{
    	  int r = 0;
    	  int i = 0;
    	  char y;
    
    	  printf
    	    ("NEW PLAYER JOINS THE BLATTLE!!!\nInserisci nome gocatore: ");
    	  scanf ("%s", &y);
    	  printf ("*************************************\n");
    	  printf ("Salve %s", &y);
    	  printf
    	    (", vuoi giocare a un gioco? \n\nTi faro' un quiz, e se risponderai giusto, bhe vivrai, altrimenti....\n\n");
    
    	  printf ("Cominciamo!!!\n");
    	  printf ("********************\n\n");
    
    	  printf("1 domanda: Cose' una memoria RAM?\n1)Random Array Memory\n2)Random Alocation Memory\n3)Random Acces Memory\nLa tua risposta e':    ");
    	  scanf("%d", &r);
    	  
    	  if (r == 3){i++;}
    	  else
    	    i--;
    
    	  printf ("\n********************\n");
    	  printf
    	    ("2 domanda: Chi e' l'hacker cattivo?\n1)White Hacker\n2)Black Hacker\n3)Red Hacker\nLa tua risposta e':    ");
    	    
    	  scanf ("%d", &r);
    	  if (r == 2){i++;}
    	  else
    	    i--;
    
    	  printf ("\n********************\n");
    	  printf("3 domanda: Cose' piu pesante?\n1)1kg di ferro\n2)1kg di piume\n3)nessuna delle 2 precedenti\nLa tua risposta e':    ");
    	  scanf ("%d", &r
    	  
    	  if (r == 3){i++;}
    	  else
    	    i--;
    
    	  printf ("hai ottenuto: %d", i);
    	  printf
    	    (" punti, bravo, sei il mio giocatore preferito.\n uscire?\n1_Yes    2_Again\n\n\n\n\n");
    	  scanf ("%d", &f);
    
    	} while (f == 2);
    
          printf ("grazie per aver giocato, spero rivederti presto!!!\n");
    }
  else
    printf ("grazie per aver giocato, spero rivederti presto!!!\n");


  return 0;
}
