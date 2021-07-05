#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
#define ll long long 
int main()
{
	string s;
	cin>>s;
	std::vector<string> permutations;
	sort(s.begin(),s.end());
	do
	{
		permutations.push_back(s);
	} while (next_permutation(s.begin(),s.end()));
	cout << permutations.size() << ln;
	for(string permutation : permutations)
		cout << permutation << ln;
}