#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string S;
    ll ans=0;
    string tmp="";
    cin >> S;

    for(int i=0; i<pow(2, S.size()-1); i++){
	int bit=i;
	for(int j=0; j<S.size(); j++){
	    tmp += S[j];
	    if(bit&1){
		ans += stoll(tmp);
		tmp = "";
	    }
	    bit = bit>>1;
	}
	ans += stoll(tmp);
	tmp = "";
    }


    cout << ans << endl;
} 


