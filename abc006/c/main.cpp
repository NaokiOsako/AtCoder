#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, M;
    cin >> N >> M;

    int a, b, c, tmp;

    for(int c=0; c<=N; c++){
	b = M-2*N-2*c;
	a= N-b-c;
	if(a>=0 && b>=0 && c>=0 &&2*a+3*b+4*c==M){
	    cout << a<<" " << b <<" "<<c<<endl;
	    return 0;
	}
    }
    
    cout << -1<<" " << -1 <<" "<<-1<<endl;
} 


