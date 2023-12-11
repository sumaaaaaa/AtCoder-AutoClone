#include<bits/stdc++.h>

using namespace std;

priority_queue<int> ans;
int n;
string s;
int dispo;

int main(){
  ans.push(0);
  cin>>n>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='I')dispo++;
    else dispo--;
    ans.push(dispo);
}
cout<<ans.top()<<endl;
}