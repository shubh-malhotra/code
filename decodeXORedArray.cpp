#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	vector<int> encoded;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		encoded.push_back(arr[i]);
	}
	
	int first;
	cin>>first;
	
	vector<int> ans;
	int temp = first;
	ans.push_back(temp);
	for(int i=0;i<encoded.size();i++){
		
		temp = temp^encoded[i];
		ans.push_back(temp);
	}
	
	for(int i=0;i<ans.size();i++){
		
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
