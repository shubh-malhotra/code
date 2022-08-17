#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	int sum = 0;
	vector<int> nums;
	vector<int> ans;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		nums.push_back(arr[i]);
	}
	
	for(int i=0;i<nums.size();i++){
		
		sum += nums[i];
		ans.push_back(sum);
	}
	
	for(int i=0;i<nums.size();i++){
		
		cout<<ans[i]<<" ";
	}
}
