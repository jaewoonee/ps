 #include <iostream>
 using namespace std;
 
 int main(){
 	string input;
 	cin >> input;
 	
 	string croa2[7] = {"c=","c-","d-","lj","nj","s=","z="}; //2����¥�� ���� 
 	string croa3 = "dz="; //3����¥�� ���� 
 	
 	//�� ���� ���� 
 	int cnt = input.length();
 	
 	//�Էµ� ���� Ž�� 
	for(int i=0;i<input.length();i++){
		//2����¥�� ���ڿ� ��
		for(int j=0;j<7;j++){
			//ù��° ���� ��
			if(input[i]==croa2[j][0]){
				//�ι�° ���� �� 
				if(input[i+1]==croa2[j][1]){
					cnt--; //2���ڸ� 1����ó�� ���� 
					i++; //������ ���� �ǳʶٱ� 
				}
			}
		}
		//3����¥�� ���ڿ� ��
		if(input[i]==croa3[0]){
			if(input[i+1]==croa3[1]){
				if(input[i+2]==croa3[2]){
					cnt-=2; //3���ڸ� 1����ó�� ���� 
					i+=2; //������ ���� �ǳʶٱ� 
				}
			}
		}
	}
	cout << cnt;
 }
