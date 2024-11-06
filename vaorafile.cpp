#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream of;
    fstream f;

    of.open("A.txt", ios::app);
    if (!of)
        cout << "No such file found"; // In thông báo nếu không thể mở tệp
    else {
        of << "- String";
        cout << "Data appended successfully\n";
        of.close();

        string word;
        while (f>> word) { // Bọc ting từ từ tập và gán vào biển word cout<<< word ""; // In từng từ ra màn hình
            cout << word;
        }
        f.close();
    }
    return 0;
 }