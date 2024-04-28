#include <iostream>
using namespace std;

class CoffeeMachine { //CoffeeMachine Ŭ������ �ۼ�
	int coffee; //Ŀ��
	int water; //��
	int sugar; //����
public:
	CoffeeMachine(int c, int w, int s) {
		coffee = c;
		water = w;
		sugar = s;
	}
	void drinkEspresso() {
		coffee -= 1; // Ŀ�� 1 �Һ�
		water -= 1; //�� 1 �Һ�
	}
	void dninkAmericano() {
		coffee -= 1; // Ŀ�� 1 �Һ�
		water -= 2; //�� 2 �Һ�
	}
	void drinkSugarCoffee() {
		coffee -= 1; // Ŀ�� 1 �Һ�
		water -= 2; //�� 2 �Һ�
		sugar -= 1; //���� 1 �Һ�
	}
	void fill() { // Ŀ�� 10, �� 10, ���� 10���� ä���
		coffee = 10;
		water = 10;
		sugar = 10;
	}
	void show() { // ���� Ŀ�� �ӽ��� ���� ���
		cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << '\t' << "��:" << water << '\t' << "����:" << sugar << endl;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3); // Ŀ�Ƿ�:5, ����:10, ����:6���� �ʱ�ȭ
	java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.dninkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.fill(); // Ŀ�� 10, �� 10, ���� 10���� ä���
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
}