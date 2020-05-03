#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, K, ans=0, d, tmp;
    cin >> N >> K;
    vector<int> a(N, 0);

    for(int i=0; i<K; i++){
	cin >> d;
	for(int j=0; j<d; j++){
	    cin >> tmp;
	    tmp--;
	    a[tmp]++;
	}
    }

    for(int i=0; i<N; i++){
	if(a[i]==0)
	    ans++;
    }

    cout << ans << endl;
} 


