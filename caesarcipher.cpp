#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  string s = "epctxlvldtsdpxzrlvfcdfdtytmpcxlyqlle";
  int k = 1;
  vector<string> resultAll;
  // 97-122
  for(int i = 0; i< 26; i++, k++){
    string result = "";
    for (char x:s){
      for(int j = 0; j<k; j++){
        if(x == 'z'){
          x = 'a';
        } else {
          x++;
        }
      }
      result.push_back(x);
    }
    resultAll.push_back(result);
}
  for(string each: resultAll){
    cout << each << endl;
  }
}