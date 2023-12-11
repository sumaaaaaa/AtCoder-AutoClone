#include <bits/stdc++.h>

using namespace std;

int ans,N,A[300],dispo;

int main(){
  ans = 1000000000;
  cin >> N;

  for (int i=0;i<N;i++){
    cin >> A[N];
    dispo = 0;
    while(A[N]%2==0){
      A[N]/=2;
      dispo++;
    }
    ans = min(ans,dispo);
  }
  cout << ans << endl;
}
