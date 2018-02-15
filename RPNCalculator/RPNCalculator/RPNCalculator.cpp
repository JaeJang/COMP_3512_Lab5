#include "RPNCalculator.hpp"

//Decide operation type
//PRE	: parameter should be one of +,-,* and /
//RETURN: matched class

Operation * RPNCalculator::operation_type(char operation)
{	
	if (operation == AdditionOperation::OPERATION_CODE)
		return new AdditionOperation;
	else if (operation == SubstractionOperation::OPERATION_CODE)
		return new SubstractionOperation;
	else if (operation == MultiplicationOperation::OPERATION_CODE)
		return new MultiplicationOperation;
	else
		return new DivisionOperation();
}
