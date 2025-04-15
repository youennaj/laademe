#include<unistd.h>
int main()
{
	char dg[] = "9876543210\n";

	write(1, dg, 11);
	return 0;
}
