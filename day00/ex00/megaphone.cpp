#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str(argv[i]);
            for (size_t j = 0; j < str.length(); j++)
                str[j] = std::toupper(str[j]);
            std::cout << str;
            if (i != argc -1)
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
    return (0);
}