#include "HappyNumber.h"

namespace my
{
	HappyNumber::base_type HappyNumber::count()
	{

		base_type count{ 0 };

		for (std::size_t i = 0; i <= (_base - 1) * (_length / 2); ++i)
		{
			auto cnt = variant_number(i, _length / 2);
			count += cnt * cnt;
		}

		return count * (_length % 2 ? _base : 1);
	}

	std::size_t HappyNumber::variant_number(std::size_t sum, std::size_t length)
	{
		if ((length == 1) && (sum < _base) || sum == 0) return 1;
		if ((length == 1) && (sum >= _base)) return 0;

		std::size_t n{ 0 };

		for (std::size_t i = 0; (sum - i + 1) && (i < _base); ++i)
		{
			const Key key = std::make_pair(sum - i, length - 1);
			const auto it = _buffer.find(key);

			if (it != _buffer.end())
				n += it->second;
			else
				n += variant_number(sum - i, length - 1);
		}

		_buffer.try_emplace(std::make_pair(sum, length), n);

		return n;
	}
}

