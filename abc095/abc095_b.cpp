#include <bits/stdc++.h>

using namespace std;

int ans,N,X,m;
int tempo = 2000;

int main(){

  cin >> N >> X;

  for (int i=0;i<N;i++){
    cin >> m;
    tempo =min(tempo,m);
    X -= m;
    ans++;
  }
  ans += X/tempo;
  cout << ans << endl;
}
