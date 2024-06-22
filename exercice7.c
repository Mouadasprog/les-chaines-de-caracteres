//Ecrire un programme qui lit deux chaines A et B sur le clavier et ajoute la chaine B a la fin de A sans utiliser la fonction strcat().
//Utiliser deux pointeurs PA et PB
#include <stdio.h>
#include <string.h>
int main(){
	char A[20];
	char B[10];
	for(int i = 0;i < 20;i++){
        A[i] = 0;
}
        for(int i = 0;i < 20;i++){
        B[i] = 0;
}
        printf("Please enter the first string: ");
	scanf("%s",A);
	printf("Please enter the second string: ");
        scanf("%s",B);
char *PA,*PB;
PA = A;
PB = B;
while(*PA != '\0'){
	PA++;
}
while(*PB != '\0'){
	*PA = *PB;
	PA++;
	PB++;
}
printf("%s",A);
return 0;
}
