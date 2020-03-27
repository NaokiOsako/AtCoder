#include<bits/stdc++.h>
using namespace std;

// 深さ優先探索
vector<bool> seen;
vector<vector<int>> G;
int ans=0;
bool flag;

void dfs(int v, int p) {
    seen[v] = true; // v を訪問済にする
    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) {
	if(next_v==p)
	    continue;
        else if (seen[next_v]){
	    flag=false;
	    continue;
	}
        dfs(next_v, v); // 再帰的に探索
    }
}



int main(){
    int N, M, a, b;
    cin >> N >> M;
    G.resize(N);

    for(int i=0; i<M; i++){
	cin >> a >> b;
	a--;	b--;
        G[a].push_back(b);
	G[b].push_back(a);
    }
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    for(int i=0; i<N; i++){
	if(!seen[i]){
	    flag=true;
	    dfs(i, -1);
	    if(flag)
		ans++;
	}
    }


    cout << ans<<endl;
}
