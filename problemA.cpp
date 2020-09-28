#include <bits/stdc++.h>

using namespace std;
#define fastIO std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define trace(x) cout << '>' << #x << ':' << x << "\n" 
#define trace2(x,y) cout<< '>' << #x << ':' << x << " | " << #y << ':' << y << "\n" 
#define trace3(a,b,c) cout<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n" 
#define ll long long

string t, str;

void solve () {
    cin >> str;
    string output;
    str.erase(str.find("W"),1);
    cout << str;
    // while (str.size() != 0) {
    //     if(str.find("W") != string::npos) {
    //     output.push_back('W');
    //     str.erase(str.find("W"));
    //     }
    //     if(str.find("D") != string::npos) {
    //         output.push_back('D');
    //         str.erase(str.find("W"));
    //     }
    //     if(str.find("L") != string::npos) {
    //         output.push_back('L');
    //         str.erase(str.find("W"));
    //     }
    // }
} 

int main() {    
    fastIO;
    solve();
}