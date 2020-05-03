#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0, K, A, B;
    cin >> K;
    cin >> A >> B;
    bool flag =false;

    for(int i=A; i<=B; i++){
	if(i%K==0)
	    flag=true;
    }


    cout << (flag? "OK": "NG") << endl;
} 


