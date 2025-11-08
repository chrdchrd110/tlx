#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void print(vector<long long> data){
  int n = data.size();
  // cout << n << endl;
    for (int i = 0; i < n; i++){
      long long num = 0;
      // cout << num << "num is " << endl;
      for (long long j:data){
        num +=j;
        // cout << num << "num is " << endl;
      }
      num -= data[i];
      cout << num << endl;
    }
    cout << endl;
}
int main(){
    int N;
    while (true){
        cin >> N;
        if (N >=1 && N <= 100){
          // cout << "yes" << endl;
            break;
        }
    }
    
    vector<long long> data;
    for (int i = 0; i < N; i++) {
        long long x;
        while (true){
            cin >> x;
            if (x >= 0 && x <= 100000000){
              data.push_back(x);
              // cout << "accepted" << endl;
              break;
            }
        }
    }
    // cout << N << endl;
    print(data);
}