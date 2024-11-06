
#include <iostream>
using namespace std;

void process (int number1, int number2)
{
  cout << "Tổng của 2 số là: " << number1 + number2 << "\n";
  cout << "Hiệu của 2 số là: " << number1 - number2 << "\n";
  cout << "Tích của 2 số là: " << number1 * number2 <<"\n";
  cout << "Thương của 2 số là: " << number1 / number2 << "\n";
}

int main()
{
  int a,b;
  a = 2;
  b = 3;
  process(a,b);

  return 0;
}
