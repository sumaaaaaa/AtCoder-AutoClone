#include <bits/stdc++.h>

#define o(output) cout << output << endl
#define priolity_queue pq
#define push p
#define top t

using namespace std;

string s;
int a,b,c,d;
char A,B;
map<char,int> mp;

int main(){
  cin>>s;
  for(int i=0;i<s.size();i++)if(mp.count(s[i])==0)mp.insert(make_pair(s[i],0));
  for(char i='a';i<='z';i++)if(mp.count(i)==0){
    o(i);
    return 0;
    }
  o("None"); 
}                                                           
