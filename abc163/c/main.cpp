#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N;
    cin >> N;

    vector<int> a(N-1), ans(N, 0);

    for(int i=0; i<N-1; i++){
	cin >> a[i];
	ans[a[i]-1]++;
    }
    for(auto i: ans){
	cout << i << endl;
    }

} 


