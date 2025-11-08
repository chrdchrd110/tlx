#include<iostream>
#include<cmath>
using namespace std;
// r <= c, rxc = n, if multiple solutions, c-r is minimized
// time complexity: O(sqrt(n))
int main(){
  long long n;
  while(true){
    cin >> n;
    if (n >= 0 && n <= 1000000000){
      break;
    }
  }
  long long rBest, cBest;
  rBest = 1;
  cBest = n;
  for (long long r = 1; r <= n; r++){
    if (n%r == 0 && r <= n/r){
      long long c = n/r;
      if (c-r < cBest - rBest){
        rBest = r;
        cBest = c;
      }
    }
    
  }
  cout << rBest << " " << cBest << endl;
  // cout << pow(2, 16) << endl;
}