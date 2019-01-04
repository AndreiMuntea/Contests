// https://codeforces.com/contest/581/problem/A
// https://codeforces.com/contest/581/submission/14061199

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

	int a, b;
	int time = 0;

	cin >> a;
	cin >> b;

	time = min(a, b);

	int maxnum = max(a, b) - time;

	cout << time << " ";

	cout << maxnum / 2 << endl;

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2;
    return 0;


}
