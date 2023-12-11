#include<bits/stdc++.h>

using namespace std;

map<char,char> ans;
int n;
char c;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if(ans.count(c)==0){
            ans.insert(make_pair(c,'0'));
        }
        if(ans.size()==4){
            cout<<"Four"<<endl;
            return 0;
        }
    }
    cout<<"Three"<<endl;
}
