#include "Phonebook.hpp"
#include "Contact.hpp"

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

void PhoneBook::printContact(int index)
{
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
}
