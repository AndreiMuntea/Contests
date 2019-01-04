// https://codeforces.com/contest/606/problem/D
// https://codeforces.com/contest/606/submission/17913074

#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _DATE {
	int cost, in, poz;
}DATE, *DATEPTR;

typedef struct _MUCHIE {
	int x, y;
}MUCHIE, *MUCHIEPTR;

int main() {
	DATEPTR date;
	MUCHIEPTR muchii;
	int v[100002], n, m, lastNode = 2, currNode = 1;
	for (int i = 1; i < 100002; i++) v[i] = i + 2;
	cin >> n >> m;
	
	date = (DATEPTR)malloc((m+1) * sizeof(DATE));
	muchii = (MUCHIEPTR)malloc((m+1)* sizeof(MUCHIE));

	for (int i = 1; i <= m; i++) {
		cin >> date[i].cost >> date[i].in;
		date[i].poz = i;
	}

	sort(date+1, date + 1 + m, [&](DATE& dataLeft, DATE& dataRight) {
		return (dataLeft.cost < dataRight.cost ||
			dataLeft.cost == dataRight.cost && dataLeft.in > dataRight.in || 
			dataLeft.cost == dataRight.cost && dataLeft.in == dataRight.in && dataLeft.poz < dataRight.poz
			);
	});

	if (date[1].in == 0) {
		puts("-1");
		goto Cleanup;
	}
	muchii[date[1].poz].x = 1;
	muchii[date[1].poz].y = 2;
	for (int i = 2; i <= m; i++) {
		if (date[i].in == 1) {
			muchii[date[i].poz].x = lastNode;
			muchii[date[i].poz].y = lastNode + 1;
			lastNode++;
			currNode = 1;
		}
		else {
			if (v[currNode] <= lastNode) {
				muchii[date[i].poz].x = currNode;
				muchii[date[i].poz].y = v[currNode];
				v[currNode]++;
				if (v[currNode] > lastNode)currNode++;
			}
			else {
				puts("-1");
				goto Cleanup;;
			}
		}
	}
	
	for (int i = 1; i <= m; i++)cout << muchii[i].x << " " << muchii[i].y << "\n";

Cleanup:
	free(muchii);
	free(date);
	return EXIT_SUCCESS;

}