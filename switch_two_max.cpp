#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	switch(a>b)
	{
		case 0:
			cout<<b;
			break;
		case 1:
			cout<<a;
			break;
	
	}
	return 0;
}
