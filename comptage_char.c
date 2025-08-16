#include <stdio.h>
#include <string.h>

int compteur_caractere(char str[]);

int main(void)
{
  int affichage_phrase;
  int affichage_phrase2;   

  char mot1[] = "Bonjour "; 
  char mot2[] = "tout le monde";



  affichage_phrase = compteur_caractere(mot1);

  affichage_phrase2 = compteur_caractere(mot2); 
 
  printf("%d %d\n", affichage_phrase, affichage_phrase2);

  
  return 0;
}

int compteur_caractere(char str[])
{
  int resultat = 0;
  int i;


  for(i = 0; str[i] != '\0'; i++)
  {
    str[i] = resultat;
    resultat++;
  }
  
  return resultat;
}
