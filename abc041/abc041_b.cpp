#include<bits/stdc++.h>

using namespace std;

long long a,b,x;

int main(){
    cin>>a>>b>>x;
    cout<<(((a*b)%1000000007)*x)%1000000007<<endl;
}
