#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
#define NMots 200;
char M[N]="";
int i, nm, NmMots = NMots;


void A(char M[]){
    char M1[N]="";
    int n,r;
    n=strlen(M);
    r=rand()%3;
    strcpy(M1,M);

 switch (r) {
 case 0 : /* application de la 1ère règle A -> bA :*/
 M1[n] = 'b'; /* concatèner M1 avec 'b' */
 M1[n+1] = '\0';
 A(M1); /* fonction A*/
 break; 
 
 case 1 : /* application de la 2 ème règle A -> cA :*/
 M1[n] = 'c'; /* concatèner M1 avec 'c' */
 M1[n+1] = '\0';
 A(M1); /* fonction A*/
 break; 
 
 case 2 : /* application de la 3ème règle A -> d :*/
 if (i<nm) {
 M1[n] = 'd'; /* concatèner M1 avec 'd' */
 M1[n+1] = '\0';
 
printf(" %s \n",M1);}  /* affichage du mot */ 

 break;
 }
 
}


void S(char M[]) { /* non terminal S */
 char M1[N]="";
 int n;
 n = strlen(M);
 strcpy(M1,M); /* recopier M dans M1*/

 M1[n] = 'a'; /* concatèner M1 avec 'a' */
 M1[n+1] = '\0';
 A(M1); /* fonction A */
  
 
} 

int main(int argc, char *argv[]) {

 do {
 printf(" nombre de mots a generer : ");
 scanf("%d",&nm); }
  while ((nm<1)||(nm>NmMots));
  
 printf("mots du langage : \n");
 i = 0;
 
 while (i<nm) {
 strcpy(M,"");
 
 S(M);
 i++; }
 
 printf("\n");
}
