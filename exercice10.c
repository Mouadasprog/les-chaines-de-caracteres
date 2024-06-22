//Un crime a ete commis dans un centre commerciale . Le detective a recuoere une partie du brin d'adn  du coupable.
//Le detective possede egelement des brins d'adn de quatre suspects qui se touvaient sur le lieu du crime.
//Ecrire un programme qui permet de trouver le coupable
#include <stdio.h>
#include <string.h>
int main(void){
       char ADN_COUPABLE[] = "CATA";
       char ADN_ALI[] = "CCTTGCAGTGCTAGCATGGTCATGCTGCTTAAGGGTTGTGXGS";
       char ADN_ANAS[] = "CCTGCATTGTGGCAAGTCGACTAGTTGGCCTGGCAAAGTCGA";
       char ADN_MEHDI[] = "CAGTFCATAAGAACCGTTGCTGGGTGCCCAATTAACCGCA";
       char ADN_SARA[] = "GGGTTAAACCCTTAGATGGTGTTAACTTGGTGACATGTAACG";

     if(strstr(ADN_ALI,ADN_COUPABLE) != NULL){

	     printf("ALI is the one who make the crime\n");

     }
     else if(strstr(ADN_ANAS,ADN_COUPABLE)!= NULL){

             printf("ANAS is the one who make the crime\n");
}
      else if(strstr(ADN_MEHDI,ADN_COUPABLE)!= NULL){

             printf("MEHDI is the one who make the crime\n");

     }

      else if(strstr(ADN_SARA,ADN_COUPABLE)!= NULL){
               
	     printf("SARA is the one who make the crime\n");

     }
return 0;
}
