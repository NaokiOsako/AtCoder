#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=1e9;
    cin >> N;
    vector<int> a(N);

    for(int i=0; i<N; i++){
	cin >> a[i];
    }

    for(int i=0; i<(1<<N); i++){
	int tmp=i;
	int ab=0, bc=0;
	for(int j=0; j<N; j++){
	    if(tmp&1){
		ab+=a[j];
	    }
	    else{
		bc+=a[j];
	    }
	    tmp = tmp>>1;
	}
	ans = min(ans, max(ab, bc));
    }
    cout << ans << endl;
} 


