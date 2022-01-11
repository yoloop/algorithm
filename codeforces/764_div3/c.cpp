#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define um unordered_map
#define pq priority_queue
#define sz(x) ((int)(x).size())
#define x first
#define y second
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

//https://codeforces.com/contest/1624/submission/142199055

void solve() {
    int n;
    cin >> n;
    pq<int> q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    for (int i = n; i; i --) {
        while (q.top() > i) {
            int x = q.top();
            q.pop();
            q.push(x / 2);
        }
        if (q.top() != i) {
            cout << "NO" << endl;
            return;
        }
        q.pop();
    }
    cout << "YES" << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t --) solve();
    return 0;
}