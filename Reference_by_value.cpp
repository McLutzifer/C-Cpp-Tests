#include <iostream>
#include <string>
using namespace std;

void printReceipt (string, float&);

int main()
{
    float grandTotal = 0;
    string companyName = "Company&CoKg";

    cout << "first of all: \n" << companyName << endl << grandTotal << endl;

    printReceipt(companyName, grandTotal);
    cout << "Final: \n";
    cout << companyName << endl;
    cout << grandTotal << endl;
}

void printReceipt (string companyName, float& total)
{
    cout << "inside the function: " << endl;
    companyName = "Lutz";
    total = 17.99;
    
    cout << companyName << endl << total << endl;
}
