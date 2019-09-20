#include <iostream>
using namespace std;

int main() {
	char str[20],empty[20];
	cin>>str;
	int i,length=0,flag=0;
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		empty[length-i-1]=str[i];
	}
	for(flag=1,i=0;i<length;i++)
	{
		if(empty[i]!=str[i])
		flag=0;
	}
	if(flag==1)
	{
		cout<<"plaindrome";
	}
	else
	{
		cout<<"not an palindrome";
	}
	return 0;
}
