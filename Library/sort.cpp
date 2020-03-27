#include<bits/stdc++.h>
using namespace std;

int N, A, ans = 2e9;
vector<int> v;

int main(){
    cin >> N ;
    v.resize(N);
    for(int i=0; i<N; i++)
	cin >> v[i];

    sort(v.begin(), v.end());
    
    sort(v.begin(), v.end(), greater<int>());
    
    for(int i=0; i<N; i++)
	cout << v[i] << endl;
       
    cout << ans << "\n";
}
