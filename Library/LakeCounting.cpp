#include<bits/stdc++.h>
using namespace std;

int N, M, ans=0;
char Field[200][200];

void DFS(int y, int x){
    int px, py;
    Field[y][x] = '.';

    for(int dx=-1; dx<=1; dx++){
	for(int dy=-1; dy<=1; dy++){
	    px = x+dx;
	    py = y+dy;
	    if(0<=px && px<M && 0<=py && py<N && Field[py][px] == 'w')
		DFS(py, px);			    
	}	
    }
        
}



int main(){
    cin >> N >>M;    
    for(int i=0; i<N; i++)
	cin >> Field[i];


    for(int i=0; i<N; i++){
	for(int j=0; j<M; j++){
	    if(Field[i][j] == 'w'){
		ans++;
		DFS(i, j);			    		
	    }
	    
	}
    }
    cout << ans << endl;
	
}

