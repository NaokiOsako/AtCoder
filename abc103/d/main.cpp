#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, M, ans=0, bridge=0;
    cin >> N >> M;
    vector<pair<int, int>> a(M);

    for(int i=0; i<M; i++)
	cin >> a[i].second >> a[i].first;

    sort(a.begin(), a.end());

    for(int i=0; i<M; i++){
	int left=a[i].second, right=a[i].first;
	if(left<=bridge){
	}
	else{
	    bridge = right-1;
	    ans++;

	}
    }




    cout << ans << endl;
} 


