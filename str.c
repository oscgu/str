#include <string.h>
#include <stdio.h>

int
strnjoin(const char *first, const char *sec, char *dest, int destsize)
{
  int firstlen = strlen(first);
  int seclen = strlen(sec);
  if (firstlen + seclen + 1 > destsize)
  {
    fprintf(stderr, "Dest must hold atleast '%d' chars", firstlen +  seclen + 1);
    return -1;
  }

  strncpy(dest, first, firstlen);
  strncat(dest, sec, seclen);
  dest[firstlen + seclen] = '\0';

  return 1;
}

void
strrpl(const char *src, const char *old, const char *new, char *res, int resSize)
{
    strcpy(res, src);
    char *pos = strstr(res, old);
    int i;
    for (i = 0; i < strlen(res); i++)
    {
        pos[i] = new[i];
    }
    
}

