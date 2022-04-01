#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define	setw std::setw
# define 	getline std::getline

class       Contact
{
        string    _first_name;
        string    _last_name;
        string    _nickname;
        string    _phone_number;
        string    _darkest_secret;
  	public:
		void	SetInfo();
		string	GetFname();
		string	GetLname();
		string	GetNname();
		string	GetDsecret();
		string	GetPnumber();

};


#endif

