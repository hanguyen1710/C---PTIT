#include <iostream>
using namespace std;

int main() {
    double principal, rate, interest;
    int years;

    cout << "Nhập số tiền gửi ban đầu (VNĐ): ";
    cin >> principal;

    cout << "Nhập lãi suất hàng năm (%): ";
    cin >> rate;

    cout << "Nhập số năm gửi: ";
    cin >> years;


    interest = principal * (rate / 100) * years;

    cout << "Số tiền lãi ngân hàng phải trả sau " << years << " năm là: " << interest << " VNĐ" << endl;

    return 0;
}
