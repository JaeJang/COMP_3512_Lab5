#include "AbstractOperation.hpp"

class MultiplicationOperation : public AbstractOperation {
public:
	const char OPERATION_CODE = '*';
	MultiplicationOperation() :AbstractOperation(OPERATION_CODE) { }
	virtual ~MultiplicationOperation() { }
	int perform(int a, int b) { return a * b; }
};