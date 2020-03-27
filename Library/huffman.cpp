#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e9

// priority_queue<int, vector<int>, greater<int>> que;

int N;
ll ans=0;
vector<int> v;
priority_queue<int, vector<int>, greater<int>> que;

int main(){
    cin >> N;
    v.resize(N);
    for(int i=0; i<N; i++)
	cin >> v[i];
    
    for(int i=0; i<N; i++)
	que.push(v[i]);

    while(que.size() > 1){
	int min1, min2;
	min1 = que.top();
	que.pop();
	min2 = que.top();
	que.pop();

	ans += min1 + min2;
	que.push(min1 + min2);	
    }
          
    cout << ans << "\n";
}

