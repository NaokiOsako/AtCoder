#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N, K, ans=0;
    cin >> N >>K;

    ans = min(N%K, abs(N%K-K));
    cout << ans << endl;
} 


