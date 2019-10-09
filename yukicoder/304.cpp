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
	ostringstream oss;
	for(int i = 0; i <= 999; ++i){
		cout << setw(3) << setfill('0') << i << endl;

		string res;
		cin >> res;
		if(res == "unlocked"){
			return 0;
		}
	}
}
