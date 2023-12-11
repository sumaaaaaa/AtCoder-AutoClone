#include <bits/stdc++.h>

using namespace std;

string s,ans;

int main(){
    cin>>s;

    for(int i=0;i<s.size();i++){
                    ans.push_back(s[i]);
            if(s[i]=='B'&&ans.size()!=0){
            ans.pop_back();
                if(ans.size()!=0)ans.pop_back();
        }
    }
    cout<<ans<<endl;
}