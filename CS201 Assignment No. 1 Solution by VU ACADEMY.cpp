/*

CS201 Assignment No.1 
Fall 2020
Solution by VU ACADEMY

Must watch video to change in code (Avoid copy case issue)

Video Link : https://youtu.be/iBgQW80wyx4


*/
#include<iostream>
using namespace std;
main()
{
	long sal_level_a=125000, sal_level_b=80000, sal_level_c=45000;
	int total_employees=10;
	int welfare_fund=600;
	int tax_level_a, total_tax_A, tax_level_b, total_tax_B, tax_level_c,total_tax_C, total_tax;
	int option;
	long Net_salary_A, Net_salary_B, Net_salary_C, total_pay;
	
	// FUNDS
	int total_fund=total_employees*welfare_fund;
	
	long anual_salary_A=sal_level_a*12;
	long anual_salary_B=sal_level_b*12;
	long anual_salary_C=sal_level_c*12;
	
	if(anual_salary_A>600000)
	{
		tax_level_a=sal_level_a*1/100;
	}
	total_tax_A=tax_level_a*2;
	if(anual_salary_B>600000)
	{
		tax_level_b=sal_level_b*1/100;
	}
	total_tax_B=tax_level_b*3;
	if(anual_salary_C>600000)
	{
		tax_level_c=sal_level_c*1/100;
	}
	total_tax_C=tax_level_c*5;
	
	// TAX CALCULATION
	total_tax=total_tax_A+total_tax_B+total_tax_C;
	
	
	// NET SALARIES
	Net_salary_A= sal_level_a - tax_level_a - welfare_fund;
	Net_salary_B= sal_level_b - tax_level_b - welfare_fund;
	Net_salary_C= sal_level_c - tax_level_c - welfare_fund;
	
	//total_pay=(Net_salary_A*2)+(Net_salary_B*3)+(Net_salary_C*5);
	total_pay=(sal_level_a*2)+(sal_level_b*3)+(sal_level_c*5);
	
	cout<<"\n\n\t\tCS201 Assignment No. 1 Fall 2020 Solution by VU ACADEMY\n\n\n";
	
	cout<<"Total Monthly tax deduction of all employees : "<<total_tax;
	cout<<"\nTotal amount of welfare fund collected : "<<total_fund;
	cout<<"\nNet monthly salary of level A employees : "<<Net_salary_A;
	cout<<"\nNet monthly salary of level B employees : "<<Net_salary_B;
	cout<<"\nNet monthly salary of level C employees : "<<Net_salary_C;
	cout<<"\nTotal amount paid by university after a month : "<<total_pay;
	
	// MENU
	cout<<"\nEnter 1 to know the tax collection of level A employees";
	cout<<"\nEnter 2 to know the tax collection of level B employees";
	cout<<"\nEnter 3 to know the tax collection of level C employees"<<endl;
	cin>>option;
	if(option==1)
	{
		cout<<"Tax collection of level A employee is Rs. "<<total_tax_A;
	}
	else if(option==2)
	{
		cout<<"Tax collection of level B employee is Rs. "<<total_tax_B;
	}
	else if(option==3)
	{
		cout<<"Tax collection of level C employee is Rs. "<<total_tax_C;
	}
	else
	{
		cout<<"Sorry! Invalid Input";
	}
}

