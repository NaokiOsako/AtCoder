#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for(; ; ){
	c -= b;
	a -= d;
	if(c<=0){
	    cout << "Yes" << endl;
	    return 0;
	}
	else if(a<=0){
	    cout << "No" << endl;
	    return 0;
	}
	
    }


} 


