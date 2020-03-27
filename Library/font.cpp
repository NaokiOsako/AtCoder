#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    char S[1000];
    cin >> N >> K;
    cin >> S;

    S[K-1] = S[K-1]+32;
    
    cout << S<<endl;
}
