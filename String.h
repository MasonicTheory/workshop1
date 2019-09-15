#pragma once
#ifndef STRING_H_
#define STRING_H_
#include <iostream>

namespace sdds 
{
	class String
	{
		char str[4];
	public:
		void display(std::ostream&) const;
		String();
		~String();
		String(const char*);
	};

	std::ostream& operator<<(std::ostream& os, const String& st);
}

#endif