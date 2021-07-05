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
 
//vector<vector<int>> t(102,vector<int>(1000002));
 
 
int countsubsets(vector<int>& arr, int sum, int n)
{
    
 
    /*for (int i = 1; i < sum+1; ++i)
        t[0][i] = 0;
 
    for (int i = 0; i < n+1; ++i)
        t[i][0] = 1;
 
 
    for(int i=1;i<n+1;++i)
    {
    	for(int j=1;j<sum+1;++j)
    	{
            if (j >= arr[i - 1])
                t[i][j] = t[i-1][j]%M + t[i][j - arr[i - 1]]%M; 
            else 
            	t[i][j] = t[i - 1][j]%M;  		
    	}
    }
    return t[n][sum];*/
 
    // using 1 D dp how i don't know
        /*if(n==0){
            if(sum==0)
                return 1;
            else
                return 0;
        }*/
            
        int dp[sum+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i <= sum; i++)
        {
            for(int j=0 ;j < n; j++)
            {
                if(i-arr[j] >= 0)
                (dp[i] += dp[i-arr[j]]) %= M;
 
            }
        }
     
        return dp[sum];
}
 
 
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
	int n,s;
	cin>>s;
	vector <int> arr = {1,2,3,4,5,6};
    cout<<countsubsets(arr,s,6);
    return 0;
}