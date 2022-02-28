#pragma once

class Weapon
{
public:
	//������(Constructor)
	// -> Ŭ���� �̸��� ������ �Լ�
	// -> ��ü�� ������ �� �� 1ȸ ȣ��
	// -> �����ε� ����
	Weapon(); //�⺻������
	Weapon(string name, int range, int comboCount); //�����ε��� ������

	//�Ҹ���(Destroctor)
	// -> Ŭ������ �̸��� ������ ~�Լ�
	// -> ��ü�� �Ҹ�� �� �� 1ȸ ȣ��
	// -> �����ε� �Ұ�
	~Weapon();

	void ShowStatus();
	void SetName(string name) { this->name = name; }

	void SetComboPower(int count, int power);

private:
	string name;
	int range;

	int comboCount;
	int* powerTable;
};
