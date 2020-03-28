#include<bits/stdc++.h>
using namespace std;

const int INF = -10;
typedef pair<int, int> P;

char maze[200][200];
int N, M;
int sx, sy, gx, gy;
int d[200][200];
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int BFS(){
    queue<P> que;
    for(int i=0; i<N; i++)
	for(int j=0; j<M; j++)
	    d[i][j] = INF;
    
    // start
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while(que.size()){
	P p = que.front();
	que.pop();

	//search
	if(p.first == gx && p.second == gy)
	    break;

	for(int i=0; i<4; i++){
	    int nx = p.first + dx[i], ny = p.second + dy[i];	    
	    if(0<=nx && nx<N && 0<=ny && ny<M && maze[nx][ny]!='#' && d[nx][ny]==INF){
		que.push(P(nx, ny));
		d[nx][ny] = d[p.first][p.second] + 1;
	    }
	}
    }    
    return d[gx][gy];
}


int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++)
	cin >> maze[i];

    sx = 0;
    sy = 0;
    gx = N-1;
    gy = M-1;
    
    int ans=BFS();

    int cnt=0;
    for(int i=0; i<N; i++){
	for(int j=0; j<M; j++){
	    if(maze[i][j]=='#')
		cnt++;
	}
    }
    if(ans==INF)
	cout << -1 << endl;
    else
	cout << N*M-ans-1-cnt << endl;


    
}

