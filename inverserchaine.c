#include <stdio.h>

void my_strrev(char *str)
{
  int i = 0;
  int temporaire;

  while(str[i] != '\0')
  {
    i++;
  }
  
  int j = i - 1; 
  i = 0;  

  while (i < j)
  {
    temporaire = str[i];
    str[i] = str[j];
    str[j] = temporaire;

    j--;
    i++;
  }
}


int main(void)
{
  char mot[] = "piscine";
  
  printf("%s\n", mot);

  my_strrev(mot);

  printf("%s\n", mot); 


  return 0;
}
