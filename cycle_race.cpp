#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int N,D,pos=1; cin>>N>>D;
		int *initial = new int[N];
	    int *point = new int[N];
		for (int i = 0; i < N; ++i)
		{
			cin>>initial[i];
		}
		for (int i = 0; i < N; ++i)
		{
			cin>>point[i];
		}
		for (int i = 0; i < N; ++i)
		{
			if(initial[D-1]+point[0]<initial[i]){
				pos++;
			}
			else if(initial[D-1]+point[0]>=initial[i]+point[N-1]){
				break;
			}
		}
		cout<<pos<<'\n';
 
	}
	return 0;
}
