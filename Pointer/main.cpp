#include <iostream>

using namespace std;
void basic_pointer();
void pointer_arithmetic_increment();
void pointer_arithmetic_compare();
void pointer_to_pointer();
int main()
{
//    basic_pointer();
//    pointer_arithmetic_increment();
    pointer_to_pointer();
    return 0;
}
void basic_pointer()
{
    int var = 20;
    int *ip = NULL;
    ip = &var;
    cout << "value of variable " << var << endl;
    cout << "Address stored in ip variable : " << ip << endl;
    cout << "value stored in ip variable : " << *ip << endl;
}
void pointer_arithmetic_increment()
{
    int Var[3] = {10,100,200};
    int *p = NULL;
    p = Var;
    for (int i = 0; i < 3; i++)
    {
        cout << "Address of var[" << i << "]: " << p << endl;;
        cout << "value of var[" << i << "]: " << *p << endl;
        p++;
    }
}
void pointer_arithmetic_compare()
{
    int Var[3] = {10,100,200};
    int *p = NULL;
    p = Var;
    int i =0;
    while(p <= &Var[2])
    {
        cout << "Address of var[" << i << "]: " << p << endl;
        cout << "value of var[" << i << "]: " << *p << endl;
        p++;
        i++;
    }
}
void pointer_to_pointer()
{
    int var;
    int *ptr = NULL;
    int **pptr = NULL;
    var = 3000;
    ptr = & var;
    pptr = &ptr;
    cout << "value of var : " << var << endl;
    cout << " value pointed by ptr : " << *ptr << endl;
    cout << "value pointed twice : " << ** pptr << endl;
}
