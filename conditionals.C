#include <iostream>

using namespace std;

struct Date
{
	int year;
	int day;
	int month;
	

};

//enum months {Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12};

int main()
{
	Date your_date{};

	cout<<"Year: ";
	cin>> your_date.year;
	cout<<"Month: ";
	cin>>your_date.month;
	cout<<"Day:  ";
	cin>>your_date.day;



	if (your_date.year>19 && your_date.month>10 && your_date.day>18)
	{
		cout<<"This date is in the future"<<endl;
	}
	else
	{
		cout<<"This date is in the past."<<endl;
	}





	if(your_date.year%4==0 && your_date.year%100==0 ){
		cout<<"It is a leap year"<<endl;
	}
	else if(your_date.year%100==0 && your_date.year%4==0)
	{
		cout<<"It is a leap year"<<endl;
	}
	else if(your_date.year% 400==0)
	{
		cout<<"This is a leap year."<<endl;
	}
	else
	{
		cout<<"Not a leap year." <<endl;
	}	
	

	switch(your_date.day){
		case 1:
			cout<<your_date.day<<"st"<<" ";
			break;
		case 2:
			cout<<your_date.day<<"nd"<<" ";
			break;
		case 3:
			cout<<your_date.day<<"rd"<<" ";
			break;
		case 21:
			cout<<your_date.day<<"st"<<" ";
			break;
		case 22: 
			cout<<your_date.day<<"nd"<<" ";	
			break;
		case 23:
			cout<<your_date.day<<"rd"<<" ";
			break;
		case 31:
			cout<<your_date.day<<"st"<<" ";
			break;	
		default:
			cout<<your_date.day<<"th"<<" ";
	}

	switch(your_date.month){
	       	case 1: 
			cout<<"Jan"<<" "<<your_date.year<<endl;
			break;
		case 2:
			cout<<"Feb"<<" "<<your_date.year<<endl;
			break;
		case 3:
                        cout<<"Mar"<<" "<<your_date.year<<endl;
			break;
		case 4:
			cout<<"Apr"<<" "<<your_date.year<<endl;
			break;
		case 5:
			cout<<"May"<<" "<<your_date.year<<endl;
			break;
		case 6: 
			cout<<"Jun"<<" "<<your_date.year<<endl;
			break;
		case 7:
			cout<<"Jul"<<" "<<your_date.year<<endl;
			break;
		case 8:
			cout<<"Aug"<<" "<<your_date.year<<endl;
			break;
		case 9:
			cout<<"Sep"<<" "<<your_date.year<<endl;
			break;
		case 10:
			cout<<"Oct"<<" "<<your_date.year<<endl;
			break;
		case 11:
			cout<<"Nov"<<" "<<your_date.year<<endl;
			break;
		case 12:
			cout<<"Dec"<<" "<<your_date.year<<endl;
			break;
		default:
			cout<<"That is not a month";
			break;
	}
};
