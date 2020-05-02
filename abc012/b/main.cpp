#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ans;
    cin >> a;
    int h = a / 3600;
    a -= 3600*h;
    int m = a / 60;
    a -= 60*m;
    int s = a;

    if(h<10)
	cout << 0;
    cout << h <<":";
    if(m<10)
	cout << 0;
    cout << m <<":";
    if(s<10)
	cout << 0;
    cout << s <<endl;

    
}

