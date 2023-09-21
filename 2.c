#include <stdio.h>
#include <string.h>
int main ()
{
char str1[]="hello";
char str2 []="world";
char temp[10] = "";
strncpy (temp,str1,2);
puts (temp);
strncat(temp,str2,2);
puts (temp);
}
