#include <stdio.h>
#include <string.h>

int compteur_char(char str1[], char str2[]);

int main(void)
{
  char mot1[] = "eau";
  char mot2[] = "dents";

  
  if(compteur_char(mot1, mot2))
    printf("Les deux mots ont le même nombre de caractères\n");
  else
    printf("Les deux mots n'ont pas le même nombre de caractères\n");

  return 0;
} 



int compteur_char(char str1[], char str2[])
{
  
  int i;

  for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
  {
      
  }

  if(str1[i] == '\0' && str2[i] == '\0')
    return 1;

  return 0;
}

