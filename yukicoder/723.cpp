#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, X;
	cin >> N >> X;

	int a[100001] = {};
	int cnt[100001] = {};
	for(int i = 0; i < N; ++i){
		cin >> a[i];
		cnt[a[i]]++;
	}

	ll ans = 0;

	for(int i = 0; i < N; ++i){
		int diff = X - a[i];
		if(diff >= 0 && diff <= 100000){ ans += cnt[diff]; }
	}

	cout << ans << endl;
}
