#include <bits/stdc++.h>
using namespace std;
#define int		long long
#define pb		push_back
#define ppb		pop_back
#define pf		push_front
#define ppf		pop_front
#define all(x)		(x).begin(),(x).end()
#define tr(x, i) 	for(typeof (x).begin() i = x.begin(); i != x.end(); i++)
#define sz(x)		(int)((x).size())
#define fr 		first
#define sc		second
#define pii		pair<int,int>
#define rep(i,a,b)	for(int i=a;i<b;i++)
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
 
const int N=0;
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
 
string s;
cin>>s;
int c[26]={}, c1=0; //to store the count of all characters in string c[26]
for(char d : s){
	c[d-'A']++; // increment c[0] if d ='A' increment c[1] if d='B'
}
for(int i=0;i<26;++i){
	if(c[i]%2 == 1) c1++;  // find number of odd counts
}
 
 
if(c1>1) {cout<<"NO SOLUTION\n";
return 0;}
 
 
string t; // the palindrome string 
for(int i=0;i<26;i++)
{
	if(c[i]%2 == 0){
		for(int j=0;j<c[i]/2;j++) // ifc[i] is even add half count of that character to string 
			t+=(char)('A'+ i);
	}
}
cout<<t;  				// print the string
for(int i=0;i<26;i++)
{
	if(c[i]%2 == 1){
		for(int j=0;j<c[i];j++)  // if c[i] odd print all  characters of that 
			cout<<(char)('A'+i);
	}
}
reverse(t.begin(),t.end()); //reverse the string made before
cout<<t; //print it reversed
return 0;
}