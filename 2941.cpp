 #include <iostream>
 using namespace std;
 
 int main(){
 	string input;
 	cin >> input;
 	
 	string croa2[7] = {"c=","c-","d-","lj","nj","s=","z="}; //2글자짜리 문자 
 	string croa3 = "dz="; //3글자짜리 문자 
 	
 	//총 글자 개수 
 	int cnt = input.length();
 	
 	//입력된 문자 탐색 
	for(int i=0;i<input.length();i++){
		//2글자짜리 문자와 비교
		for(int j=0;j<7;j++){
			//첫번째 글자 비교
			if(input[i]==croa2[j][0]){
				//두번째 글자 비교 
				if(input[i+1]==croa2[j][1]){
					cnt--; //2글자를 1글자처럼 세기 
					i++; //나머지 글자 건너뛰기 
				}
			}
		}
		//3글자짜리 문자와 비교
		if(input[i]==croa3[0]){
			if(input[i+1]==croa3[1]){
				if(input[i+2]==croa3[2]){
					cnt-=2; //3글자를 1글자처럼 세기 
					i+=2; //나머지 글자 건너뛰기 
				}
			}
		}
	}
	cout << cnt;
 }
