#include <bits/stdc++.h>

using namespace std;    
#define fastIO std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define trace(x) cout << '>' << #x << ':' << x << "\n" 
#define trace2(x,y) cout<< '>' << #x << ':' << x << " | " << #y << ':' << y << "\n" 
#define trace3(a,b,c) cout<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n" 
#define ll long long

int n, best = INT_MAX;
string s;

void solve () {
    cin >> n >> s;
    int a[n];
    rep(i, 0, n) cin>> a[i];
    for(int i=1;i<n;i++) {
        if(s[i]=='L' && s[i-1]=='R') {
            best = min(best, (a[i]-a[i-1])/2);
        }
    } 
    if(best == INT_MAX) cout << -1;
    else cout << best;
}

int main() {    
    fastIO;
    solve();
}