#include<bits/stdc++.h>
using namespace std;

int N;
char S[3000];

int main(){
    cin >> N;
    cin >> S;
    int left = 0, right = N-1;
    bool flag;

    while(left <= right){
	flag = false;
	for(int i=0; left+i<=right; i++){
	    if(S[left+i] < S[right-i]){
		flag = true;
		break;
	    }
	    else if(S[left+i] > S[right-i]){
		flag = false;
		break;
	    }	    
	}
	
	if(flag)
	    putchar(S[left++]);
	else
	    putchar(S[right--]);
    }
    putchar('\n');
	    
}

