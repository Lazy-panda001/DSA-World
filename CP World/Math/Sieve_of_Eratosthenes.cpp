#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int j = p; p*j <= n; j++)
				prime[j*p] = false;
		}
	}
  
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

int main()
{
	int n = 30;
	cout << "Following are the prime numbers smaller " << " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}

// T.C : O(nloglog n)...
