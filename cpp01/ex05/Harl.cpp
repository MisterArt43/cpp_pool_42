#include "./Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

enum string_code {
	eDebug,
	eInfo,
	eWarning,
	eError,
	eOther
};

string_code switch_string(std::string const& level)
{
	if ("DEBUG" == level) return eDebug;
	if ("INFO" == level) return eInfo;
	if ("WARNING" == level) return eWarning;
	if ("ERROR" == level) return eError;
	else return eOther;
}

void	Harl::complain(std::string level)
{
	switch (switch_string(level))
	{
	case eDebug:
		return this->debug();
		break;
	case eInfo:
		return this->info();
		break;
	case eWarning:
		return this->warning();
		break;
	case eError:
		return this->error();
		break;
	default:
		std::cout << "invalid input RTFM !" << std::endl;
		break;
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}