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
#define ms(x) memset(x, 0, sizeof(x))
#define tc() int TC; cin >> TC; while(TC--)
#define el '\n'
#define fi first
#define se second
#define pb push_back
#define str string
#define int int64_t
#define ld long double

const int mod = 1e9 + 7;
const int oo = 1e18 + 7;
const int maxn = 1e6 + 7;

int dem[maxn], f[maxn];
void solve(int a[], int n){
	stack<int> st;
	st.push(n);
	f[n] = 0; a[0] = -1;
	for(int i=n-1; i>=1; i--){
		while(!st.empty() && dem[a[i]] >= dem[a[st.top()]]){
			st.pop();
		}if(st.empty()){
			f[i] = 0;
		}else f[i] = st.top();
		st.push(i);
	}
	for(int i=1; i<=n; i++){
		cout << a[f[i]] << ' ';
	}cout << el;
}

signed main(){
	LonggVuz();
	
	tc(){
		ms(dem);
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
			++dem[a[i]];
		}solve(a, n);
	}
	
	End();
}