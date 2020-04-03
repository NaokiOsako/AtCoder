#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, ans=0;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
	cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    for(int i=0; i<N; i++){
	if(a[i] != a[i+1]){
	    ans = a[i+1];
	    break;
	}
    }

    cout << ans << endl;
}
