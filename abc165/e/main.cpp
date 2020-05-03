#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, M, l, r;
    cin >> N >>M;
    l = N/2;
    r = l+1;
    if(N%2==1)
	r++;

    for(int i=0; i<M; i++){
	cout << l-i << " " << r+i<< endl;
    }


} 


