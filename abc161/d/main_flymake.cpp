#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N;
    cin >> N;
    vector<int> ans(N, 0);
    int siz=ans.size();
    for(int i=0; i<N; i++){
	if(ans[siz-1]==9){
	    for(int j=siz-1; j>=0; j--){
		if(ans[j]==9)
		    ans[j]=0;
		else{
		    ans[j]++;
		    for(int k=j+1; k<siz; k++){
			ans[k]=ans[j]-1;
			if(ans[k]<0)
			    ans[k]=0;
		    }
		    break;
		}
	    }
	}
	else{

	    

	    
	}
	
	
    }
} 


