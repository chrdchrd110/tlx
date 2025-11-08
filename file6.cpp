#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void func(){
  int n;
  while (true){
    cin >> n;
    if (n >=1 && n <= 100){
      break;
    }
  }
  vector<int>numbers;
  numbers.reserve(n);
  
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if (x >= -100000 && x <= 100000){
      numbers.push_back(x);
    } else {
      i--;
    }
  }
  sort(numbers.begin(), numbers.end());
  cout << numbers[n-1] << " " << numbers[0];
}

int main(){
  func();
  return 0;
}