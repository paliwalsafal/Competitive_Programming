#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln '\n'
vector<string> gray(int n){
    vector<string> actual;
    if(n==1)
    {
        actual.push_back("0");
        actual.push_back("1");
        return actual;
    }
    vector<string> previous = gray(n-1);
    for(int i = 0 ; i<(int)previous.size();i++)
    {
        string s;
        s += '0';
        s += previous[i];
        actual.push_back(s);
    }
    for(int j = (int)previous.size()-1; j>=0; j--)
    {
        string s;
        s += '1';
        s += previous[j];
        actual.push_back(s);
    }
    return actual;
}
 
int main()
{
    ll n;
    cin>>n;
    vector<string> answer;
    answer = gray(n);
    for(string bitstring : answer)
        cout<< bitstring<<ln;
return 0;
}