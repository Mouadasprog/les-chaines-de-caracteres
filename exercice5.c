//Ecrire un programme qui faire l'inverse d'une chaine de caractere
#include <stdio.h>
#include <string.h>
int main(){

char a[10];
char b[10];
printf("PLease enter the string that you want to reverse: ");
scanf("%s",a);
int length = strlen(a);
for(int i = 0;i < length;i++){
   b[i] = a[length - 1 - i]; 
}

b[length] = '\0';

printf(" Reversed string is %s\n",b);

printf("\n");
    return 0;
}