#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0, A, B, C, K;
    cin >> A >> B >> C >> K;

    if(K >= A){
	ans += A;
	K -= A;
    }
    else{
	ans += K;
	K=0;
    }

    K -= B;

    if(K>=0)
	ans -= K;

    cout << ans << endl;
} 


