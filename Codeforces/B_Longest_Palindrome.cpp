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
    int n,m;
    cin>>n>>m;
    vector <string> s(n);
    set <string> v;
    rep(i,0,n) {
        cin>>s[i];
        v.insert(s[i]);
    }
    vector <string> left , right;
    string mid;
    //printv(v);
    rep(i,0,n) {
        string str = s[i];
        reverse(all(str));
        if(str == s[i]) {
            mid = s[i];
        }
        else if(v.find(str) != v.end()) {
            left.pb(s[i]);
            right.pb(str);
            v.erase(s[i]);
            v.erase(str);
        }
    } 
    //dbg(mid);
    //printv(left);
    //printv(right);

    cout << left.size() * m * 2 + mid.size() << "\n";
	for (string x : left)
		cout << x;
	cout << mid;
	reverse(right.begin(), right.end());
	for (string x : right)
		cout << x;
	cout<<"\n";
}
 
signed main()
{
    GODSPEED
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}