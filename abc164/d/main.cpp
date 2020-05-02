#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N, tmp, ans=0;
    string s, t;
    cin >> s;
    N=(int)s.size();

    // for(int i=0; i<N-3; i++){
    // 	for(int j=4; j<N-i+1; j++){
    // 	    t = s.substr(i, j);
    // 	    cout << t << endl;
    // 	    if(t[0]=='0')
    // 		break;
    // 	    tmp = stoi(t);
    // 	    // if(tmp%2019 == 0)
    // 	    // 	ans++;
    // 	}	
    // }


    // cout << ans << endl;
    tmp=1000;
    for(int i=0; i<14; i++){
	cout << tmp%2019 << endl;
	tmp*=10;
    }

} 


