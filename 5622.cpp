#include <iostream>
#include <string>
using namespace std;

int main(){
	string key, dial;
	dial = "ADGJMPTW";  //각 숫자별 다이얼 경계 
	dial += 'Z'+1;  //마지막 경계 
	int t = 0;  //걸린 시간
	cin >> key;  //입력 값
	
	//입력 값 탐색 
	for(int i=0;i<key.length();i++){
		//다이얼 값 탐색 
		for(int j=0;j<dial.length();j++){
			//다이얼의 인덱스 j는 전화기의 번호-2 
			//경계 내에 존재하는지 확인 
			if(dial[j]<=key[i] && key[i]<dial[j+1]){
				t += j+3;  //번호 1번에서 걸리는 2초 + 인덱스당 추가 1초 
			}
		}
	}
	cout << t;
}
