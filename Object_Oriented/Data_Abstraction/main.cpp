#include <iostream>

using namespace std;

class Adder
{
public :
    Adder(int i = 0);
    // interface to outside world
    void addNum(int number);
    int getTotal();
private:
    // hiden data
    int total;
};
int main()
{
    Adder a;
    a.addNum(10);
    a.addNum(15);
    a.addNum(20);
    std::cout << "Total : " << a.getTotal() << std::endl;
    return 0;
}
Adder::Adder(int i )
{
    this->total = i;
}
void Adder::addNum(int number)
{
    this->total += number;
}
int Adder::getTotal()
{
   return this->total;
}
