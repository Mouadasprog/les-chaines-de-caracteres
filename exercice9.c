//Ecrire un programme qui permet d'afficher des caracteres precise
#include <stdio.h>
int main(void){
	int indice;
	char string[100];
	printf("Please enter the string: ");
	scanf("%s",string);
	printf("Please enter the indice that you would hide the string: ");
	scanf("%d",&indice);
	char *Ptr;
	Ptr = string;
	printf("%s\n",Ptr + indice);

	return 0;
}
