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
    typedef vector < int > vi;
    typedef vector < vi > vvi;
    typedef pair < int, int > ii;
     
    const long long INF=1e18;
    const int32_t M=1e9+7;
    const int32_t MM=998244353;
     
    const int N=0;
     
    void solve(int tc =0){
    int n,m,max1=-1,max2=-1;
        cin>>n>>m;
        int temp;
        for(int i=0;i<n;i++)
            {
            cin>>temp;
            if(temp>max1)
                max1=temp;
            }
            for(int i=0;i<m;i++)
            {
            cin>>temp;
            if(temp>max2)
                max2=temp;
            }
            if(max1>=max2)
                printf("Godzilla\n");
           else
                printf("MechaGodzilla\n");
    }
     
    signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
        
        int tc = 1;
        cin >> tc;
        for (int t = 0; t < tc; t++) solve(t);
        return 0;
    } 