#include<bits/stdc++.h>
using namespace std;
#define INF 1e9

int n, m, M, ans = 2e9;
int main(){
    cin >> n >> m >> M;
    int dp[300][300]; //n のm分割


    for(int i=0; i<=m; i++)
	dp[i][0] = 1;
	
    for(int i=1; i<=m; i++){
	for(int j=0; j<=n; j++){
	    if(j-i>=0)
		dp[i][j] = (dp[i-1][j] + dp[i][j-i]) % M;
	    else
		dp[i][j] = dp[i-1][j];
	}	
    }

    for(int i=1; i<=m; i++){
	for(int j=1; j<=n; j++){
	    cout << dp[i][j] << " ";		
	}
	cout << "\n";		
    }

    
    cout << dp[m][n] << "\n";
}

