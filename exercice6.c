//Ecrire un programme qui verifie si une chaine est palindrome ou non
#include <stdio.h>
#include <string.h>
int main(){
char a[10];
char b[10];
printf("PLease enter the string that you want know if it is Palindrome or not: ");
scanf("%s",a);
int length = strlen(a);
for(int i = 0;i < length;i++){
   b[i] = a[length - 1 - i]; 
}

b[length] = '\0';

int Pnotif = 0; 
for(int i = 0;i < length;i++){
    if(a[i] != b[i]){
        Pnotif = 1;
        break;
}
}
if(Pnotif == 1){
    printf("%s is not palindrome\n",a);
}
else{
    printf("%s is palindrome\n",a);
}

printf("\n");
    return 0;
}





 