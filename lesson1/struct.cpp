#include <iostream>
#include <string>

struct notes
{
    std::string title;
    char name;
    int pages;
    int price;

};

int main()
{
    using namespace std;

    notes book1;
    book1.title = "C++ Primer Plus";
    book1.name = 'A';
    book1.pages = 100;
    book1.price = 20;

    notes book2 =
    {
        "C++ Primer Plus 2nd Edition",
        'B',
        200,
        30
    };

    cout << "book1's name: " << book1.name << endl;
    cout << "book1's pages: " << book1.pages << endl;
    cout << "BOOK AandB , price is : " << book1.price + book2.price << endl;

    return 0;

}