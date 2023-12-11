#include <bits/stdc++.h>

using namespace std;

int w = 1111111111;

queue<int> ny,nx;
int R,C,sy,sx,gy,gx,p,q,s,t;
char dispo;
int y[4]={1,0,-1,0};
int x[4]={0,1,0,-1};

int main(){
    cin>>R>>C>>sy>>sx>>gy>>gx;
    char c[R][C]={};
    int d[R][C]={};
    for (int i=0;i<R;i++){
        for (int j=0;j<C;j++){
            cin >> dispo;
            c[i][j]=dispo;
            d[i][j]=w;
        }
    }
    ny.push(sy-1);
    nx.push(sx-1);
    d[sy-1][sx-1]=0;
    while(ny.size()+nx.size()){

        p=ny.front();
        q=nx.front();
        ny.pop();
        nx.pop();
        if(p==gy-1&&q==gx-1)break;
        for(int i=0;i<4;i++){
            s=p+y[i];
            t=q+x[i];
            if(s>=0&&t>=0&&s<R-1&&t<C-1&&c[s][t]!='#'&&d[s][t]==w){
                ny.push(s);
                nx.push(t);
                d[s][t]=d[p][q]+1;
            }
        }







    }



    /*for(int i=0;i<R;i++){
            for (int j=0;j<C;j++){
                if(d[i][j]==1111111111)d[i][j]=1;
                cout << d[i][j];
            }
            cout <<endl;
        }*/

    cout <<d[gy-1][gx-1] <<endl;

}