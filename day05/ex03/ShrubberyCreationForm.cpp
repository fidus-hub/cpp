#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("Shrubbery", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getGradeState() == false)
		throw(notSignedException());
	else if (executor.getGrade() > getExecGrade())
		throw(notExecutedException());
	else
	{
		std::string target(_target);
		std::ofstream ofs(target + "_shrubbery");
	ofs << "              _{\\_{\\{\\/}/}/}__                \n";
	ofs << "             {/{/\\}{/{/\\}(\\}{/\\} _           \n";
	ofs << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _       \n";
	ofs << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}  \n";
	ofs << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}        \n";
	ofs << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}        \n";
	ofs << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}  \n";
	ofs << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}   \n";
	ofs << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}  \n";
	ofs << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} \n";
	ofs << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) \n";
	ofs << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} \n";
	ofs << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}  \n";
	ofs << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}   \n";
	ofs << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)     \n";
	ofs << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}         \n";
	ofs << "             {/{\\{\\{\\/}/}{\\{\\}/}            \n";
	ofs << "              {){/ {\\/}{\\/} \\}\\}             \n";
	ofs << "              (_)  \\.-'.-/                      \n";
	ofs << "          __...--- |'-.-'| --...                 \n";
	ofs << " .  '-  '    .--'  | '-.'|    .  '  . '          \n";
	ofs << "          ' ..     |'-_.-|                       \n";
	ofs << "  .  '  .       _.-|-._ -|-._  .  '  .           \n";
	ofs << "              .'   |'- .-|   '.                  \n";
	ofs << "  ..-'   ' .  '.   `-._.-'   .'  '  - .          \n";
	ofs << "   .-' '        '-._______.-'     '  .           \n";
	ofs << "        .      ~,                                \n";
	ofs << "    .       .   | |   .    ' '-.                 \n";
	ofs << "    ___________/  |____________                  \n";
	ofs << "   /  hadi fkhater taouil ali   |                \n";
	ofs << "  |  o Mashad Oussama Ayoub omar|                \n";
	ofs << "  |  o Omaima o Houda o ziyad   |                \n";
	ofs << "  | o manssawch Haitm o Souhail |                \n";
	ofs << "  |____________________________/                 \n";
	ofs.close();
	executor.executeForm(*this);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
Form* ShrubberyCreationForm::make(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

/* ************************************************************************** */