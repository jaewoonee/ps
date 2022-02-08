#include <iostream>
#include <string>
using namespace std;

int main(){
	int max = 0;  //가장 큰 cnt를 가진 인덱스 
	bool is_many = false;  //가장 큰 cnt가 복수인가 
	string S;
	cin >> S;
	
	//알파벳의 개수를 셀 배열 
	int cnt[27] = {-1,};
	
	//문자열 탐색 
	for(int i=0;i<S.length();i++){
		 //문자가 'a'~'z', 'A'~'Z' 인지 확인 후 개수 추가
		 if('a' <= S[i]&&S[i] <= 'z'){
		 	cnt[S[i]-'a'+1]++;
		 }
		 else if('A' <= S[i]&&S[i] <= 'Z'){
		 	cnt[S[i]-'A'+1]++;
		 }
	}
	
	//개수가 가장 많은 인덱스 찾기
	for(int i=1;i<27;i++){
		//max가 여러개인지 체크 
		if(cnt[i] == cnt[max]){
			is_many = true;
		}
		//max 값이 갱신되면 복수체크 해제
		if(cnt[i]>cnt[max]){
			max=i;
			is_many = false;
		}
	}
	
	//가장 많이 사용된 알파벳 대문자로 출력
	if(!is_many){
		cout << (char)(max+'A'-1);
	}
	//복수의 max값일 때 출력 
	else{
		cout << "?";
	}
}
