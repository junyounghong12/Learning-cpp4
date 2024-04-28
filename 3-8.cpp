#include <iostream>
#include <string>
using namespace std;

class Integer { //Integer Ŭ���� �ۼ�
	int integer;
public:
	Integer(int n) { //���� �Է�
		integer = n;
	}
	Integer(string n) { //���� �Է�(stoi() �Լ��� �̿��ϸ� string�� ���ڿ��� ���ڷ� ��ȯ)
		integer = stoi(n);  
	}
	int get() { 
		return integer; //integer ��ȯ
	}
	void set(int n) { 
		integer = n; 
	}
	int isEven() {
		return (integer + 1) % 2; //¦���� 1 ��ȯ
	}
};
int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 ���
	n.set(50);
	cout << n.get() << ' '; // 50 ���
	Integer m("300");
	cout << m.get() << ' '; // 300 ���
	cout << m.isEven(); // true(������ 1) ���
}