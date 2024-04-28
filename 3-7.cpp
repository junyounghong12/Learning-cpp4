#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int select;
public:
	SelectableRandom(int s) { //�����ڸ� �̿��Ͽ� ¦��(0) Ȧ��(1)�� ����
		select = s;
	}
	SelectableRandom() {
		srand((unsigned)time(0)); //������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
	}
	int next() {
		int n = (rand() / 2) * 2;
		if (select == 0) //¦�� ���� ��ȯ
			return n;
		else if (select == 1) //Ȧ�� ���� ��ȯ
			return n + 1;
	}
	int nextInRange(int min, int max) {
		if (select == 0) { //¦��
			if (min % 2 == 1)
				min++;
		}
		else if (select == 1) { //Ȧ��
			if (min % 2 == 0)
				min++;
		}
		return min + 2 * (rand() % ((max - min + 2) / 2)); //min�� max ������ ���� ���� ��ȯ
	}
};

int main() {
	SelectableRandom even(0); //¦��
	SelectableRandom odd(1); //Ȧ�� 
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl; //���
	for (int i = 0; i < 10; i++) {
		int n = even.next(); // 0���� RAND_MAX(32767) ������ ������ ¦�� ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl; //���
	for (int i = 0; i < 10; i++) {
		int n = odd.nextInRange(2, 9); // 2���� 9 ������ ������ Ȧ�� ����
		cout << n << ' ';
	}
	cout << endl;
}