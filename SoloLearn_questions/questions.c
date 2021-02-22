#include <stdio.h>
#include <string.h>

int main(void)
{
    //int n[5] = {4,6,8};
    //printf("%d", n[4]);

    char p[20];
    char *s = "string";
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        p[i] = s[length - i];
    }
    printf("%s",p);

    return 0;
}
