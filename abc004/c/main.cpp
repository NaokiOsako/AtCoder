#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    cin >> N;
    N=N%30;
    string s="123456";

    for(int i=0; i<N; i++){
	int a=i%5, b=i%5+1;
	swap(s[a], s[b]);
    }

    cout << s << endl;
} 


