#include <bits/stdc++.h>

using namespace std;

int N,dispo,ans,tempo;
vector <int> aheaddif;

int main(){
  cin >> N;
  char light[N-1],revlight[N-1],xorlight[N-1]={};


  for (int i=0;i<N;i++){
    cin >> light[i];
  }

  for (int i=0;i<N;i++){
    revlight[i]=dispo;
    dispo ^= 1;

  }

  for (int i=0;i<N;i++){
    xorlight[i]=light[i]^revlight[i];
  }

  aheaddif.push_back(0);


  for (int i=0;i<N-1;i++){
    if(xorlight[i] != xorlight[i+1]){
      aheaddif.push_back(i);
      aheaddif.push_back(i+1);
    }
  }

  aheaddif.push_back(N-1);

  if (aheaddif.size()>=6){

    ans = aheaddif[5]-aheaddif[0]+1;

    for (int i=0;i+6<=aheaddif.size();i+=2){
      tempo = aheaddif[i+5]-aheaddif[i]+1;
      ans = max(ans,tempo);
    }

    ans = max(ans,(aheaddif[aheaddif.size()-1]-aheaddif[aheaddif.size()-5])+1);

    cout << ans << endl;
  }else if(aheaddif.size()<6){
    cout << N << endl;
}
}