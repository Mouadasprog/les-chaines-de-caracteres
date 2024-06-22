//Ecrire un programme contenat une fonction qui supprime toutes les occurences d'un caracteres dans une chaine
#include <stdio.h>
#include <string.h>
void delete(char str[10]){
        printf("Please enter a string: ");
        scanf("%s",str);
        char L[10];
        int length = strlen(str);
printf("Please enter the char that you would to delete it: ");
getchar();
char char_to_delete = getchar();
int i = 0;
int n = 0;
        while(i < length){
                if(str[i] != char_to_delete){
                L[n] = str[i];
	        n++;
		}	
                i++;
        }
        printf("The string after deleting the occurences '%c' is %s\n",char_to_delete,L);
}
int main(void){
        char str[10];
        delete(str);
        return 0;
}
