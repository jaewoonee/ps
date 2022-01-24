#include <iostream>
using namespace std;

int main(){
	int n = 0, cn = 0, tmp = 0, cnt = 0;
	
	cin >> n;
	cn = n;
	
	while(true){
		//자리수가 1인 수에  대한 전처리 
		if(cn<10){
			cn*10;
		}
		
		//10의 자리수 + 1의 자리수
		tmp = (cn/10) + (cn%10);
		
		//원래값 1의 자리수와 구해진값 1의 자리수를 붙이기
		cn = (cn%10 * 10) + tmp%10;
				
		//사이클의 길이++ 
		cnt += 1;
		
		//사이클 종료 
		if(cn==n){
			break;
		}
	}
	cout << cnt;
}
