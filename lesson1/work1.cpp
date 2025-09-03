#include <iostream>

int main(void) 
{
    using namespace std;
    //using std::cin;
    //using std::cout;
    //using std::endl;

    int carrots;//胡萝卜
  
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}