#include <iostream>

using namespace std;
void swap_by_value(int a, int b);
void swap_by_pointer(int *a, int *b);
void swap_by_reference(int &a, int &b);
int main()
{
    int a = 100;
    int b = 200;
    cout << "Initial value of a : " << a << endl;
    cout << "Initial value of b : " << b << endl;
    swap_by_value(a,b);
    cout << "After swap by value :" << endl;
    cout << " value of a : " << a << endl;
    cout << " value of b : " << b << endl;
    a = 100;
    b = 200;
    swap_by_pointer(&a,&b);
    cout << "After swap by pointer :" << endl;
    cout << " value of a : " << a << endl;
    cout << " value of b : " << b << endl;
    a = 100;
    b = 200;
    swap_by_reference(a,b);
    cout << "After swap by reference :" << endl;
    cout << " value of a : " << a << endl;
    cout << " value of b : " << b << endl;
    return 0;
}
void swap_by_value(int a, int b)
{
    int temp ;
    temp =b;
    b=a;
    a=temp;
}
void swap_by_pointer(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a ;
    *a =temp;
}
void swap_by_reference(int &a, int &b)
{
    int temp;
    temp = b;
    b = a ;
    a =temp;
}
