#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
  cin >>s;
  for (int i=0;i<s.size();i++){
    if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o')continue;
    cout << s[i];
  }
  cout <<endl;
}