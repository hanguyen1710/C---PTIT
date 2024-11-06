#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Nhập một số nguyên: ";
    cin >> number;

    int reversedNumber = 0;
    int originalNumber = number;

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    if (originalNumber < 0) {
        reversedNumber = -reversedNumber;
    }

    cout << "Số đảo ngược là: " << reversedNumber << endl;

    return 0;
}
