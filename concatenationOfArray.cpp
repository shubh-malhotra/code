#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	vector<int> nums;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		nums.push_back(arr[i]);
	}
	
	int s = nums.size();
	
	for(int i=0;i<s;i++){
		
		nums.push_back(nums[i]);
	}
	
	for(int i=0;i<nums.size();i++){
		
		cout<<nums[i]<<" ";
	}
}
