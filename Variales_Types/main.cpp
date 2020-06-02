#include <iostream>

using namespace std;
//variable declarion
extern int a,b;
extern int c;
extern float f;
int main()
{
 // variable definition
    int a,b;
    int c;
    float f;
    a = 10;
    b  = 20;
    c   = a+b;
    cout << c << endl;
    f   = 70/3.0;
    cout << f << endl;
    return 0;
}
