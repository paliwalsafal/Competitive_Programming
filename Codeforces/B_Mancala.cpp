#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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
#define mp           make_pair
#define pb           push_back
#define ppb          pop_back
#define pf           push_front
#define ppf          pop_front
#define fi           first
#define se           second
#define gcd(a,b)     __gcd(a,b)
#define printv(x)     for(auto it=x.begin();it!=x.end();it++) cout<<*it<<' '; cout<<endl
#define printvp(x)   for(auto it=x.begin();it!=x.end();it++) cout<<it->fi<<' '<<it->se<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
const long long INF=1e18;
const int32_t mod=1e9+7;
 
const int N=1e5+5;
int cnt,summ;
 
void solve(int tc =0){
    vector<int> arr(14);
    for(int i=0;i<14;i++)
        cin>>arr[i];
 
    int ans = 0;
    for(int i=0;i<14;i++){
        if(!arr[i])
            continue;
 
        vector<int> tmp = arr;
        int per_hole = tmp[i]/14;
        int rem = tmp[i]%14;
 
        tmp[i]=0;
        for(int j=0;j<14;j++)
            tmp[j]+=per_hole;
 
        int pos = (i+1)%14;
        while(rem--){
            tmp[pos]++;
            pos = (pos+1)%14;
        }
 
        int sum = 0;
        for(int j=0;j<14;j++)
            if(tmp[j]%2==0)
                sum+=tmp[j];
        ans = max(ans , sum);
    }
    cout<<ans;
}
 
signed main()
{
    fast_cin();
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}