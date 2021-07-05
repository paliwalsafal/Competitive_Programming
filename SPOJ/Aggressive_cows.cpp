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
#define dbg(x)       cout<<#x<<" = "<<x<<ln
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
bool can_place(vector<int> &v,int n,int cows,int dis)
{
    int co_ord = v[0],cnt = 1 ;
     rep(i,1,n)
     {
         if(v[i] - co_ord >= dis){
             cnt++;
             co_ord = v[i];
         }
     }
     if(cnt >= cows) return true;
     return false;
}
 
void solve(int tc =0){
    int n,cows;
    cin>>n>>cows;
    vector <int> v(n);
    for ( int &x : v) cin >> x;
    sort(all(v));
    int low = 1;
    int high = v[n-1]-v[0];
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(can_place(v,n,cows,mid)) low = mid+1;
        else high = mid-1;
    }
    cout<<high<<"\n";
}
 
signed main()
{
    fast_cin();
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}