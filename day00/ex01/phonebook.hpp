#ifndef PHONEBOOK_HPP
# define  PHONEBOOK_HPP
#include "contact.hpp"

class           PhoneBook
{
          Contact    _contact[8];
     public:
          void       add(int index);
          void       printContact(int index); 
          void       searchForContact(int index);
};
#endif