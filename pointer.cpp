#include <iostream>
using namespace std;

int main() {

    int ManU = 42;
    int *addressOfManU = &ManU;
    int *anotherAdressOfManU = NULL;
    anotherAdressOfManU = addressOfManU;
    
    *anotherAdressOfManU = 99;
    
    cout << ManU;

    return 0;
}
