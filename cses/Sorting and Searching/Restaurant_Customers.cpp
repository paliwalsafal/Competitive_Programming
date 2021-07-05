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
 
void solve(int tc =0){
int n,x,y;
cin>>n;
vector < pair <int,int> > vp(n);
rep(i,0,n){
	cin>>x>>y;
	vp.pb({x,1});
	vp.pb({y,-1});
}
int sum=0;
int ans=0;
sort(all(vp));
for(auto i : vp){
	sum += i.second;
	ans = max(sum,ans);
}
cout<<ans<<"\n";
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int tc = 1;
    //cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}