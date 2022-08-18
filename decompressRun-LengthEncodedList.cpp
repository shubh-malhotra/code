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
	
	vector<int> ans;
	for(int i=0;i<nums.size();i+=2){
		
		int j=0;
		while(j<nums[i]){
			
			ans.push_back(nums[i+1]);
			j++;
		}
	}
	
	for(int i=0;i<ans.size();i++){
		
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
