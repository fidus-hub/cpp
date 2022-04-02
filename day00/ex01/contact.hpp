#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define	setw std::setw
# define 	getline std::getline

class       Contact
{
        string    _firstName;
        string    _lastName;
        string    _nickname;
        string    _phoneNumber;
        string    _darkestSecret;
  	public:
		void	SetInfo();
		string	GetFname();
		string	GetLname();
		string	GetNname();
		string	GetDsecret();
		string	GetPnumber();

};


#endif

