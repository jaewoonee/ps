#include <iostream>
using namespace std;

int main(){
	int l = 0;
	double M = 0, sum = 0, avg = 0;
	
	//동적 배열 할당 
	cin >> l;
	double *arr = new double[l];
	
	for(int i=0;i<l;i++){
		cin >> arr[i];
		if(arr[i]>M){M = arr[i];}
	}
	
	for(int i=0;i<l;i++){
		arr[i] = arr[i]/M*100;
		sum += arr[i];
	}
	
	avg = sum/l;
	 
	cout << fixed; //고정 소수점
	cout.precision(7); //소수점 자리수 7번째까지 출력 
	cout << avg;
		 
	//동적 배열 해제 
	delete[] arr;
}
