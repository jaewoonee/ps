#include <iostream>
using namespace std;

int main(){
	int l = 0;
	double M = 0, sum = 0, avg = 0;
	
	//���� �迭 �Ҵ� 
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
	 
	cout << fixed; //���� �Ҽ���
	cout.precision(7); //�Ҽ��� �ڸ��� 7��°���� ��� 
	cout << avg;
		 
	//���� �迭 ���� 
	delete[] arr;
}
