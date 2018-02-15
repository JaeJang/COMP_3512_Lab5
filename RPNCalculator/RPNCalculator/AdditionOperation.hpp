#include "AbstractOperation.hpp"

class AdditionOperation : public AbstractOperation {

public:
	const char OPERATION_CODE = '+';
	AdditionOperation() :AbstractOperation(OPERATION_CODE) { }
	virtual ~AdditionOperation() { }
	int perform(int a, int b) { return a + b; }

};