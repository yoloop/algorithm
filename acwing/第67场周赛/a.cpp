/*      　  　▃▆█▇▄▖
*　 　 　 ▟◤▖　　　◥█▎
*   　 ◢◤　 ▐　　　 　▐▉
*　 ▗◤　　　▂　▗▖　　▕█▎
*　◤　▗▅▖◥▄　▀◣　　█▊
*▐　▕▎◥▖◣◤　　　　◢██
*█◣　◥▅█▀　　　　▐██◤
*▐█▙▂　　     　◢██◤
*◥██◣　　　　◢▄◤
* 　　▀██▅▇▀
*****************************114514*/


/*
只用7，1拼接就行了，需要的火柴最少，位数最多，最大
2: 首位1 后面0个1
3: 首位7 后面0个1
4: 首位1 后面1个1
5: 首位7 后面2个1
……
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0)cout << 1;
        else cout << 7;
        for (int i = 1; i < n / 2; i++) cout << 1; // n/2 - 1 个 1
        puts("");
    }
}
