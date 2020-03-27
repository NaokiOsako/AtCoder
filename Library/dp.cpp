#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;


int main() {
    // 入力
    vector<long long> h(100010, INF);
    // DP テーブル
    vector<long long> dp(100010, INF);

    int N, K;
    cin >> N ;
    for (int i = 0; i < N; i++)
	cin >> h[i];

    // 初期条件
    dp[0] = 0;

    // ループ
    for (int i = 0; i < N; i++) {
        chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }

    // 答え
    cout << dp[N-1] << endl;
}
