#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two integers : ";
	cin>>a>>b;
	char x;
	cout<<"Enter the symbol of an airthmetical operator (+,-,*,/) : ";
	cin>>x;
	cout<<a<<" "<<x<<" "<<b<<" = ";
	float ans;
	switch (x){
		case '+' : cout<<a+b;
		break;
		case '-' : cout<<a-b;
		break;
		case '*' : cout<<a*b;
		break;
		case '/' : cout<<(a*1.0)/(b*1.0);
		break;
		default : cout<<"Invalid symbol!!!";
		break;
	}
	
	return 0;
}
