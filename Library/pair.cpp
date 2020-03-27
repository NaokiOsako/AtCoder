#include<bits/stdc++.h>
using namespace std;

int N, M, C, sum=0;
long long ans=0;
int main(){
    cin >> N >> M;
    pair<int, int> v[N];

    for(int i = 0; i < N; i++) {
	cin >> v[i].first >> v[i].second;
    }
    sort(v, v+N);

    for(int i = 0; i < N; i++) {
	for(int j = 0; j < v[i].second; j++) {
	    ans += v[i].first ;
	    sum ++;
	    if(sum == M)
		break;
	}
	if(sum == M)
	    break;
    }

    
    cout << ans << endl; 
	      
}
