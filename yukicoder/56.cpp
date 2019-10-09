#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	double D, P;
	cin >> D >> P;

	P += 100;

	int ans = D * P / 100;

	cout << ans << endl;
}
