#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, Q, ans=0;
    cin >> N >> Q;
    vector<vector<char>> a(N, vector<char>(N, 'N'));
    vector<int> qa(Q), qb(Q), qc(Q);
    vector<char> tmp(N, 'N');

    for(int i=0; i<Q; i++){
	cin >> qa[i] >> qb[i];
	if(qa[i] == 1)
	    cin >> qc[i];
	qb[i]--; qc[i]--;
    }

    for(int i=0; i<Q; i++){
	if(qa[i]==1){
	    a[qb[i]][qc[i]]='Y';
	}else if(qa[i]==2){
	    for(int j=0; j<N; j++){
		if(a[j][qb[i]]=='Y'){
		    a[qb[i]][j]='Y';
		}
	    }	    
	}else{
	    for(int j=0; j<N; j++){
		if(a[qb[i]][j]=='Y'){
		    for(int k=0; k<N; k++){
			if(a[j][k]=='Y'){
			    tmp[k] = 'Y';
			}
		    }
		}
	    }
	    for(int j=0; j<N; j++){
		if(tmp[j]=='Y' && qb[i]!=j)
		    a[qb[i]][j]='Y';
		tmp[j]='N';
	    }
	}
    }


    for(int i=0; i<N; i++){
	for(int j=0; j<N; j++){
	    cout << a[i][j];
	}
	cout << endl;
    }





    


    

    
} 


