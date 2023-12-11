#include<bits/stdc++.h>

using namespace std;

string s;
int ans,dispo;
bool state;
vector<int> Atable,Ztable;

int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            Atable.push_back(i);
        }
        if(s[i]=='Z'){
            Ztable.push_back(i);
        }
    }
    cout<<Ztable.back()-Atable.front()+1<<endl;
}
