#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define DFS_ITEM 3
#define DEPTH 4
int N, M, Q, ans=0;
vector<int> a(100), b(100), c(100), d(100);

void calc(vector<int> v) {
    int tmp = 0;
    for(int i=0; i<Q; i++){
	if(v[b[i]] - v[a[i]] == c[i])
	    tmp += d[i];
    }

    ans = max(tmp, ans);
}
void DFS(int depth, vector<int> v) {    
    if(depth == N){
	calc(v);
	return;
    }
    int tmp=0;
    if(depth==0)
	tmp=1;
    else
	tmp = v[depth-1];
    
    for(int i=tmp; i<=M; i++){
	v[depth] = i;
	DFS(depth+1, v);	
    }
}


int main() {
    cin >> N >> M >> Q;
    vector<int> v(1000);    
    for(int i=0; i<Q; i++){
	cin >> a[i] >> b[i] >> c[i] >> d[i];
	a[i]--;
	b[i]--;
    }

    DFS(0, v);			    
    
    cout << ans << endl;
} 


