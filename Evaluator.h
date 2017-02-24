
#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <sstream>

using namespace std;


class Evaluator
{
public:
	int evaluator(const string& expression);



private:
	static const string infix_operators[];
	static const int infix_precedence[];
	stack<string> operator_stack;
	stack<int> number_stack;


};