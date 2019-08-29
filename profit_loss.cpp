#include <iostream>
using namespace std;

int main() {
	int sp,cp,amt;
	cin>>sp>>cp;
	if(sp>cp)
	{
		amt=sp-cp;
		cout<<"profit:"<<amt;
	}
	else if(sp<cp)
	{
		amt=cp-sp;
		cout<<"loss:"<<amt;
	}
	else
	{
		cout<<"No profit No loss";
	}
	return 0;
}
