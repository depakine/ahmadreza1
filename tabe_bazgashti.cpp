#include <iostream>
using namespace std;


int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout <<  factorial(number);
    return 0;
}
