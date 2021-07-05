#include <bits/stdc++.h>  
using namespace std;


signed main()
{
    int n;
    cin>>n;
    set <int> s;
    vector <int> v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
        s.insert(x);
    }
    int sums = 0,sumv = 0;
    for(int i : s)
    {
        sums += i;
    }
    for(int j : v)
    {
        sumv += j;
    }

    int ans = 2*sums - sumv;
    cout<<ans<<"\n";
    return 0;
}