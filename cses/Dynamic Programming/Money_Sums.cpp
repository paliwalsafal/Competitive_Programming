#include <bits/stdc++.h>
using namespace std;
#define int        long long
#define pb         push_back
#define ppb        pop_back
#define pf         push_front
#define ppf        pop_front
#define all(x)     (x).begin(),(x).end()
#define tr(x, i)   for(typeof (x).begin() i = x.begin(); i != x.end(); i++)
#define sz(x)      (int)((x).size())
#define fr         first
#define sc         second
#define pii        pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef vector < int > vi;
typedef vector < vi > vvi;
typedef pair < int, int > ii;
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
 
const int N=0;
 
 
// C++ program to print distinct subset sums of
// a given array.
#include<bits/stdc++.h>
using namespace std;
 
// Uses Dynamic Programming to find distinct
// subset sums
void printDistSum(int arr[], int n)
{
	int sum=0;
	rep(i,0,n) sum+=arr[i];
 
	int dp[sum+1];
    memset(dp,-1,sizeof(dp));
 
    dp[0] = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=sum-arr[i];j>=0;j--)
        {
            if(dp[j] != -1)
            dp[j+arr[i]] = 1;
        }
    }
    vector<int> v;
    for(int i=1;i<=sum;i++)
    {
        if(dp[i] != -1)
        v.push_back(i);
    }
 
    cout<<v.size()<<endl;
 
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
 
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    printDistSum(arr,n);
    return 0;
}