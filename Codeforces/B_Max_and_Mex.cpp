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
    int n,k;
    cin>>n>>k;
    vector <int> v;
    rep(i,0,n) {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(all(v));
    int max = v[n-1];
   // dbg(max);
    uniq(v);
    int mex;
    rep(i,0,v.size())
    {
        if(v[i] != i) {
            mex = i;
            break;
        }
        else mex = v.size();
    }
    //dbg(mex);
    if(k == 0) cout<<v.size()<<"\n";
    else if(max > mex) {
        double key = (double)(max + mex)/2;

        key = round(key);
        //dbg(key);
        if(binary_search(all(v),key)) cout<<v.size()<<"\n";
        else cout<<v.size()+1<<"\n";
    }
    else {
        cout<<v.size()+k<<"\n";
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