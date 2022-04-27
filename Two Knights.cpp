#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}
void fun(int n){
  if(n==1){
     cout<<0<<endl;
     return;
  } 
  fun(n-1); 
 int x=n*n;
 int y=(x*(x-1))/2;
 int z=4*(n-1)*(n-2);
 cout<<y-z<<endl;
}
void solve(){
  int n;
  cin>>n;
 fun(n);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	

	    solve();
	
	return 0;
}
