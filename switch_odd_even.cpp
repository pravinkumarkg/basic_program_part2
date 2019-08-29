#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	switch(n%2==0)
	{
		case 0:
			cout<<"odd";
			break;
		case 1:
			cout<<"even";
			break;
	
	}
	return 0;
}
