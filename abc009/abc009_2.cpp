#include <bits/stdc++.h>

using namespace std;
priority_queue<int> pq;
int n,a,b;

int main(){
    cin>>n;
    pq.push(-100);
    for (int i=0;i<n;i++){
        cin>>a;
        pq.push(a);
        }
    b=pq.top();
    while(b==pq.top()){
        pq.pop();
    }
    cout<<pq.top()<<endl;
}

