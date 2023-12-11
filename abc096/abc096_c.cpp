#include<bits/stdc++.h>

using namespace std;

int H,W;

int main(){
  cin>>H>>W;
  char board[H][W];

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin>>board[i][j];
    }
  }

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(board[i][j]=='#'){
        if(board[i-1][j]!='#'&&board[i][j-1]!='#'&&board[i][j+1]!='#'&&board[i+1][j]!='#'){
          cout<<"No"<<endl;
          return 0;
        }
      }
    }
  }
  cout<<"Yes"<<endl;
}
