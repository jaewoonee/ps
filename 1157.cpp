#include <iostream>
#include <string>
using namespace std;

int main(){
	int max = 0;  //���� ū cnt�� ���� �ε��� 
	bool is_many = false;  //���� ū cnt�� �����ΰ� 
	string S;
	cin >> S;
	
	//���ĺ��� ������ �� �迭 
	int cnt[27] = {-1,};
	
	//���ڿ� Ž�� 
	for(int i=0;i<S.length();i++){
		 //���ڰ� 'a'~'z', 'A'~'Z' ���� Ȯ�� �� ���� �߰�
		 if('a' <= S[i]&&S[i] <= 'z'){
		 	cnt[S[i]-'a'+1]++;
		 }
		 else if('A' <= S[i]&&S[i] <= 'Z'){
		 	cnt[S[i]-'A'+1]++;
		 }
	}
	
	//������ ���� ���� �ε��� ã��
	for(int i=1;i<27;i++){
		//max�� ���������� üũ 
		if(cnt[i] == cnt[max]){
			is_many = true;
		}
		//max ���� ���ŵǸ� ����üũ ����
		if(cnt[i]>cnt[max]){
			max=i;
			is_many = false;
		}
	}
	
	//���� ���� ���� ���ĺ� �빮�ڷ� ���
	if(!is_many){
		cout << (char)(max+'A'-1);
	}
	//������ max���� �� ��� 
	else{
		cout << "?";
	}
}
