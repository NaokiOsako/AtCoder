#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    vector<int> a(6);
    for(int i=0; i<6; i++){
	cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    cout << a[2] << endl;
} 


