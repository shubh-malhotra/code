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
	for(int i=0;i<nums.size();i++){
		
		int temp=0;
		for(int j=0;j<nums.size();j++){
			
			if(nums[j]<nums[i]){
				temp ++;
			}
		}
		
		//cout<<temp;
		ans.push_back(temp);
	}
	
	for(int i=0;i<ans.size();i++){
		
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
