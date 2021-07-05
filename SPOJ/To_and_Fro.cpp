#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
 

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
 

signed main()
{
    int col;
    cin>>col;
    while(col!=0)
    {
    string s;
    cin>>s;
    int row=s.size()/col;
    char arr[row][col];
    int k = 0;
    for(int i=0; i<row; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<col; j++) arr[i][j] = s[k++];
        }
        else
        {
            for(int j=col-1; j>=0;j--) arr[i][j] = s[k++];
        }
    }
 
    for(int j=0; j<col; j++)
    {
        for(int i=0; i<row; i++) cout<<arr[i][j];
    }
    cout<<"\n";
    cin>>col;
    }
    return 0;
}