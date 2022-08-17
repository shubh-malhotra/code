#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<sstream>
using namespace std;

int main(){
	
	string s,t;
	getline(cin, s);
	stringstream x(s);
	vector<string> sentences;
	
	while(getline(x,t,',')){
		
		sentences.push_back(t);
	}
	
	int maxm = INT_MIN;
	
	for(int i=0;i<sentences.size();i++){
		
		int count = 0;
		
		for(int j = 0;j<sentences[i].size();j++){
			
			if(sentences[i][j] == ' '){
				
				count++;
			}
		}
		
		maxm = max(count,maxm+1);
	}
	
	cout<<maxm;
}
