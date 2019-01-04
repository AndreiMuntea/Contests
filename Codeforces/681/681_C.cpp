// https://codeforces.com/contest/681/problem/C
// https://codeforces.com/contest/681/submission/18480382

#include <iostream>
#include <stdio.h>
#include <string>
#include <functional>
#include <queue>
using namespace std;


int main() {
	string s;
	vector<pair<string, int>> rez;
	priority_queue<int, vector<int>, greater<int>> head;
	int n, value;
	for (cin >> n; n > 0; n--) {
		cin >> s;
		if (s == "removeMin") {
			if (head.empty()) {
				rez.push_back({ "insert ", 1 });
				rez.push_back({ "removeMin ", 0 });
			}
			else {
				head.pop();
				rez.push_back({ "removeMin ", 0 });
			}
		}
		else if (s == "insert") {
			cin >> value;
			head.push(value);
			rez.push_back({ "insert ", value });
		}
		else {
			cin >> value;
			if (head.empty()) {
				rez.push_back({ "insert ", value });
				head.push(value);
				rez.push_back({ "getMin ", value });
			}
			else {
				while ( !head.empty() && head.top() < value) {
					rez.push_back({ "removeMin ", 0 });
					head.pop();
				}
				if (head.empty() || head.top() > value) {
					rez.push_back({ "insert ", value });
					head.push(value);
				}
				rez.push_back({ "getMin ", value });
			}
		}
	}
	cout << rez.size() << "\n";
	for (const auto& el : rez) {
		cout << el.first;
		if (el.first != "removeMin ") cout << el.second;
		cout << '\n';
	}


	return EXIT_SUCCESS;
}