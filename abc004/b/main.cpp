#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, minNum=2e9, a, i=0;
    char s;
    char S[10000];

    while(cin >> s){
	S[i] = s;
	i++;
    }
    int tmp = sqrt(i);
    for(int j=0; j<tmp; j++){
	for(int k=0; k<tmp; k++){
	    cout << S[(tmp-j-1)*tmp+(tmp-k-1)];
	    if(k != tmp-1)
		cout << " ";
	}
	cout <<endl;    
    }
}

