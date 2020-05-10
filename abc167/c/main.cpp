#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int N, M, X, ans=2e9;
vector<int> C(100);
int A[100][100];


void calc(vector<int> v) {
    vector<int> tmp(M, 0);
    int cost=0;
    for(int i=0; i<N; i++){
    	if(v[i] == 1){
	    cost += C[i];
	    for(int j=0; j<M; j++){
		tmp[j] += A[i][j];
	    }
	}
    }
    bool flag = true;

    for(int i=0; i<M; i++){
	if(tmp[i]<X)
	    flag=false;
    }

    if(flag)
	ans = min(ans, cost);

    
}
void DFS(int depth, vector<int> v) {    
    if(depth == N){
	calc(v);
	return;
    }    
    for(int i=0; i<2; i++){
	v[depth] = i;
	DFS(depth+1, v);	
    }
}


int main() {
    cin >> N >> M >> X;
    vector<int> v(N+1);    
    for(int i=0; i<N; i++){
	cin >> C[i];
	for(int j=0; j<M; j++){
	    cin >> A[i][j];
	}
    }
    DFS(0, v);			    
    cout << (ans==2e9? -1: ans) << endl;
} 


