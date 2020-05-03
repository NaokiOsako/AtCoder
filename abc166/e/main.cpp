#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N, ans=0, tmp;
    cin >> N;
    vector<ll> a(N), add(2e7, 0), sub(2e7, 0);
    for(ll i=0; i<N; i++){
	cin >> a[i];
	tmp = (i+1) + a[i];
	if(tmp<2e7)
	    add[tmp]++;
	tmp = (i+1) -a[i];
	if (tmp>=0 && tmp<2e7)
	    sub[tmp]++;
    }

    for(ll i=0; i<2e7; i++){
	ans += add[i] * sub[i];
    }

    cout << ans << endl;
} 


