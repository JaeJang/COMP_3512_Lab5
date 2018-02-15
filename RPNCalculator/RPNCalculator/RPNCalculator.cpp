#include "RPNCalculator.hpp"
#include <iostream>
#include <string>
#include <sstream>

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

	stack.push(operation->perform(top2, top1));
}

//Process passed formula
//PRE	: well formatted formula is needed
//POST	: tokenize the formula and push them into stack and calculate
//RETURE: final value
int RPNCalculator::process_formula(std::string formula)
{
	
	std::istringstream iss(formula);
	std::string operand;
	
	while (iss >> operand) {
		std::istringstream iss2(operand);
		int temp;
		if (iss2 >> temp) {
			stack.push(temp);
		}
		else {
			perform(operation_type(operand[0]));
		}
	}
	return stack.top();
}
