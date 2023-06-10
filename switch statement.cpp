#include <iostream>
using namespace std;
int num = 1;

int main() {
  switch (num) {
  case 1:
    cout << "First" << endl;
      break;
  case 2:
    cout << "Second" << endl;
      break;
  }
}

// Switch has flow such that if any case matches, then this case's block come
// into flow and if the break statement is not there to indicate the end of this
// case, every case below this case would come into flow, until another break.
// So, as you can see there seems to be no use of continue here.//


// ******************Calculator code***********************
// int a, b;
// char c;
// int result;

// int main() {
//   cout << "Enter value of a:";
//   cin >> a;
//   cout << "Enter value of b:";
//   cin >> b;
//   cout << "Enter opertaor:";
//   cin >> c;

//   switch (c) {
//   case '*':
//     result = a * b;
//     cout << "result=" << result;
//     break;
//   case '+':
//     result = a + b;
//     cout << "result=" << result;
//     break;
//   case '/':
//     result = a / b;
//     cout << "result=" << result;
//     break;
//   case '-':
//     result = a - b;
//     cout << "result=" << result;
//     break;
//   case '%':
//     result=a%b;
//     cout << "result=" << result;
//     break;
//   default:
//     cout<<"Exit"<<endl;
//   }
// }

// int main() {
//   int amount = 1330;
//   int store=0;
  // int num;
  // int result, choice;
  // cout <<"Enter num with which you want to delete amount:";
  // cin>>num;
//   cout << "Enter your choice:";
//   cin >> choice;
//   switch (choice) {
//   case 1:
//     result = amount / 100;
//     store = amount - result;
//     cout<<"100 rupees notes="<<result;
//     break;

//   case 2:
//     result = store / 20;
//     store = amount - result;
//     cout<<"20 rupees notes="<<result;
//     break;

//   case 3:
//     result = store / 1;
//     store = amount - result;
//     cout<<"1 rupees notes="<<result;
//     break;
//   }
// }