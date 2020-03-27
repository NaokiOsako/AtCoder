#include<bits/stdc++.h>
using namespace std;

int main(){
    int minNum=1000;
    string S;
    cin >> S;
    int tmp;

    for(int i=0; S[i+2]!='\0'; i++){
	tmp =atoi(S.substr(i, 3).c_str());
	tmp = abs(tmp -753);
	minNum = min(tmp, minNum);
    }
    
    cout << minNum << endl;    
}
