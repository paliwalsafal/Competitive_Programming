#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  if(n==2 || n == 3)
  cout<<"NO SOLUTION\n";
  else{
    for(int i =2 ;i<=n;i+=2)cout<<i<<" ";
    for(int i = 1 ; i<=n ; i+=2)cout<<i<<" ";
  }
return 0;
}