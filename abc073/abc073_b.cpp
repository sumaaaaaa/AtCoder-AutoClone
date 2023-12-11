#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,l,r,s;
    s=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf("%d %d",&l,&r);
        s +=  r-l+1;
    }
    printf("%d\n",s);
}
