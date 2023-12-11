#include <bits/stdc++.h>

using namespace std;

int a,b,n,x,y;

int main(){
  cin>>a>>b>>n;
  int route[a][b]={};
  int ngpoint[a][b]={};
  for(int i=0;i<n;i++){
    cin>>x>>y;
    ngpoint[x-1][y-1]=-1;
  }
  for(int i=0;i<a;i++){
    if(ngpoint[i][0]!=-1){
      route[i][0]=1;
    }else{
      break;
    }
  }
  for (int i=0;i<b;i++){
    if(ngpoint[0][i]!=-1){
      route[0][i]=1;
    }else{
      break;
    }
  }
  for (int i=1;i<a;i++){
    for (int j=1;j<b;j++){
      if(ngpoint[i][j]!=-1){
        route[i][j]=route[i-1][j]+route[i][j-1];
      }
    }
  }
  cout<<route[a-1][b-1]<<endl;
}