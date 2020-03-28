#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N, ans=0;
    cin >> N;
    ll tmp = N/500;
    ans += tmp*1000;
    N -= tmp*500;
    tmp = N/5;
    ans += tmp*5;
    cout << ans << endl;
} 


