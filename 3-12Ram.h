#ifndef RAM_H
#define RAM_H

//�����
class Ram {
	char mem[100 * 1024]; // 100KB �޸�. �� ������ �� ����Ʈ�̹Ƿ� char Ÿ�� ���
	int size;
public:
	Ram(); // mem �迭�� 0���� �ʱ�ȭ�ϰ� 5ize 100*1024�� �ʱ�ȭ
	~Ram(); //���޸� ���ŵʡ� ���ڿ� ���
	char read(int address); // address �ּ��� �޸� ����Ʈ ����
	void write(int address, char value); // address �ּҿ� �� ����Ʈ�� value ����
};
#endif