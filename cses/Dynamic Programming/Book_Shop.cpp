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
 
 
int knapSack(int wt[] , int val[] , int w , int n)
{
	vector <int> dp(w+1,0);
	
	for(int i=0; i < n; i++)
        //traverse dp array from right to left
        for(int j=w; j>=wt[i]; j--)
            dp[j] = max(dp[j] , val[i] + dp[j-wt[i]]);
    /*above line finds out maximum of  dp[j](excluding ith element value)
      and val[i] + dp[j-wt[i]] (including ith element value and the
      profit with "KnapSack capacity - ith element weight") */   
    return dp[w];
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int n,w;
    cin>>n>>w;
    int wt[n],val[n];
    rep(i,0,n) cin>>wt[i];
    rep(i,0,n) cin>>val[i];
    cout<<knapSack(wt,val,w,n);
 
    return 0;
}