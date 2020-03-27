#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    int N;
    printf("文字列の個数 %d\n", argc);
    for(int i=0; i<argc; i++)
	printf("%d 番目の文字列 %s\n", i, argv[i]);
    
    ifstream fin("in.txt");

    fin >> N;
    cout << N;
    vector<int> a(N), b(N);

    for(int i=0; i<N; i++){
	fin >> a[i] >> b[i];
	cout << a[i] <<" "<<b[i]<< endl;
    }
  
    return 0;
}
