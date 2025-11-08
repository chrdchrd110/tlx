#include <iostream>
#include <vector>
#define between(v,a,b) (v >= a && v <= b)
using namespace std;

// matrix multiplication
// assets\Screenshot 2025-10-03 172403.png
void func(){
  vector<vector<int>> v ;
}

int main(){
  int n,m,p;
  vector<vector<int>> matrix1, matrix2, matrix3;
  while(true){
    cin >> n >> m >> p;
    if(between(n,1,100) && between(m,1,100) && between(p,1,100)){
      break;
    }
  }
    // matrix1 nxm
    for (int i = 0; i < n; i++){
      vector<int> row;
      for(int j = 0; j < m; j++){
        int x;
        while(true){
        cin >> x;
        if (between(x,1,100)){
          row.push_back(x);
          break;
          }
        }
      }
      matrix1.push_back(row);
    }

    // matrix2 mxp
    for (int i = 0; i < m; i++){
      vector<int> row;
      for(int j = 0; j < p; j++){
        int x;
        while(true){
        cin >> x;
        if (between(x,1,100)){
          row.push_back(x);
          break;
          }
        }
      }
      matrix2.push_back(row);
    }
    // matrix3 nxp
    for(int i = 0; i < n; i++){
      vector<int> row;
      for(int j = 0; j < p; j++){
        int sum = 0;
        for(int k = 0; k < m; k++){
          sum += matrix1[i][k] * matrix2[k][j];
        }
        row.push_back(sum);
      }
      matrix3.push_back(row);
    }


    for(int i = 0; i < n; i++){
      for(int j = 0; j < p; j++){
        cout << matrix3[i][j] << " ";
      }
      cout << endl;
    }

  func();
  return 0;

}