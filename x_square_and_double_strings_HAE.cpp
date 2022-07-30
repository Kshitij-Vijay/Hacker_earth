#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool arr[26]={false},flag=false;
		int l= s.size();
		int i=0;
		for(;i<l;i++){
			int ch = s[i] - 97;
			if(arr[ch]==false){
				arr[ch]=true;
			}else{
				flag = true;
				break;
			}
		}
		if(flag==true){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}