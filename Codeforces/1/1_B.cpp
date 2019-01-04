// https://codeforces.com/contest/1/problem/B
// https://codeforces.com/contest/1/submission/18717562

#ifndef _CRT_NONSTDC_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void excelConvert(const string&column, const string& row);
void reverseConvert(const string&row, const string&rowNumber, const string&column, const string& columnNumber);

int main() {

	int n, i, size;
	string s, r, nr1, c, nr2;

	scanf("%d", &n);
	
	while (n--) {
		cin >> s;
		
		size = (int)s.size();
		r = nr1 = c = nr2 = "";
		i = 0;

		while (i < size && (s[i] >= 'A' && s[i] <= 'Z')) r += s[i++];
		while (i < size && (s[i] >= '0' && s[i] <= '9')) nr1 += s[i++];
		while (i < size && (s[i] >= 'A' && s[i] <= 'Z')) c += s[i++];
		while (i < size && (s[i] >= '0' && s[i] <= '9')) nr2 += s[i++];

		(c == "") ? excelConvert(r, nr1) : reverseConvert(r, nr1, c, nr2);
	}


	return EXIT_SUCCESS;
}


void excelConvert(const string&column, const string& row) {

	string rez = "R" + row + "C";
	int col = 0, size = (int)column.size();

	for (int i = 0; i < size; i++) col = col * 26 + column[i] - 'A' + 1;

	rez += to_string(col);
	cout << rez << "\n";

}

void reverseConvert(const string&row, const string&rowNumber, const string&column, const string& columnNumber){

	string rez = "";
	int col = stoi(columnNumber), md;

	while (col > 0) {
		md = (col - 1) % 26;
		rez = (char)('A' + md) + rez;
		col = (col - md) / 26;
	}

	rez += rowNumber;
	cout << rez << "\n";

}

#endif //_CRT_NONSTDC_NO_WARNINGS