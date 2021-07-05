#include <bits/stdc++.h>
using namespace std;
//#define REP(i,a,b) for(int i= a;i<=b;i++)
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long int count =0;
  long long int n;
  cin>>n;
  long long int A[n];
  for(int i = 0 ; i<n ;i++)
  {
    cin>>A[i];
  }
  for(int i = 0 ; i<n ; i++)
  {
    if(A[i]>A[i+1])
    {
      count = count + (A[i]-A[i+1]);
      A[i+1] = A[i];
    }
  }
  cout<<count<<"\n";
	return 0;
}