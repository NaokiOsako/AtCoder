#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b){
    return b? gcd(b, a%b): a; 
}


int main() {
    ll N, ans=0, tmp;
    cin >> N;

    for(ll i=1; i<=N; i++){
	for(ll j=1; j<=N; j++){
	    for(ll k=1; k<=N; k++){
		tmp = gcd(i, j);
		tmp = gcd(tmp, k);
		ans += tmp;
	    }
	}
    }


    cout << ans << endl;
} 


