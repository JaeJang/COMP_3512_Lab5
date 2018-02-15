#pragma once
#include "Operation.hpp"

class AbstractOperation : public Operation{

private:
	char operation_type;

public:
	virtual ~AbstractOperation() { }
	explicit AbstractOperation(char type) :operation_type(type) { };
	virtual char  get_code() override { return operation_type; }
};