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
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
const long long INF=1e18;
const int32_t mod=1e9+7;
 
const int N=1e5+5;
 
 
void solve(int tc =0){
    int a,b;
    cin>>a>>b;
    int init = __gcd(a,b);
    if(a==b) cout<<0<<" "<<0<<"\n";
    else if(b==a+1 or a==b+1) cout<<1<<" "<<0<<"\n";
    else {
        int ans = abs(a-b);
        int moves = min(a,b);
        if(__gcd(a,b) == ans) moves = 0;
        else {
            int key = (max(a,b)/ans+1)*ans - max(a,b);
            int key2 = max(a,b) - (max(a,b)/ans)*ans;
            moves = min({key,key2,moves});
            
        }
        cout<<ans<<" "<<moves<<"\n";
    }
}
 
signed main()
{
    fast_cin();
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}