// https://codeforces.com/contest/581/problem/C
// https://codeforces.com/contest/581/submission/14394891

#include <iostream>
using namespace std;


int main()
{

    long long v[102],n,k,x;

	for (int i = 0; i < 101; i++) v[i] = 0;

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v[x]++;
	}

	long long aux = k;

	while (k > 0)
	{
		for (int p = 1; p <= 10; p++)
		{
			for (int i = 100 - p; i >= 0; i -= 10)
			{
				while (v[i] > 0 && k - p >= 0)
				{
					v[i + p]++;
					v[i]--;
					k -= p;
				}
			} 
		}

		if (k == aux) k = 0;
		aux = k;
	}

	unsigned long long s = 0;
	for (int i = 1; i <= 100; i++)
	{
		s += ((i / 10) * v[i]);
	}
	cout << s;

	return 0;
}
#include <iostream>

using namespace std;

int a[102];

int main()
{
    int n,x;
    long long k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[x]++;
    }
    int poz = 100;
    long long cost =1;
    while (k > 0)
    {
        int  j = 0;
        while (j < 100 && k > 0)
        {
            if (poz-j-cost!=100 && a[poz-j-cost]!=0 ){
            if (a[poz-j-cost]*cost < k)
            {
                k-=a[poz-j-cost]*cost;
                a[poz-j]+=a[poz-j-cost];
                a[poz-j-cost]=0;
            }
            else
            {
                k = k/cost;
                a[poz-j-cost] -= k;
                a[poz-j] +=k;
                k = 0;
            }
            }
            j+=10;
        }
        if (a[100]==n){k=0;}
        if (cost<10)
        {
            cost++;
        }
    }
    cost = 0;
    for (int i=1;i<=100;i++)
    {
        cost += a[i]*(i/10);
    }
    cout<<cost;
    return 0;
}
