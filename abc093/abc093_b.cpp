#include<bits/stdc++.h>

using namespace std;

long long a,b,k;
vector<long long>ans;

int main(){
    cin>>a>>b>>k;

    if((b-a+1)<=2*k){
        for(int i=a;i<=b;i++){
            cout<<i<<endl;
        }
    }else{
        for(int i=a;i<=a+k-1;i++){
            cout<<i<<endl;
        }
        for(int i=b-k+1;i<=b;i++){
            cout<<i<<endl;
        }
    }
}
