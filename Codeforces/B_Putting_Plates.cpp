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
    int n,k;
    cin>>n>>k;
    int arr[n][k] = {0};
    
    rep(i,0,n) {
        rep(j,0,k) arr[i][j]=0;
    }

    for(int i = 0;i<k;i += 2) {
        arr[0][i] = 1;
    }

    if(arr[0][k-1] == 0) {
        for(int i = 2 ;i < n ; i += 2) {
            arr[i][k-1] = 1;
    }
        }
    else if(arr[0][k-1] == 1){
        for(int i = 2 ;i < n ; i += 2) {
            arr[i][k-1] = 1;
        }
    }

    if(arr[n-1][k-1] == 0) {
        for(int i = k-3 ;i >= 0 ; i -= 2) {
            arr[n-1][i] = 1;
        }
    }
    else if(arr[n-1][k-1] == 1){
        for(int i = k-1 ;i >= 0 ; i -= 2) {
            arr[n-1][i] = 1;
        }
    }

    if(arr[n-1][0] == 0) {
        for(int i = n-3 ;i > 0 ; i -= 2) {
            arr[i][0] = 1;
        }
    }
    else if(arr[n-1][0] == 1){
        for(int i = n-1 ;i > 0 ; i -= 2) {
            arr[i][0] = 1;
        }
    }

    if(arr[1][0] == 1) arr[1][0] =0 ;
    


    rep(i,0,n) {
        rep(j,0,k) cout<<arr[i][j];
        cout<<"\n";
    }
    cout<<"\n";

}
 
signed main()
{
    GODSPEED
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}