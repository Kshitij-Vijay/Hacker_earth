#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int l=s.size();
	int sum=0;
	for(int i=0;i<l;i++){
		int y=(int)s[i];

		// upper
		if(y>=65 && y<=90){
			y=y+32;
			sum=sum-y;
		}

		// lower
		else{
			y=y-32;
			sum=sum+y;
		}
	}

	if(sum<0){
		sum*=-1;
	}
	
	bool p=true;
	int i=2;
	for(;i<sum;i++){
		if(sum%i==0){
			p=false;
			break;
		}
	}
	cout<<p<<endl;
}
