#include<bits/stdc++.h>
using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};
int C[6];
int N, ans = 0;

int main(){
    cin >> N;    
    for(int i=0; i<6; i++)
	cin >> C[i];

    for(int i=5; i>=0; i--){
	int tmp = min(N/V[i], C[i]);
	N -= tmp * V[i];
	ans += tmp;	
    }

    cout << ans << endl;
}

