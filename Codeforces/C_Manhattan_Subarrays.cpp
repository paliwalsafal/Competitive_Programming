// Jai Shree Ram
#include <bits/stdc++.h>  
 
using namespace std;
 
#define int          long long
#define bstring(a)   basic_string<int> a;
#define all(x)       (x).begin(), (x).end()
#define sz(x)        ((int)(x).size())
#define rep(i,s,e)   for(int i = s; i < e; i++)
#define uniq(v)      (v).erase(unique(all(v)),(v).end())
#define rrep(i,s,e)  for(int i = s; i >= e; i--)
#define dbg(x)       cout<<#x<<" = "<<x<<endl
#define pb           push_back
#define ppb          pop_back
#define pf           push_front
#define ppf          pop_front
#define fi           first
#define se           second
#define printv(x)    for(auto it=x.begin();it!=x.end();it++) cout<<*it<<' '; cout<<endl
#define printvp(x)   for(auto it=x.begin();it!=x.end();it++) cout<<it->fi<<' '<<it->se<<endl
#define GODSPEED     ios:: sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(15);
 
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
 
const long long INF=1e18;
const int32_t mod=1e9+7;
const int N = 2e5 + 5;
int a[N];

bool check(vector<int> &v){
	int n = sz(v);
	rep(i,0,n){
		rep(j,i+1,n){
			rep(k,j+1,n){
				if((v[i] >= v[j] && v[j] >= v[k]) ||
					(v[i] <= v[j] && v[j] <= v[k])){
					return true;
				}
			}
		}
	}
	return false;
}
 
void solve(int tc=0)
{
    int n;
	cin >> n;
	rep(i,0,n){
		cin >> a[i];
	}
	
	int ans = 0;
	rep(i,0,n){
		vector<int> v;
		rep(j,i,n){
			v.pb(a[j]);
			if(check(v)) break;
			ans++;
		}
	}
	cout << ans << "\n";
}
 
signed main()
{
    GODSPEED
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}