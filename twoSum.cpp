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
	
	int target;
	cin>>target;
	
	vector<int> ans = {0,0};
	
	for(int i=0;i<nums.size();i++){
		
		for(int j=i+1;j<nums.size();j++){
			
			if(nums[i]+nums[j] == target){
				
				ans[0] = i;
				ans[1] = j;
			}
		}
	}
	
	for(int i=0;i<ans.size();i++){
		
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
