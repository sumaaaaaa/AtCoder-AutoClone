#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K,ans;
    ans = 1;
    scanf("%d%d",&N,&K);
    for(int i=0;i<N;i++){
    if (ans <=K){
        ans *=2;
    }else{
    ans +=K;
    }
    }
    printf("%d\n",ans);
}
