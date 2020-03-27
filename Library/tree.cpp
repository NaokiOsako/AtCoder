#include<bits/stdc++.h>
using namespace std;

int dist[2][100005]={};
vector<int> G[100005];

void DFS(int node, int parent, int who){
    for(auto it: G[node]){
	if(it != parent){
	    dist[who][it] = dist[who][node]+1;
	    DFS(it, node, who);
	}
    }
}

int main(){
    int N, u, v, ans=0;    
    cin >> N >> u >> v;
    
    for(int i=0; i<N-1; i++){
	int a, b;
	cin >> a >> b;
	G[a].push_back(b);
	G[b].push_back(a);
    }

    DFS(u, -1, 0);
    DFS(v, -1, 1);

    for(int i=1; i<=N; i++){
	if(dist[0][i] < dist[1][i])
	    ans = max(ans, dist[1][i]-1);
    }
    cout << ans << endl;
    return 0;
}
