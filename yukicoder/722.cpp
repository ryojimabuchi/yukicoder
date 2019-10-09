#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	ll A, B;
	cin >> A >> B;

	bool anzan_flag = true;
	ll tmp_a = abs(A), tmp_b = abs(B);
	if(tmp_a < 100 || tmp_b < 100){ anzan_flag = false; }
	while(tmp_a > 10 && anzan_flag == true){
		if(tmp_a % 10 == 0) tmp_a /= 10;
		else anzan_flag = false;
	}
	while(tmp_b > 10 && anzan_flag == true){
		if(tmp_b % 10 == 0) tmp_b /= 10;
		else anzan_flag = false;
	}

	if(anzan_flag){
		cout << A * B / 10 << endl;
	} else{
		ll ans = A * B;
		if(ans > 99999999 || ans < -99999999){
			cout << "E" << endl;
		} else{
			cout << ans << endl;
		}
	}
}
