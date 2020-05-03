#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, M, ans=0;
    cin >> N >> M;
    vector<int> h(N), a(M), b(M), tmp(N, 1);
    for(int i=0; i<N; i++){
	cin >> h[i];
    }

    for(int i=0; i<M; i++){
	cin >> a[i] >> b[i];
	a[i]--;
	b[i]--;
    }


    for(int i=0; i<M; i++){
	if(h[a[i]] == h[b[i]]){
	    tmp[a[i]]=0;
	    tmp[b[i]]=0;
	}
	else if(h[a[i]] > h[b[i]])
	    tmp[b[i]]=0;
	else
	    tmp[a[i]]=0;
    }

    for(int i=0; i<N; i++){
	if(tmp[i]==1)
	    ans ++;
    }





    cout << ans << endl;
} 


