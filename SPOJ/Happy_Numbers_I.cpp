#include <bits/stdc++.h>  
using namespace std;

int square(int num)  
{  
    if(num == 0)  
        return 0;  
    else  
        return( (num%10) * (num%10) + square(num/10) );  
} 
int cnt = 1;
vector <int> v;
void solve(int n)
{
    int ini = square(n);
    if(binary_search(v.begin(),v.end(),ini)) {
        cout<<-1<<"\n";
        return;
    }
    else {
        v.push_back(ini);
    }

    if(ini == 1) cout<<cnt<<"\n";
    else {
        cnt++;
        solve(ini);
    }


}

signed main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}