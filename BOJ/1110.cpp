#include <iostream>
using namespace std;

int main(){
	int n = 0, cn = 0, tmp = 0, cnt = 0;
	
	cin >> n;
	cn = n;
	
	while(true){
		//�ڸ����� 1�� ����  ���� ��ó�� 
		if(cn<10){
			cn*10;
		}
		
		//10�� �ڸ��� + 1�� �ڸ���
		tmp = (cn/10) + (cn%10);
		
		//������ 1�� �ڸ����� �������� 1�� �ڸ����� ���̱�
		cn = (cn%10 * 10) + tmp%10;
				
		//����Ŭ�� ����++ 
		cnt += 1;
		
		//����Ŭ ���� 
		if(cn==n){
			break;
		}
	}
	cout << cnt;
}
