#include <bits/stdc++.h>

using namespace std;

int ans=1000;
int n,dispo;

int main(){
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>dispo;
        ans=min(ans,dispo);
    }
    cout << ans<<endl;
}