#include <stdio.h>
#include <string.h>

int calcul_string(char str1[], char str2[]);

int main(void)
{
  
  char mot1[] = "Bonjour";
  char mot2[] = "Bonjoura";


  if (calcul_string(mot1, mot2) == 1)
    printf("1\n");
  else 
    printf("0\n");

  return 0;
} 

int calcul_string(char str1[], char str2[])
{
  
  int i;

  for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
  {
    if (str1[i] != str2[i])
      return 0;
  }
  return 1;
}

  
