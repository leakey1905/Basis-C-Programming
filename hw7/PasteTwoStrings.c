#include "stdio.h"

#define MaxLen 100  // the longest of input

int main()
{
	char *p1, *p2, s1[MaxLen], s2[MaxLen];
	p1 = gets_s(s1, MaxLen);
	p2 = gets_s(s2, MaxLen);
	while(*p1 != '\0')
		p1++;
	while(*p2 != '\0')
		*p1++ = *p2++;
	*p1 = '\0';
	printf("%s", s1);
	return 0;
}
