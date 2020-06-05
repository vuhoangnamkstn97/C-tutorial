#include <iostream>
#include <cstring>
using namespace std;
typedef struct
{
    char title[50];
    char author[50];
    char subject[50];
    int id;

}Books;
void printBook(Books );

int main()
{

    Books Book1;
    Books Book2;
    strcpy(Book1.title,"Learn C++ programming");
    strcpy(Book1.author,"Chand Miyan");
    strcpy(Book1.subject,"C++ programming");
    Book1.id = 245621;

    strcpy(Book2.title,"Telecom Billing");
    strcpy(Book2.author,"Yakit Singha");
    strcpy(Book2.subject,"Telecom");
    Book2.id = 174520;

    printBook(Book1);
    printBook(Book2);
    return 0;
}
void printBook(Books Book)
{
    std::cout << "title of book : " <<  Book.title << endl;
    std::cout << "Author of book : " <<  Book.author << endl;
    std::cout << "Subject of book : " <<  Book.subject << endl;
    std::cout << "ID of book : " <<  Book.id << endl;
}
