#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, minNum=2e9, a, i=0;
    char atcoder[7] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
    string s, t;
    cin >> s;
    cin >> t;
    bool flag=true, flag2=false;
    
    for(int i=0; i<s.size(); i++){
	if(s[i] == '@' || t[i] == '@'){
	    if(s[i]!=t[i]){
		if(s[i] == '@'){
		    flag2=false;
		    for(int j=0; j<7; j++){
			if(t[i] == atcoder[j])
			    flag2=true;
		    }		    
		}else{
		    flag2=false;
		    for(int j=0; j<7; j++){
			if(s[i] == atcoder[j])
			    flag2=true;
		    }		    
		}
		if(!flag2)
		    flag = false;
	    }
	}
	else{
	    if(s[i]!=t[i])
		flag = false;
	}
    }

    cout << (flag? "You can win": "You will lose") <<endl;
}

