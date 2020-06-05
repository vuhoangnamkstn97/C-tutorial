#include <iostream>

using namespace std;

void nest_loop_prime_find();
void continue_example(int low, int high, int except);
int main()
{
    continue_example(10,20,15);
    //nest_loop_prime_find();
    return 0;
}
void nest_loop_prime_find()
{
    for ( int i = 2;i <= 99;i++ )
    {
        for ( int j=2; j<=i;j++)
        {
            if(i%j==0) break;
            if(j==i-1)
            {
                std::cout << i << " is a prime" << std::endl;
                break;
            }
        }
    }
}
void continue_example(int low, int high, int except)
{
    if(except<low||except>high)
    {
        cout << "Not true condition" << endl;
    }
    else
    {
        int a = low-1;
        do
        {
                    a++;
                    if( a == except)
                    {
                        continue;
                     }
                    else
                        std::cout << a << std::endl;
        }
        while(a<high);

    }

}
