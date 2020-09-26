#include <iostream> //standard stream objects that input and output data
// # targets preprocessor, #include tells pre-processor to include <iostream> header
using namespace std; // using standard(std) namespace

int main() //program execution begins with the main function, int main()
{
	cout << "Hello, World!"<<endl; //cout to terminal
	cout<< "I love \nprogramming!\n"; //endl = linebreak = \n

	int myVariable = 10;
	cout << myVariable << endl;


	int x;
	int y = 42;

	x = 10;
	y = 3;

	cout << x << " " << y << endl;

	int a, b;
    int sum;
    cout << "Enter a number \n";
    cin >> a;
    cout << "Enter another number \n";
    cin >> b;
    sum = a + b;
    cout << "Sum is: " << sum << endl;

    // #### PREFIX INCREMENT
    int u = 5;
    int v = ++u;
    //u is 6, v is 6
    cout << u << " " << v << endl;

    // #### POSTFIX INCREMENT
    int i = 5;
    int j = i++;
    // i is 6, j is 5
    cout << i << " " << j << endl;


	return 0; // terminates the main() function and causes it to return the value 0 to the calling process
}