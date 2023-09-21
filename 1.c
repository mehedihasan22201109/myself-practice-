#include <stdio.h>
#include <string.h>
int main ()
{
    char str []="mehedi hasan hridoy ";
    int length ;
    length=strlen(str);
    printf ("%d\n",length);
    strlwr (str);
    puts (str);
    strupr (str);
    puts (str);
}
