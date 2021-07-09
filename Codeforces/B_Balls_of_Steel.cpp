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
    int arr[n][2];
    rep(i,0,n) {
        rep(j,0,2) {
            cin>>arr[i][j];
        }
    } 
    int key = 0;
    rep(i,0,n) {
        int r = 0;
        rep(j,0,n) {
            if(abs(arr[i][0]-arr[j][0]) + abs(arr[i][1]-arr[j][1]) > k) {
                break;
            }
            r++;
        } 
        if(r==n) {
            key = 1;
            cout<<1<<"\n";
            return;  
        }
    }
    if (key == 0) cout<<-1<<"\n";
}

 
signed main()
{
    fast_cin();
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}