    #include <bits/stdc++.h>
    using namespace std;
    #define LL long long
    #define N 100005
    #define MOD 1000000007
    #define dd double
    #define rep(i, n) for(int i = 0; i < n; i++)
    #define REP(i,a,b) for(int i=a;i<b;i++)
    #define rep1(i,b) for(int i=1;i<=b;i++)
    #define pb push_back
    #define mp make_pair
    #define clr(x) x.clear()
    #define sz(x) ((int)(x).size())
    #define F first
    #define S second
    int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ios_base& scientific (ios_base& str);
    LL n;
    cin>>n;
    double x = log2(n);
    if(int(x) == x){
        cout<<"TAK\n";
    }
    else cout<<"NIE\n";
    return 0;
    } 