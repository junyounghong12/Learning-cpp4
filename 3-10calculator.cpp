#include <iostream>
using namespace std;

//�����
class Add {
	int a, b; // �ǿ�����
public:
	void setValue(int x, int y); // �Ű� ���� x, y�� ��� a, b�� ����
	int calculate(); //������ �����ϰ� ��� ����
};
class Sub {
	int a, b; // �ǿ�����
public:
	void setValue(int x, int y); // �Ű� ���� x, y�� ��� a, b�� ����
	int calculate(); //������ �����ϰ� ��� ����
};
class Mul {
	int a, b; // �ǿ�����
public:
	void setValue(int x, int y); // �Ű� ���� x, y�� ��� a, b�� ����
	int calculate(); //������ �����ϰ� ��� ����
};
class Div {
	int a, b; // �ǿ�����
public:
	void setValue(int x, int y); // �Ű� ���� x, y�� ��� a, b�� ����
	int calculate(); //������ �����ϰ� ��� ����
};

//������
void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	return a + b; //��� ��ȯ
}
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b; //��� ��ȯ
}
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;//��� ��ȯ
}
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	return a / b; //��� ��ȯ
}

int main() {
	int x, y; //�� ����
	char oper; //������
	while (1) { //�ݺ�
		cout << "�� ������ �����ڸ� �Է��ϼ���>>"; //���ù� ���
		cin >> x >> y >> oper; //�� ���� ������ �����ڸ� �Է�
		switch (oper) {
		case '+':
			Add a;
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			Sub s;
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			Mul m;
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			Div d;
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		}
	}
	return 0;
}