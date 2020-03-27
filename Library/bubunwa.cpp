#include<bits/stdc++.h>
using namespace std;

int N, A, k, ans = 2e9;
bool flag = false;
vector<int> v;

bool DFS(int depth, int sum) {    
    if(depth == N)
	return sum ==k;
    if(DFS(depth +1, sum))
	return true;
    if(DFS(depth +1, sum + v[depth]))
    	return true;    
    return false;
}


int main(){
    cin >> N ;
    v.resize(N);
    for(int i=0; i<N; i++)
	cin >> v[i];    
    cin >> k ;

    if(DFS(0, 0))
	cout << "YES"<< "\n";
    else
	cout << "NO"<< "\n";
}

