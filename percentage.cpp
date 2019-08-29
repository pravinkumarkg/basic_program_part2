#include <iostream>
using namespace std;

int main() {
	int py,chem,mat,cs,bio;
	cin>>py>>chem>>mat>>cs>>bio;
	float total,per;
	total=py+chem+mat+cs+bio;
	per=total/5;
	if(per>=90)
	{
		cout<<"Grade A";
	}
	else if(per>=80)
	{
		cout<<"Grade B";
	}
	else if(per>=70)
	{
		cout<<"Grade C";
	}
	else if(per>=60)
	{
		cout<<"Grade D";
	}
	else if(per>=40)
	{
		cout<<"Grade E";
	}
	else if(per<40)
	{
		cout<<"Grade F";
	}
	else
	{
		cout<<"fail";
	}
	
	return 0;
}
