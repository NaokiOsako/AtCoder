#include<bits/stdc++.h>
using namespace std;

vector<int> ret;
void divisor(int n) {
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
}

int main() {
    long long N, ans=0;
    cin >> N;

    divisor(N);
    for(int i=0; i<ret.size(); i++){
	cout << ret[i] << endl;            
    }

}

