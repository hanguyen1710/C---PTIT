#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Chọn một tùy chọn từ menu bên dưới:" << endl;
    cout << "1. Tùy chọn 1: In ra Hello World" << endl;
    cout << "2. Tùy chọn 2: Tính tổng 2 số" << endl;
    cout << "3. Tùy chọn 3: Tìm số lớn nhất trong 3 số " << endl;
    cout << "4. Thoát" << endl;

    while (true) {
        cout << "Nhập lựa chọn của bạn: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Hello World" << endl;
                break;
            case 2:
                cout << " Nhập 2 số nguyên: ";
                int number1, number2;
                cin >> number1 >> number2;
                cout << "Tổng của 2 số là: " << number1 + number2 << endl;
                break;
            case 3:
                cout << "Nhập 3 số nguyên: ";
                int num1,num2,num3;
                cin >> num1 >> num2 >> num3;
                cout << "Giá trị lớn nhất: " << max (max(num1,num2), num3) << endl;
                break;
            case 4:
                cout << "Thoát chương trình." << endl;
                break;
            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
        }
        if (choice == 4) {
            break;
        }
    }

    return 0;
}
