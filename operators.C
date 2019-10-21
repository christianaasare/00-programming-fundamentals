#include <iostream>

using namespace std;

int main()
{
	int num=2;
	num<<1;
	cout<<num<<endl;

	int pre_inc=2;
	cout<<++++pre_inc<<endl;

	int mult=4;
	cout<<(mult*=6)<<endl;

	int right,assoc;
	int assign=right=assoc=3;
	cout<<assign<<endl;

	float f=5.3;
	int cast = static_cast<int>(f);
	cout<<cast<<endl;
}
