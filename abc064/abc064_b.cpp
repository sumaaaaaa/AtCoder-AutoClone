#include <bits/stdc++.h>

#define o(output) cout << output << endl

using namespace std;

string s;
int a,b,c,d;
char A,B;
priority_queue<int> pr;
vector<int> vec;

int main(){
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>b;
    vec.push_back(b);
    } 
  sort(vec.begin(),vec.end());
  o(vec[a-1]-vec[0]);
}