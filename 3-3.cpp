#include <iostream>
#include <string>
using namespace std;

class Account { //Account Ŭ������ �ۼ�
	//private ��� ����
	string name; //���� ����
	int id; //���� ��ȣ
	int balance; //�ܾ�
public:
	Account(string n, int i, int b) {
		name = n;
		id = i;
		balance = b;
	}
	string getOwner() {
		return name; //���� ������ �̸� ��ȯ
	}
	int inquiry() {
		return balance; //�ܾ� ��ȯ
	}
	void deposit(int money) {
		balance += money; //�ܾ׿� �߰�
	}
	int withdraw(int money) {
		if (money > balance) {
			money = balance;
			balance = 0;
		}//���ǹ�
		else
			balance -= money;
		return money; // ����� �ݾ� ��ȯ
	}
};

int main() {
	Account a("kitae", 1, 5000); //id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	a.deposit(50000); //50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl; //���
	int money = a.withdraw(20000); //20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl; //���
}