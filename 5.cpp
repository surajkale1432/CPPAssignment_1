#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct SalesManagerInfo
{
	int smId;
	char smName[20];
	double smSalary;
	double smIncentive;
	int smTarget;

	// setters
	void setSmId(int id)
	{
		this->smId = id;
	}
	void setSmName(char* name)
	{
		strcpy(this->smName, name);
	}
	void setSmSalary(double sal)
	{
		this->smSalary = sal;
	}
	void setSmIncentive(double inc)
	{
		this->smIncentive = inc;
	}
	void setSmTarget(int tar)
	{
		this->smTarget = tar;
	}

	// getters
	int getSmId()
	{
		return this->smId;
	}
	char *getSmName()
	{
		return this->smName;
	}
	double getSmSalary()
	{
		return this->smSalary;
	}
	double getSmIncetive()
	{
		return this->smIncentive;
	}
	int getSmTarget()
	{
		return this->smTarget;
	}

	// default constructor
	SalesManagerInfo()
	{
		this->smId = 0;
		strcpy(this->smName ,"NULL");
		this->smSalary = 0;
		this->smIncentive = 0;
		this->smTarget = 0;
	}

	//parameterized constructor
	SalesManagerInfo(int id,char* name,double sal,double inc, int target)
	{
		this->smId=id;
		strcpy(this->smName,name);
		this->smSalary=sal;
		this->smIncentive=inc;
		this->smTarget=target;
	}

	void display()
	{
		printf("\n\nDisplay");
		printf("\nSMId = %d",this->smId);
		printf("\nSMName = %s",this->smName);
		printf("\nSMSalary = %.0lf",this->smSalary);
		printf("\nSMIncentive = %.0lf",this->smIncentive);
		printf("\nSMTarget = %.0lf",this->smTarget);
	}
};
int main()
{
	// SalesManagerInfo s1,s2,s3(30,"Srihari",80000,4000,40);
	SalesManagerInfo s1,s2,s3(30,"Shreya",45000,2000,120);
	s1.setSmId(10);
	s1.setSmName("Nikhil");
	s1.setSmSalary(65000);
	s1.setSmIncentive(5000);
	s1.setSmTarget(156);

	s1.display();
	s2.display();
	s3.display();
}