#include <stdio.h>

int my_strlen(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
    i++;
  }
  
  
  return i;
}

int main(void)
{
  char mot[] = "Bonjour"; 

  int longueur = my_strlen(mot);

  printf("Il y a %d caractères\n", longueur);

  return 0;
}
