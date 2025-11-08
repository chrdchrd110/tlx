#include<iostream>
#include<cmath>
using namespace std;
// r <= c, rxc = n, if multiple solutions, c-r is minimized
// time complexity: O()
int main(){
  long long n;
  while(true){
    cin >> n;
    if (n >= 0 && n <= pow(10, 12)){
      break;
    }
  }
  long long rBest, cBest;
  rBest = 1;
  cBest = n;
  for (long long r = 1; r * r <= n; r++){
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