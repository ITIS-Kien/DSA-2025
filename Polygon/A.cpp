#include <bits/stdc++.h>

using namespace std;
int prime[1300000];
int cnt[1000000];

long long sangnt()
{
	int danhdau = 0;
	for (int i = 0; i < 1300000; i++)
	{
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i < sqrt(1300000); i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j < 1300000; j += i)
			{
				prime[j] = 0;
			}
		}
	}
	for (int i = 0; i < 1300000; i++)
	{
		if (prime[i])
		{
			cnt[danhdau] = i;
			danhdau++;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	sangnt();
	int n;
	cin >> n;
	int a[n][n];
	int r = 0;
	int x1 = 0, x2 = n - 1, y1 = 0, y2 = n - 1;
	while (x1 <= x2 && y1 <= y2)
	{
		for (int i = x1; i <= x2; i++)
			a[y1][i] = cnt[r++];
		for (int i = y1 + 1; i <= y2; i++)
			a[i][x2] = cnt[r++];
		for (int i = x2 - 1; i >= x1; i--)
			a[y2][i] = cnt[r++];
		for (int i = y2 - 1; i > y1; i--)
			a[i][x1] = cnt[r++];
		x1++;
		x2--;
		y1++;
		y2--;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}