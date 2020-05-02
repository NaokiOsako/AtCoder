#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N, K, ans=0, min=0, max=0;
    cin >> N >>K;

    for(int i=0; i<K; i++){
	min += i;
    }
    for(int i=N; i>=N+1-K; i--){
	max += i;
    }
    for(ll i=K; i<=N+1; i++){
	if(min>max)
	    break;
	ans += max-min+1;
	ans %= (ll)(1e9+7);
	
	min += i;
	max += N-i;
    }

    cout << ans << endl;
} 


