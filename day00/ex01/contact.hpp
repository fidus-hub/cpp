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
        string    first_name;
        string    last_name;
        string    nickname;
        string    phone_number;
        string    darkest_secret;
  	public:
		void	setInfo();
		string	getFname();
		string	getLname();
		string	getNname();
		string	getDsecret();
		string	getPnumber();

};


#endif

