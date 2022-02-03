#include <iostream>
using namespace std;

int main(){
	int C = 0, N = 0;
	double sum = 0, avg = 0, cnt = 0, per = 0;
	
	//동적 배열 선언 
	double* arr;
	
	cin >> C;
	for(int i=0;i<C;i++){
		cin >> N;
		//동적 배열 생성 
		arr = new double[N];
		
		for(int j = 0;j<N;j++){
			cin >> arr[j];
			sum += arr[j];
		}
		avg = sum/N;
		
		for(int j = 0;j<N;j++){
			if(arr[j]>avg) cnt++;
		}
		per = 100*(cnt/N);
		
		cout << fixed;
		cout.precision(3);
		cout << per << "%" << endl;
		
		sum = 0, avg = 0, cnt = 0;
		
		//동적 배열 소멸 
		delete[] arr;
	}
}
