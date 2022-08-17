#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
	
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	vector<vector<int> > accounts;
	
	for(int i=0;i<m;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			//cin>>arr[i][j]; //not_required
			v.push_back(temp);
		}
		accounts.push_back(v);
		v.clear();
	}
	
	//cout<<accounts.size();
	int maxm = INT_MIN;
	int s = accounts.size();
	//int s1 = accounts[0].size();
	
	for(int i=0;i<s;i++){
		int sum = 0;
		for(int j=0;j<accounts[i].size();j++){
			sum += accounts[i][j];
		}
		maxm = max(sum,maxm);
	}
	
	cout<<maxm;
}
