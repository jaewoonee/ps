#include <iostream>
#include <string>
using namespace std;

int main(){
	string key, dial;
	dial = "ADGJMPTW";  //�� ���ں� ���̾� ��� 
	dial += 'Z'+1;  //������ ��� 
	int t = 0;  //�ɸ� �ð�
	cin >> key;  //�Է� ��
	
	//�Է� �� Ž�� 
	for(int i=0;i<key.length();i++){
		//���̾� �� Ž�� 
		for(int j=0;j<dial.length();j++){
			//���̾��� �ε��� j�� ��ȭ���� ��ȣ-2 
			//��� ���� �����ϴ��� Ȯ�� 
			if(dial[j]<=key[i] && key[i]<dial[j+1]){
				t += j+3;  //��ȣ 1������ �ɸ��� 2�� + �ε����� �߰� 1�� 
			}
		}
	}
	cout << t;
}
