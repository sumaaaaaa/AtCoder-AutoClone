#include <bits/stdc++.h>

using namespace std;

int N,T[105],M,P,X,temp,ans,sum;

int main(){

    scanf("%d",&N);

    for (int i=0;i<N;i++){
        scanf("%d",&T[i]);
        sum += T[i];
    }

    scanf("%d",&M);

    for (int i=0;i<M;i++){
        scanf("%d%d",&P,&X);
        ans = sum-T[P-1]+X;
        printf("%d\n",ans);
    }
}
