#include<bits/stdc++.h>
using namespace std;

int ans=0;
vector<string> Field;

void DFS(int y, int x){
    int px, py;
    Field[y][x] = 'x';

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};


    for(int i=0; i<4; i++){
	px = x+dx[i];
	py = y+dy[i];
	if(0<=px && px<10 && 0<=py && py<10 && Field[py][px] == 'o')
	    DFS(py, px);			    
    }
}

// ox

int main(){
    vector<string> a(10);
    for(int i=0; i<10; i++)
	cin >> a[i];

    for(int h=0; h<10; h++){
	for(int w=0; w<10; w++){
	    ans=0;
	    Field = a;
	    Field[h][w]='o';
	    for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
		    if(Field[i][j] == 'o'){
			ans++;
			DFS(i, j);			    		
		    }
	    
		}
	    }
	    if(ans==1){
		cout << "YES" << endl;
		return 0;
	    }
		
	}
    }
    cout << "NO" << endl;
}

