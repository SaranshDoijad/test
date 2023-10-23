#include <iostream>
using namespace std;

int main() {

	int t,n;
    
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    char s[n];
	    char A[n/2],B[n/2];
	    A = s.substr(0,s.length()/2);
	     B = s.substr(s.length()/2);

         cout<<"A"<<A;
	}
	return 0;
}
