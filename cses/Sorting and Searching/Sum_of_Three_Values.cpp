#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define rep0(i,e) for(ll i = 0; i < e; i++)
#define rep(i,s,e) for(ll i = s; i < e; i++)
#define rrep0(i,s) for(ll i = s; i >= 0; i--)
#define rrep(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
 
void solve(int tc =0){
int n,x;cin>>n>>x;
    vector<int>a(n);
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i)
    {
    	int xx;
    	cin>>xx;
    	a[i]=xx;
    	v[i]={xx,i+1};
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;++i)
	{
		int low=0,hi=n-1;
		while(low<hi)
		{
			if(v[low].second==i+1)low++;
			else if(v[hi].second==i+1)hi--;
			else if(v[low].first+v[hi].first+a[i]>x)hi--;
			else if(v[low].first+v[hi].first+a[i]<x)low++;
			else
			{
				cout<<v[low].second<<" "<<v[hi].second<<" "<<i+1<<endl;return;
			}
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
}
int main()
{
	fast_cin();
	ll tc=1;
	//cin >> tc;
	for(ll t=0;t<tc;t++) solve(t);
	return 0;
}