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

bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}
 
void solve(int tc=0)
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector <int> Presum(n);
    Presum[0] = s[0] - '0';

    for (int i = 1; i < n; i++) {
        Presum[i] = Presum[i - 1] + (s[i] - '0');
    }

    for (int i = 1; i <= n - 1; i++) {
 
        // sum from 0th index to i-1th index
        int sum = Presum[i - 1];
        int presum = 0;
        int it = i;

        int flag = 0;
 
        // iterate till the last number
        while (it < n) {
            // sum of segments
            presum += s[it] - '0';

            if (presum == sum) {
                presum = 0;
                flag = 1;
            }
            else if (presum > sum) {
                break;
            }
            it++;
        }

        if (presum == 0 && it == n && flag == 1) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
 
signed main()
{
    GODSPEED
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}