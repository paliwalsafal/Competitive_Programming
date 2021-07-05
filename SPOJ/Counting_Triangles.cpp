#include <bits/stdc++.h>  
using namespace std;

signed main()
{
    int tc=1;
    cin >> tc;
    for(int t=0;t<tc;t++) {
    long long n;
    scanf("%lld",&n);
    long long summ =(n*(n+2)*(2*n+1)/8);
    printf("%lld\n",summ);
    }
    return 0;
}