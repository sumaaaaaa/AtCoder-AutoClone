#include <bits/stdc++.h>

using namespace std;

int N,L;
string dispo;
priority_queue <string,vector<string>,greater<string> > pq;

int main(){
    cin>>N>>L;
    for(int i=0;i<N;i++){
        cin>>dispo;
        pq.push(dispo);
    }
    while(!pq.empty()){
        cout<<pq.top();
        pq.pop();
    }
    cout<<endl;
}
