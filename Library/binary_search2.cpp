#include<bits/stdc++.h>
using namespace std;

// index が条件を満たすかどうか
bool isOK(vector<int> &a, int index, int key) {
    if (a[index] >= key)
	return true;
    else
	return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(vector<int> &a, int key) {
    int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* ok と ng のどちらが大きいかわからないことを考慮 */
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (isOK(a, mid, key))
	    ok = mid;
        else
	    ng = mid;
    }
    return ok;
}

int main(){
    int a, b, q, min = 100000;
    int sr, tr;
    cin >> a >> b >> q;
    vector<int> s(a), t(b), x(q), ans(10);
    
    for(int i=0; i<a; i++)
	cin >> s[i];	    
    for(int i=0; i<b; i++)
	cin >> t[i];	    
    for(int i=0; i<q; i++)
	cin >> x[i];	
    
    sr = binary_search(s , x[0]);
    tr = binary_search(t , x[0]);
	
}


