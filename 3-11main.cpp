#include "3_11Box.h"
#include <iostream>
using namespace std;

int main() {
	Box b(10, 2);
	b.draw(); // �ڽ��� �׸���.
	cout << endl;
	b.setsize(7, 4); // �ڽ��� ũ�⸦ �����Ѵ�.
	b.setFill('^'); // �ڽ��� ���θ� ä�� ���ڸ� '^'�� �����Ѵ�.
	b.draw(); // �ڽ��� �׸���.
}