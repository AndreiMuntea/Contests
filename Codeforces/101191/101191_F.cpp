// https://codeforces.com/gym/101191/problem/F
// https://codeforces.com/gym/101191/submission/47884686

#include <iostream>
#include <string>
using namespace std;

inline unsigned int DoSum(long long Number)
{
	unsigned int sum = 0;

	for (; Number != 0; Number /= 10)
	{
		sum += (Number % 10);
	}

	return sum;
}

long long Solve(std::string& original)
{
	std::string str = "";
	long long target = std::stoll(original);
	unsigned int sum = DoSum(target);
	unsigned int no9 = sum / 9;
	unsigned int rem = sum % 9;

	str.push_back(rem + '0');

	for (unsigned int i = 1; i <= no9; ++i) str.push_back('9');

	if (std::stoll(str) != target && std::stoll(str) <= 1e9)
	{
		return std::stoll(str);
	}

	while (str.size() < 3) str.push_back('0');
	
	swap(str[0], str[1]);
	if (std::stoll(str) != target && std::stoll(str) <= 1e9)
	{
		return std::stoll(str);
	}
	swap(str[0], str[1]);
	
	str.insert(str.begin() + 1, '0');
	if (std::stoll(str) != target && std::stoll(str) <= 1e9)
	{
		return std::stoll(str);
	}

	str.erase(str.begin() + 1);
	str.insert(str.begin() + 2, '0');

	if (std::stoll(str) != target && std::stoll(str) <= 1e9)
	{
		return std::stoll(str);
	}

	return -1;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	string init;

	cin >> init;
	cout << Solve(init);

	return 0;
}