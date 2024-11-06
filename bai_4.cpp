
#include <iostream>
using namespace std;

void process (int number1, int number2)
{
    cout << "Tổng của 2 số là: " << number1 + number2 << "\n";
    cout << "Trung bình của 2 số là: " << (double)(number1 + number2)/2 << "\n";
}

int main()
{
    int a,b;
    cout << "Nhập vào 2 số nguyên từ bàn phím: ";
    cin >> a >> b;
    process(a,b);

    return 0;
}
