// input data[n], output each number without data[i]
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> data){
  int n = data.size();
  // cout << n << endl;
    for (int i = 0; i < n; i++){
      int num = 0;
      // cout << num << "num is " << endl;
      for (int j:data){
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
    cout << "Enter number of elements: ";
    cin >> N;
    
    vector<int> data;
    for (int i = 0; i < N; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        data.push_back(x);
    }
    print(data);
}