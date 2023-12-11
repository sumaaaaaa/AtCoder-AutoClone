#include<bits/stdc++.h>

using namespace std;

int roadcost[101],N,M,X,a,b;

int main(){
  cin>>N>>M>>X;

  for(int i=0;i<M;i++){
    int dispo;
    cin>>dispo;
    roadcost[dispo]++;
  }

  for(int i=0;i<=X;i++){
    a+=roadcost[i];
  }
  for(int i=X;i<=N;i++){
    b+=roadcost[i];
  }
  cout<<min(a,b)<<endl;
}
