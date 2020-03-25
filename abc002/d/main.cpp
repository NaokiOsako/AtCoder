#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, M, ans=1, tmp1, tmp2;;
    cin >> N >> M;
    bool a[15][15];
    bool flag=true;

    for(int i=0; i<15; i++){
	for(int j=0; j<15; j++){
	    a[i][j]=false;
	}
    }


    for(int i=0; i<M; i++){
	cin >> tmp1 >> tmp2;
	tmp1--;
	tmp2--;
	a[tmp1][tmp2]=a[tmp2][tmp1]=a[tmp1][tmp1]=a[tmp2][tmp2]=true;
    }

    for(int S=0; S<(1<<N); S++){
	flag=true;
	int t = bitset<32>(S).count();
	for(int i=0; i<N; i++){	    
	    for(int j=0; j<N; j++){	    
		if(S>>i&S>>j&1 && a[i][j]!=1)
		    flag=false;
	    }
	}

	if(flag){
	    ans = max(ans, t);
	}
    }

    cout << ans << endl;
} 


