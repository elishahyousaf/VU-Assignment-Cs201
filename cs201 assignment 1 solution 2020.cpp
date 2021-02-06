// by VU Assignment and Solution

#include<iostream> 

using namespace std;

int main()
{
	double salary_L_a = 125000, salary_L_b = 80000, salary_L_c = 45000;
	
	int total_employees = 10;
	int welfare_fund = 600;
	
	int tax_L_a,  tax_L_b,  tax_L_c; 
	int total_tax_A,total_tax_B,total_tax_C,total_tax;
	
	int choice;
	double Net_Sal_A, Net_Sal_B, Net_Sal_C, total_pay;
	
	
	int total_fund = total_employees  *  welfare_fund;
	// 10 * 600 = 6000
	
	double anual_salary_A = salary_L_a * 12; // 125000 * 12 = 1231500
	double anual_salary_B = salary_L_b * 12; // 80000 * 12 = 786000
	double anual_salary_C = salary_L_c * 12; // 45000 * 12 = 444000
	
	
	if(anual_salary_A > 600000)
	{
		tax_L_a = salary_L_a * 1/100;
	}
	total_tax_A = tax_L_a * 2;
	
	if(anual_salary_B > 600000)
	{
		tax_L_b = salary_L_b * 1/100;
	}
	total_tax_B = tax_L_b * 3;
	
	if(anual_salary_C > 600000)
	{
		tax_L_c = salary_L_c * 1/100;
	}
	total_tax_C = tax_L_c * 5;
	
	// total tax collected
	total_tax = total_tax_A + total_tax_B + total_tax_C;
	
	
	// net salaries of all levels
	Net_Sal_A = salary_L_a - (tax_L_a + welfare_fund);
	Net_Sal_B = salary_L_b - (tax_L_b + welfare_fund);
	Net_Sal_C = salary_L_c - (tax_L_c + welfare_fund);
	
	//total salary paid by the university
	total_pay = (salary_L_a * 2)+(salary_L_b * 3)+(salary_L_c * 5);
	
	
	// information box
	cout<<"Total Monthly tax deduction of all employees : "<<'\t'<<total_tax;
	cout<<"\nTotal amount of welfare fund collected : "<<'\t'<<total_fund<<endl;
	cout<<"\nNet monthly salary of level A employees : "<<'\t'<<Net_Sal_A;
	cout<<"\nNet monthly salary of level B employees : "<<'\t'<<Net_Sal_B;
	cout<<"\nNet monthly salary of level C employees : "<<'\t'<<Net_Sal_C<<endl;
	cout<<"\nTotal amount paid by university after a month : "<<'\t'<<total_pay<<endl;
	
	// choice
	cout<<"\nEnter 1 to know the tax collection of level A employees";
	cout<<"\nEnter 2 to know the tax collection of level B employees";
	cout<<"\nEnter 3 to know the tax collection of level C employees"<<endl;
	cin >>choice;
	
	
	if(choice == 1)
	{
		cout<<"Tax collection of level A employee is Rs. "<<total_tax_A;
	}
	else if(choice == 2)
	{
		cout<<"Tax collection of level B employee is Rs. "<<total_tax_B;
	}
	else if(choice == 3)
	{
		cout<<"Tax collection of level C employee is Rs. "<<total_tax_C;
	}
}

