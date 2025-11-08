#include <iostream>
using namespace std;

void mountain(int n){
    if(n == 1){
        cout << "*\n";
        return;
    }
    mountain(n - 1);
    cout << string(n, '*') << "\n";
    mountain(n - 1);
}

int main(){
  int x;
  while (true){
  cin >> x;
  if (x >=1 && x <=10) break;
  }
  mountain(x);
  return 0;
}