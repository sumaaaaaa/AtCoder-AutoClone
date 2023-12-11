#include <bits/stdc++.h>

using namespace std;

int board[55][55];
char ans[55][55];

int main(){
    int W,H;
    char r;
    scanf("%d%d",&H,&W);

    for (int i=0;i<H;i++){
        for (int j=0;j<W;j++){

            scanf(" %c",&r);

            if (r == '#'){

                board[i][j]=-100;
                for (int k=0;k<3;k++){
                    for (int l=0;l<3;l++){
                        if(i+k-1 < H && j-l+1 < W){
                            board[i+k-1][j-l+1]++;
                        }
                    }
                }
            }
        }
    }

    for (int i=0;i<H;i++){
        for (int j=0;j<W;j++){

            if (board[i][j]<0){

                ans[i][j]='#';
            }else{
                //printf("%d",board[i][j]);
                ans [i][j] = '0'+board[i][j];
            }
            printf("%c",ans[i][j]);
        }printf("\n");
    }
}

