#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll x, ans=0, tmp, it;
    cin >> x;
    
    for(ll i=-1e3; i<1e3; i++){
	tmp = -(x-i*i*i*i*i);
	if (tmp<=0) 
	    it=-1;
	else
	    it=1;
	for(ll j=0; ; j+=it){
	    ll a=j*j*j*j*j;
	    if(a ==tmp){
		cout << i << " " <<j<< endl;
		return 0;
	    }
	    if(a>tmp*it)
		break;
	}
    }

} 


