#include <stdio.h>
#include <string.h>

int loopy(int);

int main(void)
{
    //int n[5] = {4,6,8};
    //printf("%d", n[4]);

    /*
    char p[20];
    char *s = "string";
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        p[i] = s[length - i];
    }
    printf("%s",p);
    */

   loopy(5);

    return 0;
}

int loopy (int i)
{
    if (i==0)
    {
        printf("%i", i);
    }   
    else
    {
        loopy(i - 1);
        printf("%d", i);
    }
}