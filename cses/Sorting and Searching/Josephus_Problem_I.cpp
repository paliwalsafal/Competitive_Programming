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
 
 void solve(int tc =0){
 int n;
 cin>>n;
 vector <int> children(n);
 rep(i,0,n) children[i] = i+1;
 while(children.size() > 1)
 {
 	vector <int> survivors;
 	rep(i,0,children.size())
 	{
 		if(i%2 == 1)
 			cout<< children[i] <<" ";
 		else
 			survivors.pb(children[i]);
 	}
 	if(children.size()%2 == 0)
 		children = survivors;
 	else
 	{
 		int starter = survivors.back();
 		survivors.ppb();
 		children.clear();
 		children.pb(starter);
 		for(int z : survivors)
 			children.pb(z);
 	} 
 }
 cout<<children[0];
 }
 
 signed main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
     
     int tc = 1;
     //cin >> tc;
     for (int t = 0; t < tc; t++) solve(t);
     return 0;
 }