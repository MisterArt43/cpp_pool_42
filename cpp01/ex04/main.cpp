#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "format invalide :\n ./ft_replace <filePath> <stringToReplace> <stringToInsert>" << std::endl;
		return (1);
	}
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "an error occur while opening the file" << std::endl;
		return(1);
	}
	std::string file_str("");
	char file_char[1];
	while (file)
	{
		file_char[0] = file.get();
		std::string test(file_char);
		file_str += test;
	}
	file.close();
	if (file_str.length() == 0)
		return(1);
	file_str = file_str.substr(0, file_str.length() - 1);
	//std::ofstream write_file(argv[1]);
	std::string str_in(argv[2]);
	std::string str_out(argv[3]);
	while (file_str.length() > 0)
	{
		if (std::string::npos == file_str.find(argv[2]))
		{
			std::cout << file_str << std::endl;
			break;
		}
		std::cout << file_str.substr(0, file_str.find(argv[2]));
		file_str = file_str.substr(file_str.find(argv[2]) + str_in.length());
		std::cout << str_out;
	}
	return 0;
}