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
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
 
const int N=0;
 
void solve(int tc =0){
int n,x;
cin>>n>>x;
vector <int> v1(n);
for(auto &x : v1) cin>>x;
vector <int> v2=v1;
sort(all(v1));
int i=0,j=v1.size()-1;
int a=0,b=0;
while(i<j)
{
	if(v1[i] + v1[j] < x) i++;
	else if(v1[i] + v1[j] > x) j--;
	else 
	{
		a= v1[i];
		b= v1[j];
		j--;
		i++;
		break;
	} 
}
if(a==0 && b==0) {cout<<"IMPOSSIBLE\n";
return;}
 
auto it1 = find(v2.begin(), v2.end(), a);
auto it2 = find(v2.begin(), v2.end(), b);
int one = it1 - v2.begin();
int num = it2 - v2.begin();
if(one==num){
auto it3 = find(v2.begin() + one + 1 , v2.end(), b);
int ans= it3 - v2.begin();
cout<<one+1<<" "<<ans+1<<"\n";
return;
}
if(one > num) swap(one,num);
cout<<one+1<<" "<<num+1<<"\n";
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
    
    int tc = 1;
    //cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}