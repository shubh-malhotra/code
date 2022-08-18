#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	vector<int> nums;
	vector<int> ans;
	
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		nums.push_back(arr[i]);
	}
	
	for(int i=0;i<nums.size();i++){
		
		ans.push_back(nums[nums[i]]);
	}
	
	for(int i=0;i<ans.size();i++){
		
		cout<<ans[i]<<" ";	
	}
}
