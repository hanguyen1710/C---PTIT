#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Nhập ba số nguyên cách nhau bởi khoảng trắng: ";

    // Kiểm tra nếu nhập đủ ba số nguyên
    if (!(cin >> a >> b >> c)) {
        cout << "Lỗi: Bạn cần phải nhập đủ 3 số nguyên." << endl;
    } else {
        // Tìm giá trị lớn nhất trong ba số đã nhập
        int maxVal = a;
        if (b > maxVal) {
            maxVal = b;
        }
        if (c > maxVal) {
            maxVal = c;
        }

        cout << "Giá trị lớn nhất trong ba số là: " << maxVal << endl;
    }

    return 0;
}
