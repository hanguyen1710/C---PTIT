#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    int wordCount = 0, charCount = 0;

    cout << "Nhập một câu: ";
    getline(cin, sentence);

    for (char c : sentence) {
        if (c != ' ') {
            charCount++;
        }
    }

    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        wordCount++;
    }

    cout << "Số từ trong câu: " << wordCount << endl;
    cout << "Số ký tự trong câu : " << charCount << endl;

    return 0;
}
