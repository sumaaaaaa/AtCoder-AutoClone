#include <bits/stdc++.h>

using namespace std;

int K,S,ans;

int main(){
    scanf("%d%d",&K,&S);
    for (int i=0;i<=K;i++){
        for (int j=0;j<=K;j++){
            if (S-i-j<=K && S-i-j>=0){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
}
