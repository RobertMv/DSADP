#pragma once
class Cell
{
private:
	// номер ячейки
	int number;
	// занятость ячейки
	bool isBusy;

public:
	// конструктор без параметров
	Cell();
	// конструктор с параметрами
	Cell(int number, bool isBusy);
	// деструктор
	~Cell();
	// сеттер номера ячейки
	void setNumber(int number);
	// сеттер зянятость ячейки
	void setBusyness(bool isBusy);
	// геттер номера ячейки
	int getNumber() { return number; }
	// геттер занятости ячейки
	bool getBusyness() { return isBusy; }
};