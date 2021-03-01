
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//
void showElements();
void PercentageBiden ();
void PercentageTrump();
void PercentageJorgensen();
void line();

float per[4];			
unsigned long vote[3][5]={
							{ 1, 5284453, 5658847, 70046, 110133462},
							{ 2, 2465781, 2455428, 61894, 4983103},
							{ 3, 2790648, 2644525, 60287, 5495460},
							};
int main()
{
	int option;
	showElements();
	opt:
	{
		Opt:			
			{
				cout<<"\n\nPress the states code to calculate percentage of Trum, Biden and Jorgensen Votes"<<endl;
				cout<<"Press 1 for Florida."<<endl;
				cout<<"Press 2 for Georgia."<<endl;
				cout<<"Press 3 for Michigan."<<endl;
				cout<<"Press 4 for Exit."<<endl;
				cout<<"\n\nPlease Select an Option, use numbers from 1 to 4 :   ";
				cin>>option; 
			}
	switch(option)
	{
		case 1:
			line();
			PercentageBiden ();
			{
				cout<<"\nPercentage of Jo Biden votes is: "<<per[1]<<endl;
				cout<<"\nPercentage of Donald Trump votes is: "<<per[2]<<endl;
				cout<<"\nPercentage of Jo Jorgensen votes is: "<<per[3]<<endl;
				goto opt;
			}
			break;
		case 2:
			line();
			PercentageTrump();
				{
				cout<<"\nPercentage of Jo Biden votes is: "<<per[1]<<endl;
				cout<<"\nPercentage of Donald Trump votes is: "<<per[2]<<endl;
				cout<<"\nPercentage of Jorgensen votes is: "<<per[3]<<endl;
				goto opt;
				}
			break;
			case 3:
				line();
				PercentageJorgensen();
				{
				cout<<"\nPercentage of Jo Biden votes is: "<<per[1]<<endl;
				cout<<"\nPercentage of Donald Trump votes is: "<<per[2]<<endl;
				cout<<"\nPercentage of Jo Jorgensen votes is: "<<per[3]<<endl;
				goto opt;
				}
			break;
			case 4:
				return(0);
				break;
			default:
				{
					cout<<"\n\nChoice should be Between 1 to 4 " <<endl;
					cout<<"\nInvalid Choice, Please Select again: " <<endl;
					goto opt;
				}
	}
		system ("Pause");
	}
}
//Showing all data in arr
void showElements()
	{
		int b,c;
		cout<<"\nSource Data:\nStates\t\tBiden Votes\tTrump Votes\tJorgensen Votes\tTotalVotes\n";
		for (b=0; b<3; b++)
		{
			for (c=0; c<5; c++)
			cout<<vote[b][c]<<"\t\t";
			cout<<endl;
		}
	}
void PercentageBiden()
	{
		int b;
		for (b=1; b<4; b++)
		per[b]=float(vote[0][b])/11013346.0*100;
	}
void PercentageTrump()
	{
		int b;
			for (b=1; b<4; b++)
			per[b]=float(vote[1][b])/4983103.0*100;
	}
void PercentageJorgensen()
	{
		int b;
			for (b=1; b<4; b++)
			per[b]=float(vote[2][b])/5495460.0*100;
	}
void line()
{
	cout<<"\n--------------------------------------------";
}

