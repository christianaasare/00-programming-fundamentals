#include<iostream>
#include<vector>
using namespace std;

struct Date{
	int year;
	int month;
	int day;
	int *dateptr;
	
};

int main()
{
	Date birthday{};
	birthday.year=2015;
	birthday.month=6;
	birthday.day=30;

	Date date1{};
	date1.year=1984;
	date1.month=2;
	date1.day=28;

	Date date2{};
	date2.year=2019;
	date2.month=2;
	date2.day=28;

	if(birthday.year>=date1.year && birthday.month>=date1.month && birthday.day>=date1.day)
	{
		cout<<"Later in time date is " << birthday.year << "-" <<birthday.month << "-" <<birthday.day<<endl;
	}
	else
	{
		cout<<"Later in time date is " << date1.year << "-" <<date1.month << "-" <<date1.day<<endl;
	}	

	vector<Date> dates{birthday,date1, date2};
		cout<<date1.year<<endl;
	
	int *dateptr;
	      dateptr=&date1.year;
	      (*dateptr)=1997;
	      cout<<(*dateptr);


}
