#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, ans=0;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++)
	cin >> a[i];

    for(int i=0; i<N; i++){
	if(a[i]%2==0 || a[i]%3==2){
	    ans++;	    
	    a[i]--;
	    i--;
	}
    }
    cout << ans << endl;
}
