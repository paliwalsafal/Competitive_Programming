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
#define GODSPEED     ios:: sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(15);
 
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
 
const long long INF=1e18;
const int32_t mod=1e9+7;
 
void solve(int tc=0)
{
   int n, a, b;
   cin >> n;
   vector<int> v1, v2;
   int s1 = 0, s2 = 0;
   rep(i,0,n) cin >> a, v1.pb(a), s1 += a;
   rep(i,0,n) cin >> a, v2.pb(a), s2 += a;
   if (s1 != s2){
         cout << "-1\n";
         return;
   }
   vector<pair<int,int>> v;
   rep(i,0,n){
         while (v1[i] != v2[i]){
            if (v1[i] > v2[i]){
               rep(j, i + 1, n){
                     if (v1[j] < v2[j]){
                        v.pb({i + 1, j + 1});
                        v1[i]--, v1[j]++;
                        break;
                     }
               }
            }
            else{
               rep(j, i + 1, n){
                     if (v1[j] > v2[j]){
                        v.pb({j + 1, i + 1});
                        v1[j]--, v1[i]++;
                        break;
                     }
               }
            }
         }
   }
   
   cout << sz(v)<<"\n";
   for (auto e : v) cout << e.fi << " " << e.se << "\n";
}
 
signed main()
{
   GODSPEED
   int tc=1;
   cin >> tc;
   for(int t=0;t<tc;t++) solve(t);
   return 0;
}