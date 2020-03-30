#include<bits/stdc++.h>
using namespace std;

class UnionFind {
public:
    vector <int> par; // 各元の親を表す配列
    vector <int> siz; // 素集合のサイズを表す配列(1 で初期化)

    // Constructor
    UnionFind(int sz_): par(sz_), siz(sz_, 1) {
        for (int i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }
    
    void init(int sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1);  // 初期化されなかった
        for (int i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }

    int root(int x) { // 根の検索
        while (par[x] != x) {
            x = par[x] = par[par[x]]; // x の親の親を x の親とする
        }
        return x;
    }
    
    bool merge(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool same(int x, int y) { // 連結判定
        return root(x) == root(y);
    }

    int size(int x) { // 素集合のサイズ
        return siz[root(x)];
    }
};

 

int main() {
    int N, K, L;
    cin >> N >> K >> L;
    int a, b;
    UnionFind Load(N), Train(N);
    vector<int> a(N, 0);


    for(int i=0; i<K; i++){
	cin >> a >> b;
	a--;
	b--;
	Load.merge(a, b);
    }
    
    for(int i=0; i<L; i++){
	cin >> a >> b;
	a--;
	b--;
	Train.merge(a, b);
    }

    for(int i=0; i<N; i++){
	for(int j=i+1; j<N; j++){
	    if(Load.same(i, j) && Train.same(i, j)){
		ans[i]++;
		ans[j]++;
	    }
		
	}
    }

}

