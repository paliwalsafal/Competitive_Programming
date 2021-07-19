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
#define pb           push_back
#define ppb          pop_back
#define pf           push_front
#define ppf          pop_front
#define fi           first
#define se           second
#define printv(x)    for(auto it=x.begin();it!=x.end();it++) cout<<*it<<' '; cout<<endl
#define printvp(x)   for(auto it=x.begin();it!=x.end();it++) cout<<it->fi<<' '<<it->se<<endl
#define fast_cin()   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
 
const long long INF=1e18;
const int32_t mod=1e9+7;
int pre[123454];
 
void solve(int tc =0){
    int n,m,q;
    cin>>n>>m>>q;
    string s,t;
    cin>>s>>t;
    int i,j;
    int ans=0;
    rep(i,0,n-m+1){
    	ans=1;
    	rep(j,0,m){
    		if(s[i+j]!=t[j]){
    			ans=0;
    		}
    	}
    	pre[i+1]=pre[i]+ans;
    }
    int l,r;
    rep(i,0,q){
    	cin>>l>>r;
    	if(r-m+1<l){
    		cout<<0<<endl;
    	}
    	else{
    		cout<<pre[r-m+1]-pre[l-1]<<endl;
    	}
    }
        
        
    }
    

 
signed main()
{
    fast_cin();
    int tc=1;
    //cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}