#include <iostream>
using namespace std;

int main(){
	int v1, v2, tmp, ten, sum = 0;
	ten = 1;
	cin >> v1 >> v2;
	while(v2 != 0){
		tmp = v1*(v2%10);
		cout << tmp << endl;
		v2 /= 10;
		sum += tmp*ten;
		ten *= 10;
	}
	cout << sum;
}
