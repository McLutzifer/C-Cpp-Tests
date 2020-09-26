#include <stdio.h>


typedef struct _thing
{
    char *item; // standard C-way a pointer to a char (or string chars)
    struct _thing *next;  // members (in other lang "fields")
} THING;


int main(void)
{
    printf("%i\n", 9);
    return 0;
}

