#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <cassert>
#include <unordered_map>
using namespace std;
#define fastIO std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define trace(x) cout << '>' << #x << ':' << x << "\n" 
#define trace2(x,y) cout<< '>' << #x << ':' << x << " | " << #y << ':' << y << "\n" 
#define trace3(a,b,c) cout<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n" 
#define $(x) {if (DEBUG) {cout << __LINE__ << ": "; {x} cout << endl;}}
#define _(x) {cout << #x << " = " << x << " ";}

const double E = 1e-8;
const double PI = acos(-1);

int n, b, a[1000];

void solve () {
    cin >> n >> b;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    // sort (a, a+n);
    int ans=0;

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);

    solve();
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
}


// REMOVE DUPLICATES FROM STRING
// sort(a.begin(), a.end());
//     auto res = unique(a.begin(), a.end()); 
//     a = string(a.begin(), res);

// CONVERT CHAR TO INT
// char c - '0'

// GCD AlGORITHM
// int gcd(int a, int b) 
// { 
//     if (b == 0) return a;
//     return gcd(b, a % b);  
// }

// MAX SUBARRAY KADANES ALGORITHM
// int best = 0, sum = 0;
// for (int k = 0; k < n; k++) {
//     sum = max(array[k],sum+array[k]);
//     best = max(best,sum);
// }

// BINARY SEARCH JUMP METHOD
// int k = 0;
// for (int b = n/2; b >= 1; b /= 2) {
//     while (k+b < n && array[k+b] <= x) k += b;
// }
// if (array[k] == x) {
// // x found at index k
// }

// GENERATE SUBSETS OF {0,1...n-1}
// void search(int k) {
//     if (k == n) {
//         // process subset   
//     } else {
//         search(k+1);
//         subset.push_back(k);
//         search(k+1);
//         subset.pop_back();
//     }
// }

// GENERATE PERMUTATIONS OF {0,1...n-1}
// vector<int> permutation;
// for (int i = 0; i < n; i++) {
//     permutation.push_back(i);
// }
// do {
//     // process permutation
// } while (next_permutation(permutation.begin(),permutation.end()));

// HUFFMAN CODING

//CHECK IS PRIME
// bool IsPrime(ll number)
// {   
//     if (number == 2 || number == 3) return true;
//     if (number % 2 == 0 || number % 3 == 0) return false;
//     ll divisor = 6;
//     while (divisor * divisor - 2 * divisor + 1 <= number)
//     {
//         if (number % (divisor - 1) == 0) return false;
//         if (number % (divisor + 1) == 0) return false;
//         divisor += 6;
//     }
//     return true;
// }