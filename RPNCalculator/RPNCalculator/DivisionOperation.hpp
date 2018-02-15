#include "AbstractOperation.hpp"

class DivisionOperation : public AbstractOperation {

public:
	const char OPERATION_CODE = '/';
	DivisionOperation() :AbstractOperation(OPERATION_CODE) { }
	virtual ~DivisionOperation() { }
	int perform(int a, int b) { return a / b; }
};