#include <iostream>
#include "3_12Ram.h"
using namespace std;

//������
Ram::Ram() {
	mem[100 * 1024] = { 0, };//�ʱ�ȭ
	size = 100 * 1024;
}
Ram::~Ram() {
	std::cout << "�޸� ���ŵ�" << std::endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}

int main() {
	Ram ram;
	ram.write(100, 20); // 100 ������ 20 ����
	ram.write(101, 30);// 101 ������ 30 ����
	char res = ram.read(100) + ram.read(101); // 20 + 30 = 50
	ram.write(102, res); // 102 ������ 50 ����
	cout << "102 ������ �� = " << (int)ram.read(102) << endl; // 102 ���� �� ���
}