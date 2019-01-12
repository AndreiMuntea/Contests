// https://www.spoj.com/problems/PRIME1/

#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void BuildSieve(vector<int>& Sieve)
{
    const int limit = static_cast<int>(5e5) + 1;
    vector<bool> isPrime(limit, true);

    for (int i = 2; i < limit; ++i)
    {
        if (!isPrime[i]) continue;
        Sieve.push_back(i);

        for (int j = i + i; j < limit; j += i)
        {
            isPrime[j] = false;
        }
    }
}


bool IsPrime(vector<int>& Sieve, long long X)
{
    long long limit = static_cast<long long>(sqrt(static_cast<double>(X))) + 1;
    bool isPrime = X != 1;


    for (const auto& p : Sieve)
    {
        if (p >= limit || !isPrime) break;
        if (X % p == 0) isPrime = false;
    }

    if (isPrime) return true;

    for (long long p = Sieve.back(); p < limit && !isPrime; ++p)
    {
        if (X % p == 0) isPrime = false;
    }

    return isPrime;
}

void SolvePrimes(vector<int>& Sieve, long long m, long long n)
{
    for (long long i = m; i <= n; ++i)
    {
        if (IsPrime(Sieve, i)) cout << i << "\n";
    }

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    vector<int> sieve;
    long long n, m;
    cin >> t;

    BuildSieve(sieve);

    while (t--)
    {
        cin >> m >> n;
        SolvePrimes(sieve, m, n);
        cout << "\n";
    }

    return 0;
}