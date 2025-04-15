#include<unistd.h>
int main()
{
	char dig[] = "9876543210\n";

	write(1, dig, 11);
	return 0;
}
