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
  int x=(n*(n+1))/2;
  if(x%2!=0){
      cout<<"NO"<<endl;
      return;
  }
  else{
        int sum=x;
          int flag=sum/2;
          int current=0;
          int ct=0;
          int hsh[n]{0};
          vector<int> p;
          for(int i=n-1;i>=0;i--){
              if(current+i+1<=flag){
                  current+=i+1;
                  p.push_back(i+1);
                  hsh[i+1]=1;
                  ct++;
              }
          }
          cout<<"YES"<<endl;
          cout<<ct<<endl;
          for(int i=0;i<p.size();i++){
              cout<<p[i]<<" ";
          }
          cout<<endl;
          cout<<n-ct<<endl;
          for(int i=0;i<n;i++){
              if(hsh[i+1]==0){
                  cout<<i+1<<" ";
              }
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
