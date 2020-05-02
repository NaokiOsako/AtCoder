#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K=0, sum=0, a;
    string s;
    cin >> N;

    for(int i=0; i<N; i++){
	cin >> a;
	sum += a;
	if(a > 0)
	    K++;
    }
    cout << ceil((double)sum/K) <<endl;
}


