#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e9

int N, A, ans = 1e8;
vector<int> v;

int main(){
    cin >> N >> A ;
    v.resize(N);
    for(int i=0; i<N; i++)
	cin >> v[i];
    cout << ans << "\n";
}

