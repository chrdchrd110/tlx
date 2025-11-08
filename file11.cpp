#include <iostream>
#include <string>
#define BETWEEN(s, a, b) (s.size() >=1 && s.size() <=100)
using namespace std;

// sabunkeramaskekerara kera
// sabunmas

bool isLower(string s){
  for(char c :s){
    if(!islower(c)){
      return false;
    }
  }
  return true;
}
void print(auto s){
  cout << s << endl;
}

string func(){
  string s,t;
  while (true){
    cin >> s >> t;
    if (BETWEEN(s,1,100) && BETWEEN(t,1,100)){
      if(isLower(s) && isLower(t)){
        break;
      }
    }
  }
  while(s.find(t) != string::npos){
    s.erase(s.find(t), t.size());
  }
  return s;
}

int main(){
  print(func());
  return 0;
}