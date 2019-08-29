#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	switch(n>0)
	{
		case 1:
		cout<<"positive";
		break;
		case 0:
		switch(n<0)
		{
			case 1:
			cout<<"negative";
			break;
			case 0:
			cout<<"zero";
			break;
		}
	}
	return 0;
}
