#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){
	
	string s,t;
	getline(cin, s);
	stringstream x(s);
	vector<string> operations;
	
	while(getline(x,t,',')){
	
		operations.push_back(t);
	}
	
	//cout<<operations.size();
	
	//for(int i=0;i<operations.size();i++)
	//cout<<operations[i];

	int count = 0;
	
	for(int i=0;i<operations.size();i++){
		
		if(operations[i] == "--X" || operations[i] == "X--"){
			
			count--;
		}
		
		else{
			
			count++;
		}
	}
	
	cout<<count;
	
	return 0;
}
