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
		string filter = ""; //�ݺ��Ǵ� ���� ���� 
		bool endflag = false; //��ø���� ������ �÷���
		
		//�ݺ� ���� ���� 
		for(int j=0;j<s.length();j++){
			if(s[j]!=s[j+1]) filter+=s[j];
		}
		
		//���͸� ����� �׷�ܾ �ƴ��� Ȯ�� 
		for(int j=0;j<filter.length()-1;j++){
			for(int k=j+1;k<filter.length();k++){
				//�׷�ܾ �ƴϸ� 
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
