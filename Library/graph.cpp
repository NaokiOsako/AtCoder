#include<bits/stdc++.h>
using namespace std;

// 深さ優先探索
vector<bool> seen;
vector<vector<int>> G(19);

void dfs(int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(next_v); // 再帰的に探索
    }
}

void bfs() {
    queue<int> q;
    q.push(1);

    while(!q.empty()){
	int node = q.front();
	q.pop();
	for(auto i: G[node]){
	    q.push(i);
	    cout << i << endl;
	}

    }
}

int main(){
    int N, M, a, b;
    cin >> N >> M;

    for(int i=0; i<M; i++){
	cin >> a >> b;
        G[a].push_back(b);
	G[b].push_back(a);
    }
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    dfs(0);
    bfs();
    cout << endl;
}
