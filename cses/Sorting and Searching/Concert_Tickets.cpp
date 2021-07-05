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
	int n,m;
	cin>>n>>m;
	vector <int> v1(n),v2(m);
	for(auto &x:v1) cin>>x;
	for(auto &x:v2) cin>>x;
	multiset <int,greater<int>> ms;
	rep(i,0,n) ms.insert(v1[i]);
	rep(i,0,m){
		auto it=ms.lower_bound(v2[i]);
		if(it==ms.end())cout<<-1<<endl;
		else
		{
			cout<<*it<<endl;
			ms.erase(it);
		}
	}
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int tc = 1;
    //cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}