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
 
void solve(int tc=0)
{
    string s;
    int k;
    cin >> s >> k;
    int n = s.size();
    for(auto ele: s) {
        n -= 2 * (ele == '?' or ele == '*');
    }
    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if((s[i] == '?') or (s[i] == '*')) continue;
        if(i < (s.size() - 1) && s[i + 1] == '?') {
            if(n < k) {
                n++;
                res += s[i];
            }
        }
        else if(i < (s.size() - 1) && s[i + 1] == '*') {
            while(n < k) {
                n++;
                res += s[i];
            }
        }
        else res += s[i];
    }
    if(res.size() != k) {
        cout << "Impossible";
        return;
    }
    cout<<res<<"\n";

}
 
signed main()
{
    GODSPEED
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}