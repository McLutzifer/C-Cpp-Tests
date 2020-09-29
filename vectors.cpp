#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;

    for(int k = 1; k <= 5; k++)
        v.push_back(k);
    
    cout << "vector size: "<< v.size() << endl;
    
    v.clear();
    cout << "v.empty() checks if containeris empty: " << v.empty() << endl;
    for(int j = 6; j <= 10; j++)
        v.push_back(j);    

    vector <int> :: iterator i;
    for(i = v.begin(); i != v.end(); i++)
        cout << *i << ' ';
        
    cout << "\n";
        
    cout << "v.front(): " << v.front() << endl;
    cout << "v.back(): " << v.back() << endl;
    cout << "v[2]: " << v[2] << endl;

    return 0;
}
