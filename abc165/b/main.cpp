#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    long double N, ans=0, X;
    cin >> X;
    N=100;
    if(N>=X){
	cout << 0 << endl;
	return 0;
    }

    while(true){
	N *= 1.01;
	N = floor(N);
	ans++;
	if(N>=X)
	    break;
    }

    

    cout << ans << endl;
} 


