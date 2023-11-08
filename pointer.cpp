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
#include <bits/stdc++.h>
using namespace std;

int main(){
int data = 1;
  
int* pointer1;

int** pointer2;

pointer1 = &data;

pointer2 = &pointer1;

cout << "Value of data :- " <<data << endl;
cout << "Value of data using single pointer :- " <<	*pointer1 << endl;
cout << "Value of data using double pointer :- " <<	**pointer2 << endl;
return 0;
}c
