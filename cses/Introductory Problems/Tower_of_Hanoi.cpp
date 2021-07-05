#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
#define ll long long
void toh(int from, int to, int use, int m)
{
	if(m>0){
		toh(from , use , to , m-1);
		cout<<from<<" "<<to<<ln;
		toh(use , to , from , m-1);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<(1<<n)-1<<ln;
	toh(1,3,2,n);
	return 0;
} 