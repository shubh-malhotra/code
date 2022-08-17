#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	vector<int> candies;
	int extraCandies;
	cin>>extraCandies;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		candies.push_back(arr[i]);
	}
	
	int greatest = candies[0];
	for(int i=0;i<candies.size();i++){
		
		if(candies[i]>greatest){
			
			greatest = candies[i];
		}
	}
	
	vector<bool> ans;
	
	for(int i=0;i<candies.size();i++){
		
		if(extraCandies+candies[i]>=greatest){
			
			ans.push_back(true);
		}
		
		else{
			
			ans.push_back(false);
		}
	}
	
	for(int i=0;i<candies.size();i++){
		
		cout<<ans[i];
	}
	
	return 0;
}
