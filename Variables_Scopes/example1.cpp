#include <iostream>

using namespace std;
//global declaration
int g = 20;
int c = 15;
int main()
{
    //local decleration
    int g = 10;
    int a,b;
    a = 20;
    b = 17;
    cout << g << endl;
    c= a+b;
    cout << "c = " << c << endl;
    return 0;
}
