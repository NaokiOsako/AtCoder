#include<bits/stdc++.h>
using namespace std;
#define INF 1e9

int n, m, M, ans = 2e9;
int main(){
    priority_queue<int, vector<int>> desc;
    priority_queue<int, vector<int>, greater<int>> asc;

    desc.push(3);
    desc.push(5);
    desc.push(1);

    
    cout << "desc" <<endl;
    while(!desc.empty()){
	cout << desc.top() <<endl; // 5 3 1
	desc.pop();
    }

    asc.push(3);
    asc.push(5);
    asc.push(1);


    cout << "asc" <<endl;
    while(!asc.empty()){
	cout << asc.top() <<endl; // 1 3 5
	asc.pop();
    }

}

