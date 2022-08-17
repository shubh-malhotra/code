#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	vector<int> nums;
	
	for(int i=0;i<n;i++){
		
		cin>> arr[i];
		nums.push_back(arr[i]);
	}
	
	//cout<<nums.size()<<endl;
	
	int count = 0;
	
	for(int i=0;i<nums.size();i++){
		
		for(int j=i+1;j<nums.size();j++){
			
			if(nums[i]==nums[j] && i<j){
				
				count++;
			}
		}
	}
	
	cout<<count;
	
	return 0;
}
