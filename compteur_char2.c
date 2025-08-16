#include <stdio.h>

int longueur(char str[]);

int main(void)
{
  char mot1[] = "Bonjour";

  int donnee = longueur(mot1);

  printf("Il y a %d caractères dans le mot\n", donnee);

  return 0;
}


int longueur(char str [])
{
  int i;
  int resultat = 0;

  for (i = 0; str[i] != '\0'; i++)
  {
    resultat++;    
  }
  return resultat;
} 
