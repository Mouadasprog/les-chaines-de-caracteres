#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
        char a[10];
        char b[10];
  printf("Entrez un mot: ");
  scanf("%s",a);
  printf("Entrez un mot: ");
  scanf("%s",b);
  int length_b = strlen(a);
  int length_a = strlen(b);
  while(strlen(a) != strlen(b)){
    printf("Les deux mots ne sont pas du meme longueur\n");
    printf("Entrez un mot: ");
    scanf("%s",a);
    printf("Entrez un mot: ");
    scanf("%s",b);
  }
  int i = 0,x = 0;
  for(i = 0;i < strlen(a);i++){
    if(a[i] != b[i]){
      x++;
      printf("La position du difference est %d\n",i + 1);
    }
          }
  printf("la distance de hamming = %d\n",x);
  return 0;
}

