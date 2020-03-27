#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> Nums;
    int now = 1; 
    int cnt = 0; 
    for (int i = 0; i < N; i++){
	if (S[i] == (char)('0' + now))
	    cnt++;
	else {
	    Nums.push_back(cnt);
	    now ^= 1; 
	    cnt = 1; 
	}
    }
    if (cnt != 0) Nums.push_back(cnt);

    if (Nums.size() % 2 == 0) Nums.push_back(0);

    int Add = 2 * K + 1;

    vector<int> sum(Nums.size() + 1);
    for (int i = 0; i < Nums.size(); i++){
	sum[i + 1] = sum[i] + Nums[i];
    }


    int ans = 0;
    int left, right, tmp;
    for (int i = 0; i < Nums.size(); i += 2){
	left = i;
	right = min(i + Add, (int)Nums.size());
	tmp = sum[right] - sum[left];
	ans = max(tmp, ans);
    }


    // for (int i = 0; i < Nums.size(); i ++){
    // 	cout << Nums[i] << " ";
    // }
    // cout << endl;    
    // for (int i = 0; i < Nums.size(); i ++){
    // 	cout << sum[i] << " ";
    // }
    // cout << endl;


    cout << ans << endl;
}

