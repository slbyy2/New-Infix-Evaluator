#include "Evaluator.h"
#include <string>
#include <stack>
#include <iostream>
#include <sstream>

using namespace std;

const string Evaluator::infix_operators[] = { "!", "++", "--", "-", "^", "*", "/", "%", "+", "-", ">", "<", ">=", "<=", "==",
"!=", "&&", "||" }; //operators
const int Evaluator::infix_precedence[] = { 8, 8, 8, 8, 7, 6, 6, 6, 5, 5, 4, 4, 4, 4, 3, 3, 2, 1 };