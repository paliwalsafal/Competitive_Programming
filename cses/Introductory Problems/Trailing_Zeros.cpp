#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n, count=0;
	cin>>n;
	for(int i = 5 ; n/i >= 1 ; i*=5)
	{
		count += n/i;
	}
	cout<<count<<"\n";
}