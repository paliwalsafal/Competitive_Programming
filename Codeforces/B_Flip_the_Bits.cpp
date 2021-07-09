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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    if(a == b) {
        cout<<"YES"<<"\n";
        return;
    }
    int zcnt =0 , ocnt = 0;
    rep(i,0,n) {
        if(a[i] == '0') zcnt++;
        else ocnt++;
    }
    int f = 1;
    bool changed = false;
    for (int i = n-1; i >= 0 && f==1; i--) {
        if(a[i] != b[i] and !changed || a[i] == b[i] and changed) {
            if(zcnt == ocnt) changed = !changed;
            else {
                f=0;
                break;
            }
        }
        if(a[i] == '1') ocnt--;
        else zcnt--;
    }
    if(f==1) {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
 
signed main()
{
    fast_cin();
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}