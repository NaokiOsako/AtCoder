#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll func1(ll n, ll l, ll r){
    return     r/n-(l-1)/n;
}

ll gcd(ll a, ll b){
    return b? gcd(b, a%b): a; 
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll l, r, ans=0, m, sub=0, num=1, tmp, gcdnum;
    cin >> l >> r;
    cin >> m;
    vector<ll> n(m);
    for(int i=0; i<m; i++){
	cin >> n[i];
    }
    for(int i=0; i<m; i++){
	tmp = func1(n[i], l, r);
	cout << tmp << endl;

	gcdnum = gcd(num, n[i]);	
	num = lcm(num, n[i]);	
	if(gcdnum !=1){
	    tmp /= gcdnum+1;
	}
	tmp
	sub += tmp;
    }
    cout  << endl;
    cout << sub << endl;
    int num1=0, num2=0, num3=0;
    cout  << endl;
    for(ll i=l; i<=r; i++){

	if(i%7==0)
	    num1++;
	else if(i%39==0)
	    num2++;
	else if(i%51==0)
	    num3++;
	
	if(i%7==0)
	    ans++;
	else if(i%39==0)
	    ans++;
	else if(i%51==0)
	    ans++;
		
    }
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << ans << endl;
    // ans = r-(l-1)-sub;
    // cout << ans << endl;

}

