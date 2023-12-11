#include <bits/stdc++.h>

using namespace std;

int N,M,ans;

int main(){

    cin >> N >> M;
    vector<int> w(N),b(N),r(N);

    for (int i=0;i<N;i++){
            string str;
            cin >> str;
            for (int j=0;j<M;j++){

                if(str[j] == 'W'){
                    w[i]++;
                }else if(str[j] == 'B'){
                    b[i]++;
                }else if(str[j] == 'R'){
                    r[i]++;
                }
            }
        }

        ans = 2147483647;

        for (int i=0;i<N-2;i++){
            int tempo1=0;
            for (int j=0;j<=i;j++){
                tempo1 += b[j]+r[j];
            }
            for(int j=i+1;j<N-1;j++){
                int tempo2 =0;
                for(int k=i+1;k<=j;k++){
                    tempo2 += w[k]+r[k];
                }
                for(int k=j+1;k<N;k++){
                    tempo2 += w[k]+b[k];
                }
            ans = min(ans,tempo1+tempo2);
        }
    }
    cout << ans << endl;
}
