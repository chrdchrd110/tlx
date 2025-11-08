#include <iostream>
#include <vector>
#define between(v,a,b) (v >= a && v <= b)
using namespace std;

void func(){
  vector<vector<int>> v = {{1,2,3,4}, {5,6,7,8}};
  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < 4; j++){
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  func();
  return 0;

}