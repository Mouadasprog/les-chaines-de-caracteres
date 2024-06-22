#include <stdio.h>
#include <string.h>
int main(){
char a[10];
int count[256] = {0};
char Maxchar;
int Max = 0;

printf("PLease enter a string: ");
scanf("%s",a);

for(int i = 0;i < strlen(a);i++){
    count[(int)a[i]]++;
}

for(int i = 0;i < 256;i++){
   if(count[i] > Max){
    Max = count[i];
    Maxchar = (char)i;
   }
}

printf("The most character repeted is '%c' with %d occurences\n",Maxchar,Max);

return 0;

}