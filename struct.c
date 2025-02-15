#include <iostream>

using namespace std;

struct BOOK {
    string title;
    int countpage;
    string name;
};

BOOK book;

int main() {
    book.countpage = 134;
    book.name = "math";
    book.title = "best training for brain";

    cout << "Name: " << book.name << endl;
    cout << "Title: " << book.title << endl;
    cout << "Count of Pages: " << book.countpage << endl;

    return 0;
}
