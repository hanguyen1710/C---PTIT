#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Nhập số: ";
        cin >> n;

        if (n < 0) {
            cout << "Chương trình kết thúc do bạn đã nhập số âm." << endl;
            break;
        }

        cout << "Số vừa nhập: " << n << endl;
    }

    return 0;
}
