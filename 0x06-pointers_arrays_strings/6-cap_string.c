#include "main.h"

/**
* cap_string - captitalizes the words of string
* @s: string
* Return: x
*/

char *cap_string(char *x)
{
x = "Victor, is ; in learn programming africa"
    char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?' '"', '(', ')', '{', '}' };
  int len =13;
  int a = 0, i;

  while (x[a])
    {
     i = 0;
     {
       if ((a == 0 || s[a-1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
	 s[a] = s[a] - 32;
       i++;
	 }
     a++;
    }
  return (x);
}
