#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
	cin >> a[i];
    }
    vector<int> b(N, 0);
    
    for(int i=0; i<N; i++){
	for(int j=0; j<N; j++){
	    if(ans<=j){
		b[ans] = a[i];
		ans++;
		break;
	    }else if(b[j]>=a[i]){
		b[j]=a[i];
		break;
	    }
	}
    }
    cout << ans << endl;
} 


