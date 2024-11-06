#include <iostream>
#include <sstream>
#include <stdexcept>
using namespace std;

int main() {
    int number1, number2, number3;
    string checkInput;

    try {
        cout << "Nhập ba số nguyên: ";
        getline(cin, checkInput);  // Đọc toàn bộ dòng đầu vào
        // Sử dụng istringstream để phân tích cú pháp dòng đầu vào
        istringstream iss(checkInput);

        // Kiểm tra xem có đúng 3 số nguyên hay không
        if (!(iss >> number1 >> number2 >> number3)) {
            throw runtime_error("Lỗi: Đầu vào yêu cầu 3 số nguyên.");
        }
        // Kiểm tra nếu đầu vào không phải số
        int extra;
        if (iss >> extra) {
            throw runtime_error("Lỗi: Đầu vào chỉ được nhập 3 số nguyên.");
        }
        int maxVal = max(number1, number2);
        cout << "Giá trị lớn nhất trong ba số là: " << max(maxVal,number3) << endl;
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
