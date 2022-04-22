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
  if(n<5 && n!=4 && n!=1) cout<<"NO SOLUTION"<<endl;
  else if(n==1) cout<<1<<endl;
  else if(n==4) cout<<"2 4 1 3"<<endl;
  else{
      int a=n/2;
      if(n%2!=0) a++;
      vector<int> ans;
      int x=1;
      int y=a+1;
      for(int i=0;i<n;i++){
          if((i+1)%2!=0){
              ans.push_back(x);
              x++;
          }
          else{
              ans.push_back(y);
              y++;
          }
      }
      for(int i=0;i<n;i++){
          cout<<ans[i]<<" ";
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
