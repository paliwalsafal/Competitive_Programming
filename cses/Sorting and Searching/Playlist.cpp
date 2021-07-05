#include <bits/stdc++.h>
using namespace std;
#define int        long long
#define pb         push_back
#define ppb        pop_back
#define pf         push_front
#define ppf        pop_front
#define all(x)     (x).begin(),(x).end()
#define tr(x, i)   for(typeof (x).begin() i = x.begin(); i != x.end(); i++)
#define sz(x)      (int)((x).size())
#define fr         first
#define sc         second
#define pii        pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
 
const int N=0;
 
void solve(int tc =0){
int n;
cin>>n;
int a[n];
rep(i,0,n) cin>>a[i];
map<int, int> index;
    int i=0,j=0,ans = 0;
    while(i<n){        
        j = max(index[a[i]], j); //
 
        ans = max(ans, i - j + 1);
 
        index[a[i]] = i + 1;
 
        i++;
    }
    cout<<ans<<"\n";
 
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int tc = 1;
    //cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}