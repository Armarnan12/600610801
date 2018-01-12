#include <iostream>
#include <string>
using namespace std;
int main(){
	float X=1 , Y=2,sum,Z;
	while(Y<=69){
		cout<< X/Y<<endl;
		Z=X/Y;
		sum=sum+Z;
		Y=Y+1;
	}
	cout<<"cumtup : " <<sum;
	return 0;
}
