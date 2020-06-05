#include <iostream>
#include    <cmath>
#include    <ctime>
#include    <cstdlib>
using namespace std;

int main()
{
    int i = -1000;
    short s = 10;
    long l = 100000;
    float f = 230.47;
    double d = 200.374;

    cout <<"short s :" << s << endl;
    cout << "int i :" << i << endl;
    cout << "long l :" << l << endl;
    cout << "float f :" << f << endl;
    cout << "double d   :" << d <<endl;

    cout << "sin(d) :"  << sin(d)  << endl;
    cout << "abs(i) :"  << abs(i)   << endl;
    cout << "floor(d) :" << floor(d)    << endl;
    cout << "sqrt(f)    :" << sqrt(f)   << endl;
    cout <<"pow(d,2)    :"  << pow(d,2) << endl;

    int m,n;
    srand((unsigned)time(NULL));
    for (m = 0; m < 10; m++)
    {
        n = rand();
        cout << "random number :" << n << endl;
    }
    return 0;
}
