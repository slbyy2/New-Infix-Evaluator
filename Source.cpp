#include <string>
#include <stack>
#include <iostream>
#include "Evaluator.h"
#include "Parser.h"

using namespace std;



int main()
{
	Evaluator answer;
	int result = answer.evaluator("1 + 1 * 3 + 3");
	cout << result << endl;

	system("pause");
	return 0;
}