#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Nhập số nguyên :";
    cin >> number;
    cout << "Bội số của " << number << " với các số từ 1 đến 15 là: "<< endl;
    for (int i=1; i<=15; i++)
    {
        cout << number * i << endl;
    }
    return 0;
}
