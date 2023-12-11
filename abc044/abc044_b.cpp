#include <bits/stdc++.h>

using namespace std;

string w;
char mem;
int c=1;
int a;
bool b=1;
int j;
int k;

int main(){
    cin>>w;
    int s=w.size();
    int i=w.size()-1;
    sort(w.begin(),w.end());
    if(w.size()==1){
        cout<<"No"<<endl;
        return 0;
    }
    while(b){
        if(w[j]==w[j+1])k++;
        if(w[j]!=w[j+1]){
            if(k%2==0){
                cout<<"No"<<endl;
                return 0;
            }else{
                b=0;
            }
        }
        j++;
    }
    while(i>1){
        if(w[i]==w[i-1]){
            c++;
            i--;
            w.pop_back();
        }else{
            if(c%2==1){
            cout<<"No"<<endl;
            return 0;
            }
            c=1;
            i--;
            a++;
            w.pop_back();
        }
    }
    if(a==0&&s%2==1){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
}

