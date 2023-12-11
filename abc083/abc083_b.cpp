#include <bits/stdc++.h>

using namespace std;

int n,a,b,ans;

bool check(int num){
    int dispo=0;
    while(num){
        dispo+=num%10;
        num/=10;
    }
    if(dispo>=a&&dispo<=b)return 1;
    else return 0;
}

int main(){
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)if(check(i))ans+=i;
    cout<<ans<<endl;
}
