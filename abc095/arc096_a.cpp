#include <bits/stdc++.h>
using namespace std;int A,B,C,X,Y;priority_queue<int,vector<int>,greater<int> >q;int main(){cin>>A>>B>>C>>X>>Y;q.push(A*X+B*Y);q.push(2*C*max(X,Y));if(X>Y)q.push((X-Y)*A+2*C*Y);else q.push((Y-X)*B+2*C*X);cout<<q.top()<<endl;}