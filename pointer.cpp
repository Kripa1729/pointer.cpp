#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int x, y;
  x = 2;
  y = 3;
  cout<<"before swap";
  cout << "\n" << x;
  cout << "\n" << y;
  swap(&x, &y);
  cout<<"\n"<<"after swap";
  cout << "\n" << x;
  cout << "\n" << y;
}