#include <iostream>
using namespace std;

int main(){
	cin.tie(NULL); ios::sync_with_stdio(false); //빠른 입출력
	int n = 0;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout << " ";
		}
		for(int j=0;j<i;j++){
			cout << "*";
		}
		cout << "\n";
	}
}
