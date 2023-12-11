#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,s,a;
    s=0;
    scanf("%d",&N);
    a=N;
    while (N){
        s += N%10;
         N /= 10;
    }
    if (a%s==0){
        printf("Yes\n");
    }else{
    printf("No\n");
    }
}


