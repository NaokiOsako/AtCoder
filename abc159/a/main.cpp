#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M, ans=0;
    cin >> N >> M;

    ans = N*(N-1)/2 + M*(M-1)/2;
    cout << ans << endl;
}


