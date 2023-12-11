#include <bits/stdc++.h>

using namespace std;

map<int ,int> ans;
int n;
int dispo;

int main(){
  cin>>n;
  
  for(int i=0;i<n;i++){
    cin>>dispo;
    if(ans.count(dispo)==0)
      ans.insert(make_pair(dispo,0));
  }
  cout<<ans.size()<<endl;
                 }
                 
  