#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, minNum=2e9, a, i=0, ans;
    cin >> n;

    if(n < 100)
	ans = 0;
    else if(n<=5000){
	ans = n*10;
    }
    else if(n<=30000){
	ans = n+50000;
    }
    else if(n<=70000){
	ans = (n-30000)/5+80000;
    }
    else{
	ans = 89000;
    }
    ans /= 1000;
    printf("%02d\n", ans);
}
