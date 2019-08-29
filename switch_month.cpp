#include <iostream>
using namespace std;

int main() {
	int month;
	cin>>month;
	switch(month)
	{
		case 1:
			cout<<"31days";
			break;
		case 2:
			cout<<"28/29days";
			break;
		case 3:
			cout<<"31days";
			break;
		case 4:
			cout<<"30days";
			break;
		case 5:
			cout<<"31days";
			break;
		case 6:
			cout<<"30days";
			break;
		case 7:
			cout<<"31days";
			break;
		case 8:
			cout<<"31days";
			break;
		case 9:
			cout<<"30days";
			break;
		case 10:
			cout<<"31days";
			break;
		case 11:
			cout<<"30days";
			break;
		case 12:
			cout<<"31days";
			break;
		default:
			cout<<"invalid";
			break;
	}
	return 0;
}
