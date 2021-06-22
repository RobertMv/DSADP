#pragma once
class Cell
{
private:
	// ����� ������
	int number;
	// ��������� ������
	bool isBusy;

public:
	// ����������� ��� ����������
	Cell();
	// ����������� � �����������
	Cell(int number, bool isBusy);
	// ����������
	~Cell();
	// ������ ������ ������
	void setNumber(int number);
	// ������ ��������� ������
	void setBusyness(bool isBusy);
	// ������ ������ ������
	int getNumber() { return number; }
	// ������ ��������� ������
	bool getBusyness() { return isBusy; }
};