#include "phonebook.hpp"
#include "contact.hpp"

void PhoneBook::add(int index)
{
   
   _contact[index].SetInfo();
}

string	resize(string contact)
{	
	if (contact.length() >= 10)
	{
		contact = contact.substr(0, 10);
		contact[9] = '.';
	}
	return (contact);
}

void PhoneBook::searchForContact(int ID)
{
	cout << "first name : " << _contact[ID].GetFname() << endl;
	cout << "Last name : " << _contact[ID].GetLname() << endl;
	cout << "Nickname : " << _contact[ID].GetNname() << endl;
	cout << "Darkest Secret : " << _contact[ID].GetDsecret() << endl;
	cout << "Phone Number : " << _contact[ID].GetPnumber() << endl;
}

void PhoneBook::printContact(int index)
{
	int ID;
	string str;

   		cout << setw(11) << "index|";
   		cout << setw(11) << "_firstName|";
   		cout << setw(11) << "_lastName|";
   		cout << setw(11) << "_nickname|" << endl;
   		for(int i = 0; i < index; i++)
   		{
      		cout << setw(10) << i << "|" ;
			cout << setw(11) << resize(_contact[i].GetFname()) + "|" ;
			cout << setw(11) << resize(_contact[i].GetLname()) + "|" ;
			cout << setw(11) << resize(_contact[i].GetNname()) + "|" << endl;
  		}
		  	cout << "enter ID :";
			getline(cin, str);
			if (str == "")
				return;
			ID = str[0] - 48;
			if (str.length() > 1 || ID > index - 1)
				cout << "its empty" << endl;
			else
				searchForContact(ID);
		
}
