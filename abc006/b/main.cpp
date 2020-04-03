#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(1e6);
    a[0]=0;
    a[1]=0;
    a[2]=1;
    int n;
    cin >> n;
    for(int i=3; i<n; i++){
	a[i] = a[i-3]+a[i-2]+a[i-1];
	a[i] %= 10007;
    }
    cout << a[n-1]<<endl;
    
}

