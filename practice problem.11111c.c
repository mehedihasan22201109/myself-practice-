#include <stdio.h>
int main ()
{
    int n,i,j;
    printf ("enter the integer:");
    scanf ("%d",&n);
    int row,cell;
    for (row=1;row<=n;row++){
            for (cell=1;cell<=row;cell++)
            {

        printf ("*");
            }
            printf ("\n");
    }

return 0;
}
