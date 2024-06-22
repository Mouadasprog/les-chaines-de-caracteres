//Ecrire un programme qui trouve la longueur d'une chaine de caracteres sans utiliser strlen()
#include <stdio.h>
#include <string.h>
int main(){
	char a[20];
	printf("PLease enter a string: ");
	gets(a);
	int x = 0;
	for(int i = 0;i < strlen(a);i++){
		if(a[i] != '\0'){
			x++;
		}
	}
printf("The string length equal: %d\n",x);
return 0;
}
