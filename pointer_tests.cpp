#include <iostream>
#include <string>

using namespace std;

int main() {

    int digit = 42;
    cout << "The adress of digit is " << &digit << "\n";    // 0x7fffd0ad4b3c

    // WILD POINTER
    char *alphabetAdress; // uninitialised or wild pointer
    char alphabet = 'a';
    alphabetAdress = &alphabet; // now, not a wild pointer

    cout << *alphabetAdress << endl;    //prints 'a'

    /* wild pointers store garbage value of a byte that we don't know is reserved or not.
    Suppose we dereference a wild pointer and assign a value to the memory adress it is pointing at. This will lead to unexpected behaviour since we will write data at a memory block that may be free or reserved*/

    // NULL POINTER
    char *alphaAdress = NULL;  // Null pointer

    /* To make sure we don't have a wild pointer, we can initialize a pointer with a NULL value*/

    // VOID POINTER
    void *pointer = NULL;
    int number = 54;
    //(int *)pointer = &number;


} //end main