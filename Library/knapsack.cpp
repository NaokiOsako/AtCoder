#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int W, N, K, ans=0;
    cin >> W;
    cin >> N >> K;
    vector<pair<int, int>> a(N+1);// size, value
    for(int i=0; i<N; i++)
	cin >> a[i].first >> a[i].second;

    a[N].first=0;
    a[N].second=0;
    sort(a.begin(), a.end());

    
    int dp[N+1][W+1];//dp[item][weight]
        
    for(int i=0; i<W+1; i++)
	dp[0][i] = 0;

    for(int i=1; i<N+1; i++){
	for(int j=0; j<W+1; j++){
	    if(j >= a[i].first){
		dp[i][j] = max(dp[i-1][j-a[i].first]+a[i].second, dp[i-1][j]);
	    }else{
		dp[i][j] = dp[i-1][j];
	    }
	}
    }


    // for(int i=0; i<N+1; i++){
    // 	for(int j=0; j<W+1; j++){
    // 	    cout << dp[i][j] << " ";        
    // 	}
    // 	cout << endl;        
    // }


    cout << dp[N][W] << "\n";        

} 

