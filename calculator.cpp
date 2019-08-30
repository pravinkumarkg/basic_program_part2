#include <iostream>
using namespace std;

int main() {
	char op;
    float num1, num2, result;
	cin>>num1>>op>>num2;
	switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            cout<<"Invalid operator";
    }

    cout<<num1<<op<<num2<<"="<<result;


	return 0;
}
