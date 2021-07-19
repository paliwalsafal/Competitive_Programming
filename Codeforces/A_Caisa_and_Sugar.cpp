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
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}

void solve(int tc=0)
{
    int n,s;
    cin>>n>>s;
    vector <pair<int,int>> vp;
    while(n--) {
        int x,y;
        cin>>x>>y;
        vp.pb({x,100-y});
    }
    //dbg(s);
    sort(all(vp),sortbysec);
    //printvp(vp);
    for(auto it=vp.begin();it!=vp.end();it++) {
        if(it->se != 100 and it->first < s) {
            cout<<it->second<<"\n";
            return;
        }
        else continue;
    }
    int cnt = 0;
    for(auto it=vp.begin();it!=vp.end();it++) {
        if(it->second == 100 and it->fi <=s) cnt++;
    }
    if(cnt != 0) cout<<0<<"\n";
    else cout<<-1<<"\n";
}
 
signed main()
{
    GODSPEED
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}