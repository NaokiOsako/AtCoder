#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll X, Y, A, B, C, ans=0;
    cin >> X >> Y >> A >> B >> C;
    vector<ll> p(A), q(B), r(C);

    for(int i=0; i<A; i++)
	cin >> p[i];
    for(int i=0; i<B; i++)
	cin >> q[i];
    for(int i=0; i<C; i++)
	cin >> r[i];

    sort(p.begin(), p.end(), greater<ll>());
    sort(q.begin(), q.end(), greater<ll>());
    sort(r.begin(), r.end(), greater<ll>());

    for(int i=0; i<X; i++)
	ans += p[i];    
    for(int i=0; i<Y; i++)
	ans += q[i];
    int x=X-1, y=Y-1, z=0;
    ll tmp;
    
    while(true){
	if(p[x]<q[y]){
	    if(x<0){
		tmp = q[y];
		y--;
	    }
	    else{
		tmp = p[x];
		x--;
	    } 
	}
	else{
	    if(y<0){
		tmp = p[x];
		x--;
	    }
	    else{
		tmp = q[y];
		y--;
	    }
	}
	if(tmp<r[z] && z<C){
	    ans -= tmp;
	    ans += r[z];
	    z++;
	}
	else{
	    break;
	}
	
    }
    cout << ans << endl;
} 


