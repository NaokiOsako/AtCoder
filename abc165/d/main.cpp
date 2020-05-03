#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll A, B, N, x;
    cin >> A >> B >> N;
    x = (N>B-1 ? B-1: N);    
    cout << (A*x)/B << endl;
} 


