#include<bits/stdc++.h>
using namespace std;

struct node{int to, cost;};
vector<vector<node>> G(2e6);
vector<int> ans(1e5, -1);
int N;


void dfs(int v) {
    while(!G[v].empty()) {
        node tmp;
        tmp = G[v].back();
        G[v].pop_back();
        if (ans[tmp.to] != -1) continue;

        
        if ( tmp.cost % 2 == 0 ) {
            ans[tmp.to] = ans[v];
        } else {
            ans[tmp.to] = 1- ans[v];
        }
        dfs(tmp.to);
    }
    return ;
}

int main() {
 
    cin >> N;

    for(int i=0; i<N-1; i++){
        int a, b, w;
        node tmp;
        cin >> a >>  b >> w;
        a--;
        b--;
        tmp.to = b;
        tmp.cost = w;
        G[a].push_back(tmp);
        tmp.to = a;
        G[b].push_back(tmp);
    }
    ans[0] = 0;
    dfs(0);
 
    for (int i = 0; i < N; i++) {
        cout << ans[i] << "\n";
    }
}


