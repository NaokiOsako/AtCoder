#include<bits/stdc++.h>
using namespace std;

#define DFS_ITEM 3
#define DEPTH 4

int N, A, B, C, ans = 2e9;
vector<int> l(10, -1);

void calc(vector<int> v) {    
    for(int i=0; i<N; i++){
    	if(v[i] == 0){
    	}else if(v[i] == 1){
    	}else if(v[i] == 2){
	}else{
    	    cout << "error"<<endl;
    	}	
    }            
}
void DFS(int depth, vector<int> v) {    
    if(depth == DEPTH){
	calc(v);
	return;
    }    
    for(int i=0; i<DFS_ITEM; i++){
	v[depth] = i;
	DFS(depth+1, v);	
    }
}

int main(){
    cin >> N >> A >> B >> C;
    vector<int> v(N+1);    
    for(int i=0; i<N; i++)
	cin >> l[i];
    DFS(0, v);			    
    cout << ans << "\n";
}


