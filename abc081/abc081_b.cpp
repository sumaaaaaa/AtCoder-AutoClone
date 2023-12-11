#include <bits/stdc++.h>
using namespace std;

int N,A,ans,c;

int main(){
    ans = 1000000000;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        c=0;
        scanf("%d",&A);
        while(A%2==0){
            A/=2;
            c++;
        }
        if (ans>c){
            ans =c;
        }
    }
    printf("%d\n",ans);
}
