#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
#define NMots 200;
char M[N]="";
int i, nm, NmMots = NMots;

void S(char M[]) { 
 char M1[N]="";
 int n,r;
 n = strlen(M);
 r = rand()%2; 
 strcpy(M1,M); 
 
 switch (r) {
 case 0 : 
 M1[n] = 'a'; 
 M1[n+1] = '\0';
 S(M1); 
 break; 
 
 case 1 : 
 if (i<nm) {
 M1[n] = 'b'; 
 M1[n+1] = '\0';
printf(" %s \n",M1); 
}
 break;}
 
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
