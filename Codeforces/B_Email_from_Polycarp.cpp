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
        string s,t;
        cin>>s>>t;
        if(t.size()<s.size()){
            cout<<"NO"<<endl;
            return;
        }
        int n=s.size(),m=t.size();
        bool ans=true;
        int pos1=0,pos2=0;
        while(ans && pos1<n && pos2<m)
        {
            if(t[pos2]==s[pos1])
            {
                pos1++;
                pos2++;
            }
            else if(pos1==0||t[pos2]!=s[pos1-1])
            {
                ans=false;
                break;
            }
            else
            {
                while(pos2<m && t[pos2]==s[pos1-1])
                    pos2++;
            }
        }
        while(pos1==n && pos2<m && t[pos2]==s[pos1-1])
        {  
            pos2++;
        }
        if(!ans || pos1<n ||pos2<m)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
}
 
signed main()
{
    fast_cin();
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) solve(t);
    return 0;
}