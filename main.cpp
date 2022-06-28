#include <iostream>

#include "HappyNumber.h"
#include "Context.h"


int main(int argc, char** argv)
{
	if (argc != 3)
	{
		std::cerr << "usage: happy <number_length> <base>\n";
		return EXIT_FAILURE;
	}

	try
	{
		my::Context context(argc, argv);

		my::HappyNumber h(context.length(), context.base());
		std::cout << h.count() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
