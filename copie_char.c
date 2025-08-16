#include <stdio.h>
#include <string.h>

void copierlechar(char phrase[], char destination[]);

int main(void)
{
  
  char mot1 [] = "Bonjour";
  char mot2 [26];

  copierlechar(mot1, mot2);
  
  printf("%s\n", mot2);

  return 0;
}


void copierlechar(char phrase[], char destination[])
{
  int i;

  for(i = 0; phrase[i] != '\0'; i++)
  {
    destination[i] = phrase[i];
  }
  
  destination[i] = '\0';
}

