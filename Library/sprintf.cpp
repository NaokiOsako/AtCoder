#include<bits/stdc++.h>
using namespace std;


int main(){
    int N, M;
    cin >> N >> M;
    char ans[M][13];
    vector<pair<int, pair<int, int>>> a(M+1);
    a[M].first=2e9;
    for(int i=0; i<M; i++){
	cin >> a[i].first >>a[i].second.first;
	a[i].second.second=i;
    }
    sort(a.begin(), a.end());
    int right = 1;
    for(int i=0; i<M; i++){
	int left = a[i].first;
	sprintf(ans[a[i].second.second], "%06d%06d", left, right);
	if(a[i].first==a[i+1].first)
	    right++;
	else
	    right=1;
    }
    for(int i=0; i<M; i++){
    	cout << ans[i] <<endl;
    }
    
}


