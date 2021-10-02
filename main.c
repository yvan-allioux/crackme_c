#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int mdp = 0; // On initialise la variable à 0.
  
  printf("mot de pass ");
  scanf("%d", &mdp); // On demande d'entrer l'âge avec scanf
  if(mdp==7){
    printf("ok");
  }else{
  printf("pas ok");
  }
  //scanf("%d", &mdp);
       
  return 0;
}