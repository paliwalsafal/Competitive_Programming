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
int a[11111],n;

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
while (scanf("%d", &n) && n != 0) {
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int k = 0, i = 0;
    stack<int> st;
    while (i < n) {
      while (st.size() && st.top() == k + 1) k++, st.pop();
      if (a[i] != k + 1) st.push(a[i]);
      else k++;
      i++;
    }
    while (st.size() && st.top() == k + 1) k++, st.pop();
    puts(k == n ? "yes" : "no");
  }
return 0;
}