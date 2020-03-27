#include<bits/stdc++.h>
using namespace std;
int main(){
    int H, W, tmp, h, w;    
    cin >> H >> W;
    vector<string> map(H);
    char ans[H][W];
 
     int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
     int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    for(int i=0;i<H;i++){
	cin >> map[i];
    }

    for(int i=0;i<H;i++){
	for(int j=0;j<W;j++){
	    if(map[i][j] =='#')
		continue;
	    tmp = 0;
	    for(int k=0; k<8; k++){
		h=i+dy[k];
		w=j+dx[k];

		if(w<0 || w>=W || h<0 || h>=H)
		    continue;

		if(map[h][w]=='#')
		    tmp ++;
		
	    }
	    map[i][j] = tmp+'0';		
	}
    }

    for(int i=0; i<H; i++)
	cout << map[i]<<endl;

}

