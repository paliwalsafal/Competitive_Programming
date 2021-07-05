#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int t;
long long n;
long long sum;
long long temp;
long long i;
cin>>t;
while(t--){
	cin>>n;
	i = 0;
	sum = 0;
	while(i<n){
		cin>>temp;
		sum += temp%n;
		i++;
	}
	if(sum%n == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
return 0;
}
