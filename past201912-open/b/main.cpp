#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0, state=0;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
	cin >> a[i];
    }
    state = a[0];

    for(int i=1; i<N; i++){
	if(state == a[i])
	    cout << "stay" << endl;
	else if ( state > a[i]){
	    cout << "down " <<abs(state-a[i]) << endl;
	    state =a[i];
	}
	else{
	    cout << "up " <<abs(state-a[i]) << endl;
	    state =a[i];
	}
    }
} 


