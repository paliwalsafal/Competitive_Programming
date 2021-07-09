#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
 
#define int          long long
#define all(x)       (x).begin(), (x).end()
#define sz(x)        ((int)(x).size())
#define rep(i,s,e)   for(int i = s; i < e; i++)
#define uniq(v)      (v).erase(unique(all(v)),(v).end())
#define rrep(i,s,e)  for(int i = s; i >= e; i--)
#define dbg(x)       cout<<#x<<" = "<<x<<endl
#define mp           make_pair
#define pb           push_back
#define ppb          pop_back
#define pf           push_front
#define ppf          pop_front
#define fi           first
#define se           second
#define gcd(a,b)     __gcd(a,b)
#define dbgv(x)     for(auto it=x.begin();it!=x.end();it++) printf("%d ",*it); printf("\n");
#define dbgvp(x)   for(auto it=x.begin();it!=x.end();it++) cout<<it->F<<' '<<it->S<<'\n'; 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
const long long INF=1e18;
const int32_t mod=1e9+7;
 
const int N=1e5+5;
 
 
void solve(int tc =0){
    int k;
    cin>>k;
    string ans = "";
    if(k == 1) ans += "4";
    else if(k >=2 and k<=36 ) {
        if(k&1) {
            int key = k/2;
            //dbg(key);
            rep(i,0,key) {
                ans += "8";
            }
            ans += "0";
        }
        else rep(i,0,k/2) {
            ans += "8";
        }
    }
    else ans += "-1";
    cout<<ans<<"\n";


}
 
signed main()
{
    fast_cin();
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}