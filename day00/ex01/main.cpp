#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
    string      cmd;
    PhoneBook   pb;
    int         index = 0;
    int         i = 0;
    
    while(1)
    {
        cout << "You want to ADD ?, SEARCH or EXIT? : ";
        getline(cin, cmd);
        if (i >= 8)
            index i % 8;
        if (cmd == "ADD")
        {
            pb.add(index);
            index++;
            i++;
        }
        else if (cmd == "SEARCH")
        {
            if (i == 0)
                cout << "Contact list is empty" << endl;
            else
                pb.search(i);
        }
        else if (cmd == "EXIT")
            exit (0);
    }
}