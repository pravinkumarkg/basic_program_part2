#include <iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	(ch>=65&&ch<=90||ch>=97&&ch<=122)?cout<<ch<<" "<<"is alphabet":cout<<ch<<" "<<"is not a alphabet";
	return 0;
}
