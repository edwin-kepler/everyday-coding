#if !defined(REVERSE_STRING_H)
#define REVERSE_STRING_H

#include <string>
#include <algorithm>
using namespace std;

namespace reverse_string
{
	string reverse_string(string _s)
	{
		reverse(_s.begin(), _s.end());

		return _s;
	}
} // namespace reverse_string

#endif // REVERSE_STRING_H
