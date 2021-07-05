#include <bits/stdc++.h>
using namespace std;
#define int        long long
#define pb        push_back
#define ppb        pop_back
#define pf        push_front
#define ppf        pop_front
#define all(x)        (x).begin(),(x).end()
#define tr(x, i)     for(typeof (x).begin() i = x.begin(); i != x.end(); i++)
#define sz(x)        (int)((x).size())
#define fr         first
#define sc        second
#define pii        pair<int,int>
#define rep(i,a,b)    for(int i=a;i<b;i++)

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

const int N=0;

void solve(){
    int n;
    cin>>n;
    int i = 1; // let i = numerator
    int j = 1; // let j = denominator
    int k = 1; // to keep the check of no. of terms
         
    // loop till k is not equal to n
    while (k < n)
    {
        j++ , k++;
         
        // check if k is already equal to N
        // then the first term is the required
        // rational number
        if (k == n)
            break;
         
        // loop for traversing from right to left
        // downwards diagonally
        while (j > 1 && k < n) {
            i++, j--, k++;
        }
         
        if (k == n)
           break;
         
        i++, k++;
         
        if (k == n)
           break;
         
        // loop for traversing from left
        // to right upwards diagonally
        while (i > 1 && k < n) {
            i--, j++, k++;
        }       
    }   
    cout << "TERM "<<n<<" IS "<<i<<"/"<<j<<"\n";
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}