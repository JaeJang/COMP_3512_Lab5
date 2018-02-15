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

//Perform main feature
//PRE	: one of 4classes need to be passed
//POST	: take top 2elements out 
//		  push calculated result into the stack
void RPNCalculator::perform(Operation * operation)
{
	int top1 = stack.top();
	stack.pop();
	int top2 = stack.top();
	stack.pop();

	stack.push(operation->perform(top1, top2));
}
