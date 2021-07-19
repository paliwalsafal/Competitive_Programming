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
    string s;
    cin>>s;
    int n=s.size();
    int pre[n],suf[n];
    memset(pre, 0, sizeof(pre));
    memset(pre, 0, sizeof(pre));
    suf[n-1]=s[n-1]-'0';
    for(int i=n-2;i>=0;i--)
    suf[i]=suf[i+1]+(s[i]-'0');
    pre[0]=s[0]-'0';
    for(int i=1;i<n;i++)
    pre[i]=pre[i-1]+(s[i]-'0');
    int ans=n;
    for(int i=0;i<n-1;i++)
    {
        int x=pre[i]+suf[i+1];
        ans=min(ans, x);
        x=pre[i]+(n-1-i-suf[i+1]);
        ans=min(ans, x);
        x=(i+1-pre[i])+(n-1-i-suf[i+1]);
        ans=min(ans, x);
        x=(i+1-pre[i])+(suf[i+1]);
        ans=min(ans, x);
    }
    if(n>1)
    ans=min({ans, pre[n-2], n-1-pre[n-2]});
    if(n==1)
    ans=0;
    cout<<ans<<"\n";
}
 
signed main()
{
    GODSPEED
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}