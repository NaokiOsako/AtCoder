#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int T, N, M, ans=0;
    bool flag=true;
    cin >> T;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
	cin >> a[i];
    }
    cin >> M;
    vector<int> b(M);
    for(int i=0; i<M; i++){
	cin >> b[i];
    }
    int cntN=0, cntM=0;
    while(true){
	if(a[cntN]<=b[cntM] && b[cntM]<=a[cntN]+T){
	    cntN++;
	    cntM++;
	}
	else{
	    cntN++;
	}
	if(cntM==M)
	    break;
	else if(cntN==N){
	    flag=false;
	    break;
	}
    }

    cout << (flag? "yes": "no") << endl;
} 


