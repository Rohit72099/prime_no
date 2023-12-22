#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
int i=2;
while(i<n){
	if(n%i==0){
		cout<<"not a prime"<<" ";
		break;
	}
	else if(n%i!=0){
		cout<<"prime"<<" ";
		break;
	}
	i++;
}
}
