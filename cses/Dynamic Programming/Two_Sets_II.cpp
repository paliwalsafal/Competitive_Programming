#include <bits/stdc++.h>
using namespace std;
#define int 	   long long
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
 
//minimising coins
/*int solve(vector<int>& v , int s , int n){
 
	/*vector<vector<int>> t(n+1,vector<int>(s+1));
 
	for(int i = 0;i<n+1;++i)
		{
			for(int j = 0;j<s+1;++j)
		    {
				if(j==0) 
					t[i][j] = 0;
				else if(i==0) 
					t[i][j] = INT_MAX - 1;
				else if(v[i-1] <= j) 
					t[i][j] = min(1+t[i][j-v[i-1]],t[i-1][j]);
				else 
					t[i][j] = t[i-1][j];
		    }
	    }
	// returning the answer 
	
 
	return t[n][s]==INT_MAX - 1 ? -1:t[n][s]; 
		vector <int> dp(s+1, 1e9);
        dp[0]=0;
        for(int i=0;i < n; i++)
        {
            for(int j=1 ;j <= s; j++)
            {
                if(v[i] <= j)
                dp[j] = min(dp[j],dp[j-v[i]]+1);
            }
        }
     
        return dp[s]==1e9 ? -1:dp[s];
 
}
*/
int countsubsets(vector <int>& arr, int sum, int n)
{
	int subset[n + 1][sum + 1];
 
    for (int i = 0; i < n+1; i++)
        subset[i][0] = 1;
 
    for (int i = 1; i < sum+1; i++)
        subset[0][i] = 0;
 
    for(int i=1;i<n+1;i++)
    {
    	for(int j=1;j<sum+1;j++)
    	{
 			if (j < arr[i - 1])
                subset[i][j] = subset[i - 1][j]%M;
            if (j >= arr[i - 1])
                subset[i][j] = subset[i - 1][j]%M
                               + subset[i - 1][j - arr[i - 1]]%M;   		
    	}
    }
    return subset[n][sum];
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
	int n;
	cin>>n;
	vector <int> v(n);
	rep(i,0,n) v[i] = i+1;
	int s;
	s=n*(n+1)/2;
		if(s%2 == 0)
		cout<<countsubsets(v,s/2,n)/2;
		else cout<<0;
    return 0;
}