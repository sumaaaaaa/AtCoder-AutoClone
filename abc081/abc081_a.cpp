#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;

int main(){
  cin >> s;
  for (int i=0;i<3;i++){
    if(s[i]=='1'){
      a++;
    }
  }
  o(a);
}