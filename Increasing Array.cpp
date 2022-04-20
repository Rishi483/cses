#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
      cin>>A[i];
  }
  int ct=0;
  for(int i=1;i<n;i++){
     if(A[i]<A[i-1]){
         ct+=A[i-1]-A[i];
         A[i]=A[i-1];
     }
  }
  cout<<ct<<endl;
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
