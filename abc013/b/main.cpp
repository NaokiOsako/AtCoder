#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ans;
    cin >> a >> b;
    ans = min(abs(b-a),  10-abs(b-a));
    cout << ans <<endl;
}

