#include <iostream>
#include <string>
using namespace std;

class bank_account
{
public:
	void deposit() {
		cout << "hello! how much do you want to deposit?"<<endl;
		cin >>depositing2 ;
		cout<< "your balance is now: " << balance2 + depositing2 << endl;
		
	};
	void withdraw_out() {
		cout << "how much do you want to withdraw?"<<endl;
		cin >> withdraw;
		if (withdraw2 > balance2)
		{
			cout << "you can not withdraw that much!"<< endl;
			exit(true);
		}
	};

private:

	string balance = "0";
	string withdraw="0";
	string depositing="0";
	int withdraw2 = stoi(withdraw); 
	int depositing2 = stoi(depositing);
	int balance2 = stoi(balance);
};
int main()
{
	bank_account object{};
	string password_1 = "123";
	string login_1 = "1488228";
	string login;
	string password;
	cout << "hello , log in: ";
	cin >> login;
	cout << "enter password:";
	cin >> password;
	string choice;
	if (password==  password_1 and login == login_1)
	{
		cout << "press 1 if you want to deposit money to your bank account or press anything and widthdraw your money: ";
		cin >> choice;
		if (choice == "1")
		{
			object.deposit();
		}
		else
		{
			object.withdraw_out();
		}
	}
}
