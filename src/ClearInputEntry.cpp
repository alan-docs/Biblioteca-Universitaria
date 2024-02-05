#include "ClearInputEntry.h"

void ClearInputEntry::inputClear(void)
{
	std::cin.ignore();
	std::cin.clear();
	fflush(stdin);
}
