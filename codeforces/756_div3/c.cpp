#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define um unordered_map
#define pq priority_queue
#define sz(x) ((int)(x).size())
#define x first
#define y second
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

//https://www.bilibili.com/video/BV1Ji4y1o7Pz?t=832.9

const int N = 2e5 + 10;
int a[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (a[1] != n && a[n] != n) {
        cout << -1 << endl;
        return;
    }
    if (a[1] == n) {
        cout << n << ' ';
        for (int i = n; i >= 2; i--) cout << a[i] << ' ';
        cout << endl;
    }
    else if (a[n] == n) {
        for (int i = n - 1; i >= 1; i--) cout << a[i] << ' ';
        cout << n << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t --) solve();
    return 0;
}