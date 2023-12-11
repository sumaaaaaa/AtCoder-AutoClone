#include<bits/stdc++.h>

using namespace std;

map<string,int> word;
string s;
int n,m;
int mv;

int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(word.count(s)==0){
            word.insert(make_pair(s,0));
        }
         word.at(s)++;
    }

    cin>>m;
    for(int i=0;i<m;i++){
        cin>>s;
        if(word.count(s)==0){
            word.insert(make_pair(s,0));
        }
         word.at(s)--;
    }

    map<string,int>::iterator ite;

    for(ite=word.begin(); ite!=word.end();ite++){
        if(ite->second>mv){
            mv=ite->second;
        }
    }

    if(mv<0){
        cout<<'0'<<endl;
    }else{
    cout<<mv<<endl;
    }
}