#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <cstdlib>
#define BETWEEN(v,a,b) (v>=a && v<=b)

using namespace std;

void func(int n, int d){
  vector<vector<int>> v;
  for(int i = 0; i < n; i++){
    int x,y;
    vector<int> row;
    while(true){
      cin >> x >> y;
      if(BETWEEN(x,0,100) && BETWEEN(y,0,100)){
        row.push_back(x);
        row.push_back(y);
        break;
      } 
    }
    v.push_back(row);
  }
  
  // for(int i = 0; i<v.size();i++){
  //   for(int j = 0; j<2;j++){
  //     cout << v[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  // int smallest = INT_MAX;
  // int biggest = INT_MIN;
  // for(int i = 1; i<n;i++){
  //   int result = pow(abs(v[i-1][0]-v[i][0]), d) + pow(abs(v[i-1][1] - v[i][1]), d);
  //   if (result <smallest){
  //     smallest = result;
  //   } if(result > biggest){
  //     biggest = result;
  //   }
  // }
  int smallest = INT_MAX;
  int biggest = INT_MIN;
  for (int i = 0; i<v.size(); i++){
    for (int j = i+1; j < v.size(); j++){
      int result = pow(abs(v[i][0]-v[j][0]), d) + pow(abs(v[i][1] - v[j][1]), d);
      if (result <smallest){
        smallest = result;
      } if(result > biggest){
        biggest = result;
      }
    }
  }
  cout << smallest << " " << biggest << endl;
}

int main(){
  int n, d;
  while(true){
    cin >> n >> d;
    if(BETWEEN(n,2,1000) && BETWEEN(d,1,3)){
      break;
    }
  }
  func(n,d);
  return 0;
}


// v[0][1] + v[1[1]]  v[0[0]]
