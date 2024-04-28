#include <iostream>
#include "3_12Ram.h"
using namespace std;

//구현부
Ram::Ram() {
	mem[100 * 1024] = { 0, };//초기화
	size = 100 * 1024;
}
Ram::~Ram() {
	std::cout << "메모리 제거됨" << std::endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}

int main() {
	Ram ram;
	ram.write(100, 20); // 100 번지에 20 저장
	ram.write(101, 30);// 101 번지에 30 저장
	char res = ram.read(100) + ram.read(101); // 20 + 30 = 50
	ram.write(102, res); // 102 번지에 50 저장
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl; // 102 번지 값 출력
}