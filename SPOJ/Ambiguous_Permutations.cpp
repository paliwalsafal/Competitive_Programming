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

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int n;
cin>>n;
while(n != 0){
    vector <int> v(n),v1(n);
    for(int i=0;i<n;i++) cin>>v[i];
    rep(i,0,n)
{
    v1[v[i]-1] = i+1;
}
if(v == v1) cout<<"ambiguous\n";
else cout<<"not ambiguous\n";
cin>>n;
}
return 0;
}