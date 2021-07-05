#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
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
// i don't really know how this works refer to youtube
void solve(int tc =0){
  int n,k;
  cin >> n  >> k; 
  oset<int> children;
  for(int i=1; i<=n; i++)
  	children.insert(i);
  int start = 0;
  while(children.size() > 0)
  {
  	start %= children.size();
  	int positionToRemove = (start+k)%children.size();
  	start = positionToRemove;
  	auto t = children.find_by_order(positionToRemove);
  	cout<< *t << " ";
  	children.erase(t);
  }
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int tc = 1;
    //cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}