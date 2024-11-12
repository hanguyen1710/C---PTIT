#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
};

class Circle {
private:
    Point center;  // Tâm đường tròn
    double radius; // Bán kính

public:
    // Hàm khởi tạo
    Circle(Point c, double r) : center(c), radius(r) {}

    // Phương thức tính chu vi
    double circumference() const {
        return 2 * M_PI * radius;
    }

    // Phương thức tính diện tích
    double area() const {
        return M_PI * radius * radius;
    }

    // Phương thức hiển thị thông tin đường tròn
    void display() const {
        cout << "Tam duong tron: (" << center.getX() << ", " << center.getY() << ")\n";
        cout << "Ban kinh: " << radius << endl;
        cout << "Chu vi: " << circumference() << endl;
        cout << "Dien tich: " << area() << endl;
    }
};

int main() {
    double x, y, radius;

    // Nhập thông tin cho đường tròn
    cout << "Nhap toa do tam duong tron (x y): ";
    cin >> x >> y;
    cout << "Nhap ban kinh duong tron: ";
    cin >> radius;

    // Tạo đối tượng Circle
    Circle circle(Point(x, y), radius);

    // Hiển thị thông tin về đường tròn
    circle.display();

    return 0;
}