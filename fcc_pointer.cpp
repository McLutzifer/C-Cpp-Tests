#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;


    cout << &age << endl;  // adress
    cout << pAge << endl;  // adress
    cout << *pAge << endl;  // 19

    return 0;
}