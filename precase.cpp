#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<unsigned long long int> A, B;
	long long int n, max, min, x = 0;
	cin >> n;
	A.resize(n + 1);
	B.resize(n + 1);
	A[0] = 0;
	B[0] = 0;
	for (long long int i = 1; i <= n; i++)
	{
		cin >> A[i];
		cin >> B[i];
	}

	for (long long int i = 0; i < n; i++)
	{
		if (A[i] == A[i + 1] && B[i] == B[i + 1])
		{
			x = x;
		}
		else
		{
			max = A[i];
			if (A[i] < B[i])
			{
				max = B[i];
			}
			min = A[i + 1];
			if (A[i + 1] > B[i + 1])
			{
				min = B[i + 1];
			}
			if ((min - max) >= 0)
				x += min - max + 1;
			if (A[i + 1] == B[i + 1])
				x -= 1;
		}
	}
	if (A[n] == B[n])
		x++;
	if (x == 0)
		x++;
	cout << x;

	return 0;
}