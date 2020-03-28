#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int K, N, ans=0, maxD=0;
    cin >> K >>N;
    vector<int> a(N+1);

    for(int i=0; i<N; i++){
	cin >> a[i];	
    }
    a[N] = a[N-1]+a[0]+ (K-a[N-1]);

    for(int i=0; i<N; i++){
	maxD=max(maxD, a[i+1]-a[i]);
    }



    cout << K-maxD << endl;
} 


