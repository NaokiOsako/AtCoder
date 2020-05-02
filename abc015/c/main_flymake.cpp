#include<bits/stdc++.h>
using namespace std;

#define DFS_ITEM 3
#define DEPTH 4

int A, B, C, ans = 2e9;
vector<int> l(10, -1);
int N, K;
int a[5][5];
bool flag=true;

void calc(vector<int> v) {
    int tmp=0;
    for(int i=0; i<N; i++){
	tmp ^= a[i][v[i]];
    }

    if(tmp==0)
	flag=false;
}
void DFS(int depth, vector<int> v) {    
    if(depth == N){
	calc(v);
	return;
    }    
    for(int i=0; i<K; i++){
	v[depth] = i;
	DFS(depth+1, v);	
    }
}

int main(){
    cin >> N >> K;

    vector<int> v(N+1);

    for(int i=0; i<N; i++){
	for(int j=0; j<K; j++){
	    cin >> a[i][j];
	}
    }
    
    DFS(0, v);			    
    cout << (!flag? "Found": "Nothing") << "\n";
}






