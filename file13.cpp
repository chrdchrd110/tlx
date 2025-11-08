#include <iostream>
#include <vector>
#include <string>
using namespace std;

string isPrime(int n){
  if (n ==1) return "BUKAN";
  for (int i=2; i*i<n; i++){
    if (n %i == 0) return "BUKAN";
  }
  return "YA";

}

int main(){
  int q;
  while (true){
    cin >> q;
    if (q >=1 && q<=1000) break;
  }

  vector<int> data;

  for (int i=0; i<q; i++){
    int n;
    while (true){
      cin >> n;
      if (n >=1 && n<=1000000){
        data.push_back(n);
        break;
      }
    }
  }

  for (int x: data){
    cout << isPrime(x) << endl;
  }
}