#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    if('a'<=S[0])
	S[0] -= 32;

    for(int i=1; i<S.size(); i++){
	if(S[i]<='Z')
	    S[i] += 32;
    }
    cout << S << endl;
    
}
