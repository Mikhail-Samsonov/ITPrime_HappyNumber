#ifndef ITPRIME_HAPPYNUMBER_H
#define ITPRIME_HAPPYNUMBER_H

#include <iostream>
#include <map>
#include <utility>

namespace my
{
	class HappyNumber
	{
	public:
		using base_type = unsigned long long;

		explicit HappyNumber(std::size_t length, std::size_t base) : _length{ length }, _base{ base }
		{
		}

		base_type count();

	protected:
		std::size_t variant_number(std::size_t, std::size_t);

	private:
		using Key = std::pair<std::size_t, std::size_t>;

		std::size_t _length;
		std::size_t _base;
		std::map<Key, std::size_t> _buffer;
	};
}


#endif //ITPRIME_HAPPYNUMBER_H
