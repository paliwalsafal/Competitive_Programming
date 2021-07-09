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
    int n,q,k;
    cin>>n>>q>>k;
    vector <int> v(n);
    for(int &x : v) cin>>x;
    vector<int> dis(n);
    for(int i=0;i<n;i++){
        if(i==0){
            if(n != 1){
                dis[i] = v[1]-2;
            }
        }
        if(i != 0 && i != n-1){
            dis[i] = v[i+1] - v[i-1] - 2;
        }
    }
    int dissum[n];
    dissum[0]=0;
    for(int i=1;i<n-1;i++){
        dissum[i] = dissum[i-1] + dis[i];
    }
        while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        if(l==r)cout<<k-1<<'\n';
        else{
            int ans=v[l+1]-2+k-v[r-1]-1;
            ans += dissum[r-1] - dissum[l];
            cout<<ans<<'\n';
        }
    }
}
 
signed main()
{
    fast_cin();
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}