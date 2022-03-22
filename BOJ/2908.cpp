#include <iostream>
#include <string>
using namespace std;

int main(){
	string a, b, rev_a, rev_b;
	cin >> a >> b;
	
	for(int i=2;i>=0;i--){
		rev_a += a[i];
		rev_b += b[i];
	}
	stoi(rev_a) > stoi(rev_b) ? cout << rev_a : cout << rev_b;
}
