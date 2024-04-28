#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom { //¦�� ������ �����ϰ� �߻���Ű�� EvenRandom Ŭ���� �ۼ�
public:
	EvenRandom() {
		srand((unsigned)time(0)); //������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
	}
	int next() { //0���� RAND_MAX(32767) ������ ������ ¦�� ����
		int n = 0;
		while (1) {
			n = rand();
			if ((n % 2) == 0) //n�� ¦���� ��ȯ�ϴ� ���ǹ�
				return n;
		}
	}
	int nextInRange(int min, int max) { //min�� max ������ ���� ¦�� ���� ����
		int n = (max - min + 2) / 2;
		n = min + (rand() % n) * 2;	
		return n;
	}
};

int main() {
	EvenRandom even;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl; //���
	for (int i = 0; i < 10; i++) {
		int n = even.next(); // 0���� RAND_MAX(32767) ������ ������ ¦�� ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 ��--" << endl; //���
	for (int i = 0; i < 10; i++) {
		int n = even.nextInRange(2, 10); // 2���� 10 ������ ������ ¦�� ����
		cout << n << ' ';
	}
	cout << endl;
}