#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void testparentheses(char* arr,int m){
	 
    int x=0,i=0,a=0;

    for(i=0;i<=m;i++){

        if(arr[i]=='(' && x==0) a++;
            
            else if(arr[i]==')' && a==0){ printf("Invalid"); x=1;}
           else if(arr[i]==')') a--;
            
        }
    
    if (a==0 && x==0){
        printf("Valid");
    }

}
int main(int argc, char *argv[]) {
	
    char arr[100000];
	int m=0;

    printf("Enter brackets: ");
    scanf("%s",arr);
    puts(arr);
    m=strlen(arr);

    testparentheses(arr,m);
    
    
}