#include <stdio.h>
int main ()
{
    int i,j,a,b;
    printf ("enter the starting  range of a ");
    scanf ("%d",&a);
    printf ("enter the ending range b");
    scanf("%d",&b);
    printf ("\n");
    for (i=a;i<=b;i++)
    {
        printf ("multipication table for %d:\n",i);
        for (j=1;j<=10;j++)
        {
            printf ("%d *%d =%d\n",i, j, i*j);
        }
        printf ("\n");
    }
    return 0;
}
