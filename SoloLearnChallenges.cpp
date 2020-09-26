#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include <iterator>
//#include <algorithm>

using namespace std;

int main()
{
    string equations;
    //getline(cin, equations);
    /*
    sample input:
    15
    (2+100) (5*3) (14+1)
    sample output:
    index 1
    */

    //  * 42  / 47  + 43 - 45 

    string text2 = "Let me split this into words";
    string text = "(2+100) (5*3) (14+1)";
    
    istringstream iss(text);
    vector<string> results(istream_iterator<string>{iss}, istream_iterator<string>());

    for (string x : results)
    {
        cout << x << endl;
    }


    return 0;
}