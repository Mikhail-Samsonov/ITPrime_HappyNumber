#ifndef ITPRIME_CONTEXT_H
#define ITPRIME_CONTEXT_H

#include <sstream>

namespace my
{
	struct Context
	{
		Context(int argc, char** argv)
		{
			std::stringstream ss;
			ss << argv[1];
			ss >> _number_length;
			ss.clear();

			ss << argv[2];
			ss >> _base;
		}

		std::size_t length() const
		{
			return _number_length;
		}

		std::size_t base() const
		{
			return _base;
		}

	private:
		std::size_t _number_length{ 2 };
		std::size_t _base{ 2 };
	};
}

#endif //ITPRIME_CONTEXT_H
