#include<bits/stdc++.h>
using namespace std;

int N;
int s[10000], t[10000];
pair<int, int> itv[10000];
int ans = 0, posx = 0;

int main(){
    cin >> N;    
    for(int i=0; i<N; i++)
	cin >> s[i] >> t[i];

    for(int i=0; i<N; i++){
	itv[i].first = t[i];
	itv[i].second = s[i];
    }

    sort(itv, itv+N);

    for(int i=0; i<N; i++){
	if(posx < itv[i].second){
	    ans++;
	    posx = itv[i].first;
	}
    }

    cout << ans << endl;
}

