#include <stdio.h>

int main(void)
{

    int k;
    k = 5;
    int* pk;
    pk = &k;

    printf("\n--------------------\n");
    printf("Pointer pk is %p\n", pk);
    printf("int k is %d\n", k);
    printf("int* pk is %d\n", *pk);

    int* pz;
    printf("Pointer pz is %p\n", pz);


    int i = 42; 
    int j = 2701;
    printf("i and j are %d and %d \n", i, j);
    
    int* p = &i;         // point to i
	printf("read i through the pointer %d\n",*p); // read i through the pointer
	*p = 21;         // set i through the pointer
	printf("see new value of i %d\n", i);  // see the new value of i

	p = &j;         // point to j
	*p = *p / 37;   // divide j through the pointer
	printf("see new value of j %d",j); // see the new value of j


    printf("\n---------------------\n\n");

    return 0;
}