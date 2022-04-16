#include <string>
#include <iostream>
#include <fstream>

void replace(std::string &line, std::string s1, std::string s2)
{
	size_t	pos;
	while ((pos = line.find(s1)) != std::string::npos)
	{
		line.erase(line.begin()+pos, line.begin() + pos + s1.length());
		line.insert(pos, s2);
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string   s1(argv[2]);
		std::string   s2(argv[3]);
		std::string   fileName(argv[1]);
		std::ifstream iffile(argv[1]);
		std::ofstream offile;

		if (s1.empty() || s2.empty())
		{
			std::cout << "String is empty" << std::endl;
			return(0);
		}

		if(!iffile)
		{
			std::cout << "file is empty" << std::endl;
			return(0);
		}

		offile.open(fileName.append(".replace"));

		std::string line;
		while (getline(iffile, line))
		{
			replace(line, s1, s2);
			offile << line << std::endl;
			if (iffile.eof())
			{
				offile << std::endl;
				break ;
			}
		}
		iffile.close();
		offile.close();
	}
	else
		std::cout << "Invalid Number Of Arguments" << std::endl;
}
