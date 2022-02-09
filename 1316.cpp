#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int cnt = n;
	
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		string filter = ""; //반복되는 문자 필터 
		bool endflag = false; //중첩루프 끝내는 플래그
		
		//반복 문자 필터 
		for(int j=0;j<s.length();j++){
			if(s[j]!=s[j+1]) filter+=s[j];
		}
		
		//필터를 사용해 그룹단어가 아닌지 확인 
		for(int j=0;j<filter.length()-1;j++){
			for(int k=j+1;k<filter.length();k++){
				//그룹단어가 아니면 
				if(filter[j]==filter[k]){
					cnt--;
					endflag = true;
					break;
				}
				if(endflag) break;
			}
		}
	}
	cout << cnt;
} 
