#include <bits/stdc++.h>

using namespace std;

int N;
long long mem[90];

long long Lucas(int a){
    if(mem[a]!=-1)return mem[a];
    if(a==0)return 2;
    else if(a==1)return 1;
    return mem[a]=Lucas(a-2)+Lucas(a-1);
}

int main(){
    cin >> N;
    for (int i=0;i<=N;i++)mem[i]=-1;
    cout << Lucas(N) << endl;
}
