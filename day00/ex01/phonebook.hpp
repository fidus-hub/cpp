#ifndef PHONEBOOK_HPP
# define  PHONEBOOK_HPP
#include "Contact.hpp"

class           PhoneBook
{
          Contact    _contact[8];
     public:
          void       add(int index);
          void       search(int index); 
          void       exit(int index);
};
#endif