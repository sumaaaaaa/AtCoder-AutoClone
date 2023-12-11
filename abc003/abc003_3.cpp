#include <bits/stdc++.h>

using namespace std;

priority_queue<int,vector<int>,greater<int>> rate;

int N,K,R;
double ans;

int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> R;
        rate.push(R);
    }
    while(rate.size()>K){
        rate.pop();
    }
    for (int i=0;i<K;i++){
        ans = (ans + rate.top())/2;
        rate.pop();
    }
    printf("%.6f\n",ans);
}
