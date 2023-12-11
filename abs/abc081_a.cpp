#include <bits/stdc++.h>

using namespace std;

string s;
int ans;

int main(){
  cin >> s;
  for(int i=0;i<3;i++){
    if(s[i]=='1'){
      ans++;
    }
  }
  cout << ans << endl;
}