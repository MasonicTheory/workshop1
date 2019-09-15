// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// process.h
// Chris Szalwinski - 2019/01/08
// Cornel - 2019/09/06
#pragma once
#ifndef PROCESS_H
#define PROCESS_H

namespace sdds
{
	void process(const char* str);

	extern unsigned int g_maxSize;
}

#endif