    #include <bits/stdc++.h>
    using namespace std;
    #define int        long long
    #define pb        push_back
    #define ppb        pop_back
    #define pf        push_front
    #define ppf        pop_front
    #define all(x)        (x).begin(),(x).end()
    #define tr(x, i)     for(typeof (x).begin() i = x.begin(); i != x.end(); i++)
    #define sz(x)        (int)((x).size())
    #define fr         first
    #define sc        second
    #define pii        pair<int,int>
    #define rep(i,a,b)    for(int i=a;i<b;i++)
     
    const long long INF=1e18;
    const int32_t M=1e9+7;
    const int32_t MM=998244353;
     
    const int N=0;
     
    void solve(){
    int x,y,s;
    cin>>x>>y>>s;
    int n = (2*s)/(x+y);
    int d = (y-x)/(n-5);
    int a = x-2*d;
    cout<<n<<"\n";
    for(int i=1;i<=n;i++)
        cout<<a+(i-1)*d<<" ";
    }
     
    signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
    } 