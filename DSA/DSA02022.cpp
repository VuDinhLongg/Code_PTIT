// LonggVuz.
#include<bits/stdc++.h>
using namespace std;
// Noob C++
void End(){
    cerr << "=> Thời gian code chạy: ";
    cerr << (1.0 * clock() / CLOCKS_PER_SEC) << " giây" << string(27, '\t');
}
#define LonggVuz() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define use(x) freopen(x".inp", "r", stdin); freopen(x".out", "w", stdout);
#define fix(x) fixed << setprecision(x)
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ms(a, x) memset(a, x, sizeof(a))
#define tc() int TC; cin >> TC; while(TC--)
#define el '\n'
#define fi first
#define se second
#define pb push_back
#define str string
#define int intmax_t
#define db double

const int mod = 1e9 + 7;
const int oo = 1e18 + 7;
const int maxn = 1e6 + 7;

str a = "  /02/2   ";

void ql(int pos){
	for(int i='0'; i<='2'; i+=2){
		if(pos == 2){
			ql(7); return;
		}
		if(pos == 1 && a[0] == '0' && i == '0') continue;
		a[pos] = i;
		if(pos == 9){
			cout << a << el;
		}else ql(pos + 1);
	}
}

signed main(){
	LonggVuz();
	
	ql(0);
	
	End();
}