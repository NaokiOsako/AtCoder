#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll ans=0, N;
    cin >> N;

    for(int i=0; i<=N; i++){
	if(i%3!=0 && i%5!=0)
	    ans += i;
    }
    cout << ans << endl;
} 


