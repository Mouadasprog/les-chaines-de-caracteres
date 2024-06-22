//Ecrire un programme qui saisir et affiche une chaine de caracteres
#include<stdio.h>
#include <string.h>
int main(){
        char string[20];
        printf("Please enter a string: ");
        gets(string);
        puts(string);
        return 0;
}   
