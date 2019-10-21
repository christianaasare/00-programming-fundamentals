#include <iostream>
#include <vector>
using namespace std;

struct Date{
int year;
int month;
int day;
};

int main()
{
	Date birthday{};
	birthday.year=2018;
	birthday.month=6;
	birthday.day=17;

	Date date1{};
	date1.year=2009;
	date1.month=8;
	date1.day=12;

	Date date2{};
	date2.year=2016;
	date2.month=12;
	date2.day=29;

	vector<Date> dates{birthday,date1, date2};
	
	for (auto i:dates){
		cout << i.year << "/" << i.month << "/" << i.day << endl;
		}
		
		if(birthday.year >= date1.year && birthday.month >= date1.month && birthday.day >= date1.day)
		{		
			cout<<birthday.year << "-"<< birthday.month << "-" <<birthday.day<<endl;	
		}	
		else if(date2.year >= date1.year && date2.month >= date1.month && date2.day >= date1.day)
		{
			cout<<date2.year << "-" << date2.month <<"-" << date2.day<<endl;
	
		}
		else
		{
			cout<<date1.year << "-" << date1.month <<"-"<<date1.day<<endl;
		}
		
	
	/*vector<int> dates{birthday,date1, date2};
	int i=0;
	for(auto i:dates){
		while(i<3){
			cout <<i.year << "-" << i.month << "-" << i.day <<endl;
			i++;
		}}*/

	int num;
	do{
	       cout<<"Enter a number" ;
       	       cin>>num;
	}
	while(num%2!=0);





};
