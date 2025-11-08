#include <iostream>
#include <vector>
#include <cmath>
#define BETWEEN(v,lo, hi) ((v) >= (lo)&& (v) <= (hi))

using namespace std;
void func(){
  int n;
  while(true){
    cin>>n;
    if(BETWEEN(n, 1, 100)){
      break;
    }
  }
  int x = 0;
  for (int i = 0; i<=n; i++){
    for (int j = 0; j<i; j++){
      if(x == 10){
        x = 0;
      }
      cout << x;
      x++;
    }
    cout << endl;
  }

}

int main(){
  func();
  return 0;
}