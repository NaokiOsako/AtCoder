#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N, ans=0, r=0, g=0, b=0;
    cin >> N;
    string s;
    cin >> s;

    for(int i=0; i<N; i++){
	if(s[i]=='R')
	    r++;
	else if(s[i]=='G')
	    g++;
	else if(s[i]=='B')
	    b++;
    }
    for(int i=0; i<N; i++){
	if(s[i]=='R'){
	    ans += g*b;
	    r--;
	}
	else if(s[i]=='G'){
	    ans += r*b;
	    g--;

	}
	else if(s[i]=='B'){
	    ans += r*g;
	    b--;
	}
    }
    for(int st=0; st<N; st++){
	for(int d=0; d<N; d++){
	    if(st+2*d>=N)
		break;
	    if(s[st]==s[st+d] || s[st+d]==s[st+2*d] || s[st+2*d]==s[st])
		;
	    else
		ans--;
	}
    }
    cout << ans << endl;
} 


