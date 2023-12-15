#include <iostream>
int main()
{
	const int n = 8;
	int i;
	int a[n];
	int mul = 1;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for (i = n - 1; i > 0; --i)
		if (a[i] > 7)
		{
			std::cout << a[i] << std::endl;
			break;
		}
	for(i=1;i<n-1;++i)
		if(a[i]%2==0)
	{
		mul *= a[i];
	}
	std::cout << mul;
	return 0;
}