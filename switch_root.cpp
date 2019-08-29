#include <iostream>
#include<math.h>
using namespace std;

int main() {
	float a,b,c;
	float r1,r2,imag,dis;
	cin>>a>>b>>c;
	dis=(b*b)-4*a*c;
	switch(dis>0)
	{
		case 1:
		r1=(-b+sqrt(dis))/(2*a);
		r2=(-b-sqrt(dis))/(2*a);
		cout<<r1<<" "<<r2;
		break;
		case 0:
		switch(dis<0)
		{
				case 1:
				r1=r2=-b/(2*a);
				imag=sqrt(dis)/(2*a);
				cout<<r1<<" "<<r2;
				break;
				case 0:
				r1=r2=-b/(2*a);
				cout<<r1<<" "<<r2;
				break;
		}
	}

	
	return 0;
}
