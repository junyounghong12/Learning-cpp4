#include<iostream>
using namespace std;

class Tower { //TowerŬ������ �ۼ�
	int h; //Ÿ���� ���̸� ��Ÿ���� ��� ���� 
public:
	Tower() :Tower(1) {}; //�⺻ ������
	Tower(int a) { h = a; } //�Ű������� �ִ� ������
	int getHeight() { return h; } //Ÿ���� ���̸� ��ȯ
};

int main() {
	Tower myTower; // 1 ����
	Tower seoulTower(100); // 100 ����
	cout << "���̴� " << myTower.getHeight() << "����" << endl; //���
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl; //���
}