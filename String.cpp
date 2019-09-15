#include "String.h"
#include "process.h"
#include <iostream>
#include <cstring>

namespace sdds 
{
	std::ostream& operator<<(std::ostream& os, const String& st)
	{
		st.display(os);
		return os;
	}

	void String::display(std::ostream& os) const
	{
		static int num_called = 1;
		os << num_called << ": " << str << "\n" << num_called++;
	}

	String::String(const char* copy)
	{
		if (copy == nullptr)
			strcpy_s(str, '\0');
		else
		{
			std::strncpy(str, copy, sizeof(str));
			str[3] = '\0';
		}
	}

	String::String()
	{
		strcpy(str, '\0');
	}

	String::~String() {}
}