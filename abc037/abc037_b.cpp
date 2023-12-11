#include<bits/stdc++.h>

using namespace std;

long long a,b,c,d,e;

int main(){
    cin>>a>>b;
    long long ans[a+1]={};
    for(int i=0;i<b;i++){
        cin>>c>>d>>e;
        for(int i=c;i<=d;i++){
            ans[i]=e;
        }
    }
    for(int i=1;i<=a;i++){
        cout<<ans[i]<<endl;
    }
}
