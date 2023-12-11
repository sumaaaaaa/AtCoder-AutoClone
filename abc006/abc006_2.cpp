#include <bits/stdc++.h>

using namespace std;

int n;
long long mem[1000010];

long long tri(int a){
    if(mem[a]!=-1)return mem[a];
    if(a==1)return 0;
    else if(a==2)return 0;
    else if(a==3)return 1;
    return mem[a]=(tri(a-1)+tri(a-2)+tri(a-3))%10007;
}

int main(){
    cin >> n;
    for(int i=0;i<=n;i++){
        mem[i]=-1;
    }
    cout<<tri(n)<<endl;
}

