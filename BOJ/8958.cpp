#include <iostream>
#include <string>
using namespace std;

int main(){
	int n = 0, inc = 0, sum = 0;
	
	cin >> n;
	string *arr = new string[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<arr[i].length();j++){
			//arr�� i��°�� ���Ե� ���ڿ��� j��° ���ڸ� ã�Ƽ� �� 
			if(arr[i].at(j)=='O') inc++;
			else inc = 0;
			sum += inc;
		}
		cout << sum << endl;
		inc = 0, sum = 0;
	}
	
	delete[] arr;
} 
