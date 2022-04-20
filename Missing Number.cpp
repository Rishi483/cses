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
  int A[n-1];
  int hsh[n+1]{0};
  hsh[0]=1;
  for(int i=0;i<n-1;i++){
      cin>>A[i];
      hsh[A[i]]=1;
  }
  for(int i=0;i<n+1;i++){
      if(hsh[i]==0){
          cout<<i<<endl;
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
	
	    solve();
	
	return 0;
}
