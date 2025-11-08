#include<iostream>
#include<cmath>
using namespace std;
// r <= c, rxc = n, if multiple solutions, c-r is minimized
// this code have o(n^2) complexity
int main(){
  int n;
  while(true){
    cin >> n;
    if (n >= 0 && n < 3000){
      break;
    }
  }
  int rBest, cBest;
  rBest = 1;
  cBest = n;
  for (int r = 0; r <= n; r++){
    for (int c = r; c <=n; c++){
      if (r*c == n && r <= c){
        if (c-r < cBest - rBest){
          rBest = r;
          cBest = c;
        }
      }
    }
  }
  cout << rBest << " " << cBest << endl;
  // cout << pow(2, 16) << endl;
}