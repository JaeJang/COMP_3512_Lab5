#pragma once
#include "AbstractOperation.hpp"

class AdditionOperation : public AbstractOperation {

public:
	const static char OPERATION_CODE = '+';
	AdditionOperation() :AbstractOperation(OPERATION_CODE) { }
	virtual ~AdditionOperation() { }
	int perform(int a, int b) { return a + b; }

};