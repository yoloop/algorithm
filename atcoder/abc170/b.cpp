#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define um unordered_map
#define pq priority_queue
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define endl '\n'
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
mt19937 mrand(random_device{}());
const ll mod = 1000000007;
int rnd(int x) { return mrand() % x;}
ll mulmod(ll a, ll b) {ll res = 0; a %= mod; assert(b >= 0); for (; b; b >>= 1) {if (b & 1)res = (res + a) % mod; a = 2 * a % mod;} return res;}
ll powmod(ll a, ll b) {ll res = 1; a %= mod; assert(b >= 0); for (; b; b >>= 1) {if (b & 1)res = res * a % mod; a = a * a % mod;} return res;}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;}
//head

//a + b = x
//2a+4b = y

// void solve() {
//     int x, y;
//     cin >> x >> y;
//     if ((y - 2 * x) / 2 <= x && (y - 2 * x) % 2 == 0 && (4 * x - y) / 2 <= y && (4 * x - y) % 2 == 0) puts("Yes");
//     else puts("No");
// }

void solve() {
    int x, y;
    cin >> x >> y;
    if (y % 2 == 0 && y >= 2 * x && y <= 4 * x) puts("Yes");
    else puts("No");
}

int main() {
    int t = 1;
    // cin >> t;
    while (t --) solve();
    return 0;
}