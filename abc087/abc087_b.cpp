#include <bits/stdc++.h>

using namespace std;

int A,B,C,X,ans;

int main(){
    cin>>A>>B>>C>>X;
    for(int i=0;i<=A;i++){
        for(int j=0;j<=B;j++){
            for(int k=0;k<=C;k++){
                if(500*i+100*j+50*k==X)ans++;
            }
        }
    }
    cout<<ans<<endl;
}
