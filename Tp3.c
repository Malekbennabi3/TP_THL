#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

char M[N]="",symb_cour;
int i, n, accepte, stop;

void A(){
	if (symb_cour=='b') {  /*la regle A-->bA*/
	
 if (i<n){ /* la fin du mot n`est pas atteinte*/ 
 symb_cour = M[i++]; /*passer au symbole suivant*/
 A();  } /*fonction A*/
 
 else accepte = 0; } /* le mot est refuse*/
 
 else if (symb_cour=='c'){ /*la regle A-->cA*/
 if (i<n){ 
 symb_cour = M[i++];
 A();  }
 else accepte = 0; }
 
 else if (symb_cour=='d') { /* la regle  A-->d*/
 if(i==n) accepte = 1;
 else accepte = 0; 
 }
 
else accepte = 0; 
}





void S() {
 if (symb_cour=='a') {  /*la regle S-->aA*/
 
 if (i<n){ 
 symb_cour = M[i++];
 A();  }
 else accepte = 0; }
 
else accepte = 0; 
}


int main(int argc, char *argv[]) {

 do {
 printf("\n");
 printf("donner un mot a tester (/ pour terminer) : ");
 scanf("%s",&M);
 stop = strcmp(M,"/");

 if (stop!=0) {
 n = strlen(M);
 i = 0;
 symb_cour = M[i++];
 S();

 if (accepte)
 printf("le mot appartient au langage \n");
 else
 printf("le mot n`appartient pas au langage \n");}
} 
 while (stop!=0);
}
