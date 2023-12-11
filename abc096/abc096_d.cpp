#include<bits/stdc++.h>

using namespace std;

int n,j;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main(){
  cin>>n;
  vector<int>ans;
  for(int i=0;j<n;i++){
    if(IsPrime(5*i+1)==1){
      ans.push_back(5*i+1);
      j++;
    }
  }
  for(int i=0;i<n;i++){
    cout<<ans[i]<<' ';
  }
  cout<<endl;
}
