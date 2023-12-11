#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K,x,ans;
    ans = 0;
    scanf("%d%d",&N,&K);
    for (int i=0;i<N;i++){
        scanf("%d",&x);
        if (x-K>0){
            ans += x-K;
        }else if (2*x-K<=0){
        ans += x;
        }else{
        ans += K-x;
        }
    }
    printf("%d\n",2*ans);
}
