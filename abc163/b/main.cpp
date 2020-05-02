#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(M);
    int ans=N;

    for(int i=0; i<M; i++){
	cin >> a[i];
	ans -= a[i];
    }

    cout << (ans<0? -1: ans) << endl;    
} 


