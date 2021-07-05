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
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
 
const int N=0;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve(int tc =0){
int n,a,b;
cin>>n;
vector<pair<int,int>> vp(n);
rep(i,0,n)
{
	cin>>a>>b;
	vp[i] = {a,b};
}
sort(all(vp),sortbysec);
int i=0,ans=0,temp=0;
	while(i<n)
	{
		if(temp<=vp[i].first)
		{
			temp=vp[i].second;
			i++;
			ans++;
		}
		else i++;
	}
	cout<<ans<<endl;
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int tc = 1;
    //cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}