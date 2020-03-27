#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ans = true;
    int size = s.size();
    
    while(size>0){
	if(size >=5 && s.substr(size-5, 5) == "dream")
	    size -= 5;
	else if(size >=5 && s.substr(size-5, 5) == "erase")
	    size -= 5;
	else if(size >=7 && s.substr(size-7, 7) == "dreamer")
	    size -= 7;
	else if(size >=6 && s.substr(size-6, 6) == "eraser")
	    size -= 6;
	else{
	    ans = false;
	    break;	    
	}
    }
    if(ans)
	cout << "YES" << endl;
    else
	cout << "NO" << endl;    
}
