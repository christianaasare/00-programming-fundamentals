#include <iostream>

using namespace std;

int main(){

	int arr[4] {5,8,2,1};

	int *p{arr};
	
	p[1] = 3;
	
	cout<<*(p + 1);
};
