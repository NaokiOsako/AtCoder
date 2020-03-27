#include<bits/stdc++.h>
using namespace std;

int main(){ 
    vector<int> v = {10,40,40,20,20,30,20,20,40};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i=0; i<v.size(); i++){
	cout << v[i] <<endl;
    }
}



