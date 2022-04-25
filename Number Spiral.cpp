#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
    int x,y;
  cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                int r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                int r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                int r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                int r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << endl;
            }
        }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}
	return 0;
}
