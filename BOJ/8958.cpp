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
			//arr의 i번째에 삽입된 문자열의 j번째 문자를 찾아서 비교 
			if(arr[i].at(j)=='O') inc++;
			else inc = 0;
			sum += inc;
		}
		cout << sum << endl;
		inc = 0, sum = 0;
	}
	
	delete[] arr;
} 
