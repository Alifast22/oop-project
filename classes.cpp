#include <iostream>

using namespace std;

class airplane
{
	
};

class user
{
	string name;
	int age;
	int contact_num;
	string gender;
	
};
class plane:public airplane
{
	public:
		
	void bookticket()
	{
		
	}
	
	void modifyflight()
	{
		
	}
	void cancelflight()
	{
		
	}
	
	void annoucements()
	{
		
	}
};
class finance_account
{
	string bankname;
	int pin;
	float money;
	
};

class customer:public user,public plane,public finance_account
{
	int contact;
	string hotel;
	
	public:
	
	void payment_method()
	{
		
	}
	void print_receipt()
	{
		
	}
};


int main() {
  
 
}
