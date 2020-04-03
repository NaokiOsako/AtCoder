#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, K;
    cin >> N >> K;
    double ans=0;
    vector<int> a(N);

    for(int i=0; i<N; i++){
	cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i=N-K; i<N; i++){
	ans = (ans+a[i])/2;
    }
    printf("%.10f\n", ans);
} 


