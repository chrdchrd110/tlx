#include <iostream>
#include <cmath> //abs
#define BETWEEN(v,lo,hi) ((v)>=(lo) && (v)<=(hi))
// #include <cstdlib> //abs
using namespace std;

int func(int a, int b, int x, int k){
  int result = abs((a * x)+b);
  for (int i = 0; i < k-1; i++){
    result = abs((a * result)+b);
  }
  return result;

}
int main(){
  int a,b,k,x;
  while(true){
    cin >> a >> b >> k >> x;
    if(BETWEEN(a, -5,5) && BETWEEN(b, -5,5) && BETWEEN(x, -5,5) && BETWEEN(k, -5,5) ) break;
    }
  
  int result = func(a,b,x,k);
  cout << result << endl;
  return 0;
}