#include <iostream>
using namespace std;

/*Write a program in C++ to display the operation of pre and post increment and decrement. Go to the editor
Sample Output:
Display the operation of pre and post increment and decrement :*/

int main() {
  int i;
  

  cout << "The number is: ";
  cin >> i;
  i++;
  cout << "After post increment by 1 the number is :" << i  << endl;
  ++i;
  cout << "After pre increment by 1 the number is :" << i << endl;
  i = i + 1;
  cout << "After increasing by 1 the number is :" << i << endl;

  i--;
  cout << "After post decrement by 1 the number is :" << i << endl;
  --i;
  cout << "After pre decrement by 1 the number is :" << i << endl;
  i = i - 1;
  cout << "After decreasing by 1 the number is :" << i << endl;
  return 0;
}
