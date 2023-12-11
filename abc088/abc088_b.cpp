#include<bits/stdc++.h>

using namespace std;

int n,dispo,ans;
priority_queue<int> card;
int state =1;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>dispo;
        card.push(dispo);
    }
    while(card.size()!=0){
        ans+=state*card.top();
        state*=-1;
        card.pop();
    }
    cout<<ans<<endl;
}
