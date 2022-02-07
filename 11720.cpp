#include <iostream>
using namespace std;

int main(){
	int l = 0, sum = 0;
	cin >> l;
	char *arr = new char[l];
	
	for(int i=0;i<l;i++){
		cin >> arr[i];
		sum += (int)arr[i]-'0'; //char to int
	}
	
	cout << sum;
	
	delete[] arr;
}
