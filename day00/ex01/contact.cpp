#include "Phonebook.hpp"
#include "Contact.hpp"

int ft_isascii(string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            return (1);
    }
    return (0);
}
int ft_isdigit(string s)
{
    if (s == "")
        return  (1);
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i] < '0' || s[i] > '9')
            return 1;
    }
    return(0);
}

void Contact::SetInfo()
{
    cout << "Enter First Name: ";
    while(getline(cin, _firstName))
    {
        if (!ft_isascii(_firstName))
            cout << "enter a valid First Name : ";
        else
            break ;
    }
    cout << "Enter Last Name: ";
    while(getline(cin, _lastName))
    {
        if (!ft_isascii(_lastName))
            cout << "enter a valid Last Name : ";
        else
            break ;
    }
    cout << "Enter  Nickname: ";
    getline(cin, _nickname);

    cout << "Enter Darkest Secret: ";
    getline(cin, _darkestSecret);

    cout << "Enter Phone Number: ";
    while(getline(cin, _phoneNumber))
    {
        if (ft_isdigit(_phoneNumber))
            cout << "enter a valid Phone Number : ";
        else
            break;
    }
    


}