#include<bits/stdc++.h>
using namespace std;
#define INF 1e9

int N, A, ans = 2e9;
int main(){
    cin >> N ;
    int dp[N];
    int v[N];
    fill(dp, dp+N, INF);
    for(int i=0; i<N; i++)
	cin >> v[i];

    for(int i=0; i<N; i++)
	*lower_bound(dp, dp+N, v[i]) = v[i];
    ans = lower_bound(dp, dp+N, INF) -dp;
    
    cout << lower_bound(dp, dp+N, INF) << endl;
    cout << dp << endl;
    cout << ans << "\n";
}

