#include<bits/stdc++.h>

using namespace std;

int N,D,X,A,ans;

int main(){
  cin>>N>>D>>X;

  for(int i=0;i<N;i++){
    cin>>A;
    for(int j=0;1+A*j<=D;j++){
      ans++;
    }
  }
  cout<<ans+X<<endl;
}
