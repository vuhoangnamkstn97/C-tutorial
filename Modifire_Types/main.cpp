#include <iostream>

using namespace std;

int main()
{
    short int i;
    short unsigned int j;
    j = 50000;
    cout << j << endl;
    i =j ;
    cout << i << endl;
    i =i/2;
    cout << i << endl;
    i = 50000/2;
    cout << i << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(unsigned long int) << endl;
    cout << sizeof(unsigned short int) << endl;
    return 0;
}
