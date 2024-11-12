#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string name;
    double price;

public:
    // Hàm khởi tạo
    Car(string n = "", double p = 0.0) : name(n), price(p) {}

    // Hàm nhập thông tin xe
    void input() {
        cout << "Ten xe: ";
        cin.ignore(); // Xóa ký tự newline còn lại trong bộ đệm
        getline(cin, name);
        cout << "Gia xe: ";
        cin >> price;
    }

    // Hàm lấy giá xe
    double getPrice() const {
        return price;
    }

    // Hàm lấy tên xe
    string getName() const {
        return name;
    }

    // Hàm hiển thị thông tin xe
    void display() const {
        cout << "Ten xe: " << name << ", Gia xe: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Nhap vao do dai mang xe: ";
    cin >> n;

    if (n <= 0) {
        cout << "Do dai mang phai lon hon 0." << endl;
        return 1;
    }

    Car* cars = new Car[n];

    // Nhap thong tin cho cac xe
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin cho xe " << (i + 1) << ":" << endl;
        cars[i].input();
    }

    // Tìm xe có giá đắt nhất
    Car mostExpensive = cars[0];
    for (int i = 1; i < n; ++i) {
        if (cars[i].getPrice() > mostExpensive.getPrice()) {
            mostExpensive = cars[i];
        }
    }

    // Hiển thị thông tin xe đắt nhất
    cout << "Xe co gia dat nhat:" << endl;
    mostExpensive.display();

    delete[] cars; // Giải phóng bộ nhớ đã cấp phát
    return 0;
}