#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int x;
	cin>>x;
	int arr[x];
	int n;
	cin>>n;
	vector<int> nums;
	
	
	for(int i=0;i<x;i++){
		
		cin>>arr[i];
		nums.push_back(arr[i]);
	}
	
	vector<int> ans;
	
	//cout<< ans.size()<<endl;
	
	for(int i=0;i<n;i++){
		
		ans.push_back(nums[i]);
		ans.push_back(nums[n+i]);
	}
	
	//cout<< nums.size()<<endl;
	//cout<< ans.size()<<endl;
	
	for(int i=0;i<nums.size();i++){
		
		cout<<ans[i]<<" ";
	}
}
