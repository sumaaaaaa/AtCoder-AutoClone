#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,a,b,ans;
    ans=0;
    scanf("%d%d",&A,&B);

    for (int i=A;i<=B;i++){
        a = i%100;
        b = i/1000;
        if (i%10 == 0){
            continue;

        }if ((a+b)%11 == 0 && (a-b)%9 ==0){
                ans++;
            }
        A++;
    }
    printf("%d\n",ans);
}
