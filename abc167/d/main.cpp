#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N, K, ans=0, cnt=0, s, g=-1, syuuki=0, h=0;
    cin >> N >> K;
    vector<ll> a(N), flag(N, 0);
    
    for(ll i=0; i<N; i++){
	cin >> a[i];
    }
    s=1;
    while(true){
	cnt++;
	g = a[s-1];

	flag[g-1]++;
	if(flag[g-1]==3){
	    flag[g-1]--;
	    cnt--;
	    break;	    
	}
	
	s=g;	
    }
    for(ll i=0; i<N; i++){
	if(flag[i]==2)
	    syuuki++;
    }

    
    h = cnt -2*syuuki;
    K = h + (K-h)%syuuki;
    s=1;
    for(ll i=0; i<K; i++){
	g = a[s-1];
	s=g;
    }

    cout << g << endl;
} 


