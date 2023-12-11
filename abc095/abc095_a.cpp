#include <bits/stdc++.h>

using namespace std;

string S;
int ans=700;

int main(){
  
  cin >> S;

  for (int i=0;i<3;i++){
    if(S[i]=='o'){
      ans += 100;
    }
  }
  cout << ans << endl;
}
