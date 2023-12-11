#include <bits/stdc++.h>

using namespace std;

int c;
string s;
map<string,int> elect;

int main(){
    cin>>c;
    for (int i=0;i<c;i++){
        cin>>s;
        if(elect.count(s)==0){
            elect[s]=1;
        }else{
            elect[s]+=1;
        }
    }
    int mem = 0;
    string ans;
    for(auto ite = elect.begin(); ite != elect.end(); ite++)
    {
        if(mem < ite->second)
        {
            ans = ite->first;
            mem = ite->second;
        }
    }
    cout<<ans<<endl;
}