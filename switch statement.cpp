#include <iostream>
using namespace std;
// int num = 1;

// int main() {
//   switch (num) {
//   case 1:
//     cout << "First" << endl;
//       break;
//   case 2:
//     cout << "Second" << endl;
//       break;
//   }
// }

// Switch has flow such that if any case matches, then this case's block come
// into flow and if the break statement is not there to indicate the end of this
// case, every case below this case would come into flow, until another break.
// So, as you can see there seems to be no use of continue here.//

int a, b;
char c;
int result;

int main() {
  cout << "Enter value of a:";
  cin >> a;
  cout << "Enter value of b:";
  cin >> b;
  cout << "Enter opertaor:";
  cin >> c;

  switch (c) {
  case '*':
    result = a * b;
    cout << "result=" << result;
    break;
  case '+':
    result = a + b;
    cout << "result=" << result;
    break;
  case '/':
    result = a / b;
    cout << "result=" << result;
    break;
  case '-':
    result = a - b;
    cout << "result=" << result;
    break;
  case '%':
    result=a%b;
    cout << "result=" << result;
    break;
  default:
    cout<<"Exit"<<endl;
  }
}