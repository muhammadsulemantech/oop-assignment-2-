#include<iostream>
using namespace std;

class employee
{
	protected:
	int id;
	string name;
	
	void setdata()
	{
		cout<<"Enter your Id"<<endl;
		cin>>id
		cout<<"Enter your Name"<<endl;
		cin>>name;
		
	}
	void getData()
	{
		cout<<"ID: "<<id<<endl;
		cout<<"Employee Name: "<<name<<endl;
	}
};
class manager : public employee
{
    protected:
	string rank;
	public:
	void setdata()
	{
	employee :: getdata();
	cout<<"Enter your rank";
	cin>>rank;
	}
	void getdata()
	{
		employee:: getdata();
		cout<<"Manager rank "<<rank<<endl;
	}
	
};


class scientist : public employee
{
	protected:
	float  research;
	public:
	void setdata()
	{
	employee :: getdata();
	cout<<"Enter research number";
	cin>>rank;
	}
	void getdata()
	{
		employee:: getdata();
		cout<<"Manager rank "<<rresearch<<endl;
	}

};
class labour : public employee
{
	
};


class compensation
{
	protected:
	double amount;
	string compclass;
	int choice;
	public:
	
	void setcompensation()
	{
		cout<<"Enter coompensation amount "<<endl;
		cin>>amount;
		
		cout<<"1. monthy"<<endl;
		cout<<"1. weekly"<<endl;
		cout<<"1. daily"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		
		if(choice==1)
		{
			compClass="monthly";
		}
		else if(choice==2)
		{
			compClass="weekly";
		}
		else if(choice==3)
		{
			compClass="daily";
		}
		else
		{
		 cout<<"Compensation Amount: "<<amount<<" paid "<<compClass<<endl;
		}
    }
};

class manager2: public manager, public compensation{
	public:
	void setData(){
		manager::setData();
		compensation::setCompensation();
	}	
	void getData(){
		manager::getData();
		compensation::getCompensation();
	}
};
class scientist2: public scientist, public compensation{
	public:
	void setData(){
		scientist::setData();
		compensation::setCompensation();
	}	
	void getData(){
		scientist::getData();
		compensation::getCompensation();
	}
};
class labour2: public labour, public compensation{
	public:
	void setData(){
		labour::setData();
		compensation::setCompensation();
	}	
	void getData(){
		labour::getData();
		compensation::getCompensation();
	}
}; 
int main()
{
	
	manager2 m2;
	m2.setData();
	m2.getData();
	
	scientist2 s2;
	s2.setData();
	s2.getData();
	
	labour2 l2;
	l2.setData();
	l2.getData();
	return 0;
}
