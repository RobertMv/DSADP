#include "Cell.h"

Cell::Cell(int number, bool isBusy) {
	setNumber(number);
	setBusyness(isBusy);
}

Cell::Cell() {
	setNumber(0);
	setBusyness(false);
}

Cell::~Cell(){}

void Cell::setNumber(int number) {
	this->number = number;
}

void Cell::setBusyness(bool isBusy) {
	this->isBusy = false;
}