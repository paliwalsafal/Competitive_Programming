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
#define trav(x)      for(auto it=x.begin();it!=x.end();it++)
#define GODSPEED     ios:: sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(15);
 
template<typename T,typename T1>T ckmin(T &a,T1 b){if(b<a)a=b;return a;}
template<typename T,typename T1>T ckmax(T &a,T1 b){if(b>a)a=b;return a;}
 
const long long INF=1e18;
const int32_t mod=1e9+7;
 
void solve(int tc=0)
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int &x : v) cin>>x;
    vector <int> ans;
    ans.pb(v[0]);
    rep(i,1,n-1) {
        if(v[i]>v[i-1] and v[i] > v[i+1]) ans.pb(v[i]);
        if(v[i] < v[i-1] and v[i] < v[i+1]) ans.pb(v[i]);
    }
    ans.pb(v[n-1]);
    cout<<sz(ans)<<"\n";
    printv(ans);
}
 
signed main()
{
    GODSPEED
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}