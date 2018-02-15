#pragma once
#include "DivisionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "SubtractionOperation.hpp"
#include "AdditionOperation.hpp"
#include <stack>

class RPNCalculator {

private:
	int result;
	std::stack<int> stack;
	Operation* operation_type(char operation);
	
};