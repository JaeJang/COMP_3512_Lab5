#include "AbstractOperation.hpp"

class SubstractionOperation : public AbstractOperation {

public:
	const static char OPERATION_CODE = '-';
	SubstractionOperation() :AbstractOperation(OPERATION_CODE) { }
	virtual ~SubstractionOperation() { }
	int perform(int a, int b) { return a - b; }
};