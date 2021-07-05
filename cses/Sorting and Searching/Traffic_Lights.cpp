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
// gonna use a lot of stl set multiset next prev 
//length etc just try to understand 
void solve(int tc =0){
int x,n;
cin>>x>>n;
set <int> pos;
multiset <int> len; //it will contain lengths when added new street light
pos.insert(0); 
pos.insert(x);
len.insert(x-0); //initially it contains x
rep(i,0,n)
{
	int added;
	cin>>added; 
	pos.insert(added);  
	auto iterator = pos.find(added); 
	int prevVal = *prev(iterator); //iterator to prev
	int nextVal = *next(iterator);  // iterator to next
	len.erase(len.find(nextVal-prevVal));//vo length jo next - prev ki thi vo hatado(ek hi hatana hai jyada nhi )
	len.insert(added-prevVal);//do nyi lengths add kardo
	len.insert(nextVal-added);
	cout << *len.rbegin() << " ";//give last element of 
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