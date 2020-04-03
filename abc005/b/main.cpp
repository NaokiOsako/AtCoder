#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, minNum=2e9, a;
    cin >> n;
    for(int i=0; i<n; i++){
	cin >> a;
	minNum = min(a, minNum);
    }
    cout << minNum<<endl;    
}
