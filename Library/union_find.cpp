#include<bits/stdc++.h>
using namespace std;
int N, M, K;
vector<int> nakama;

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
        siz.assign(sz_, 1);  // resize だとなぜか初期化されなかった
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
    cin >> N >> M >> K;
    int a, b;
    UnionFind Uni(N);
    vector<int> friA(M), friB(M), bloA(K), bloB(K);
    vector<int> ans(N);


    for(int i=0; i<M; i++){
	cin >> a >> b;
	a--;
	b--;
	Uni.merge(a, b);
	friA[i]=a;
	friB[i]=b;
    }
    
    for(int i=0; i<K; i++){
	cin >> a >> b;
	a--;
	b--;
	bloA[i]=a;
	bloB[i]=b;
    }

    for(int i=0; i<N; i++){
    	ans[i]=Uni.size(i)-1;
    }
    for(int i=0; i<M; i++){
    	int tmp = Uni.same(friA[i], friB[i]);
    	ans[friA[i]] -= tmp;
    	ans[friB[i]] -= tmp;
    }

    for(int i=0; i<K; i++){
    	int tmp=Uni.same(bloA[i], bloB[i]);
    	ans[bloA[i]]-=tmp;
    	ans[bloB[i]]-=tmp;	
    }

    for(int i=0; i<N; i++){
    	cout << ans[i] << endl;
    }

}

