#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, X, K=0, sum=0;
    string s;
    cin >> N >> X;
    vector<int> a(N);

    for(int i=0; i<N; i++){
	cin >> a[i];
    }
    

    for(int i=0; i<N; i++){
	if((X>>i)&1 == 1)
	    sum += a[i];
    }

    cout << sum <<endl;
}


