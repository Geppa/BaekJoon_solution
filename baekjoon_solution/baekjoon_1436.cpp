#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N;
	string B="666";
	cin>>N;
	if(N==1)
	{
		cout<<B;
	}
	else 
	{
		cout<<to_string(N-1)+B;
	}
	
	
	// your code goes here
	return 0;
}