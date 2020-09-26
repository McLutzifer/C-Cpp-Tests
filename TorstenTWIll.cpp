#include <iostream>
#include <string>

using namespace std;

void printBin(int x) {
    while (x > 0) {
        int a = x/2;
        int b = x%2;
        cout << x << " /2 = " << a << ", Rest " << b << '\n';
        x = a;
    }
}

int main() {

    for (int n = 0; n < 10; ++n) {
        cout << -2*n*n + 13*n -4 << " ";
    }

    string vor = "Hans";
    string nach = "Huber";

    string name = vor + " " + nach;

    cout << name << endl;


    // bitweise Arithmetik
    int a = 41;
    int b = a & 15;   // 9
    // 41 ist binär 101001

    // printBin(412);

    int bool1 = true;
    int bool2 = false;

    cout << bool1 << endl << bool2 << endl;

} // end main