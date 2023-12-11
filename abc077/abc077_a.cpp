#include <bits/stdc++.h>

#define o(output) cout << output << endl;

using namespace std;

string s,t;
int a,b,c,d;

int main(){
  cin >> s>>t;
  reverse(t.begin(),t.end());
  if (s==t){
    o("YES")
  }else{
    o("NO")
  }
}
