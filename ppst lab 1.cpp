//#include<iostream>
//using namespace std;
//int main(){
//	int age;
//	cin>>age;
//	if(age<18){
//		cout<<"you are not eligible for the vote ";
//	}
//	else{
//		cout<<"you are eligible for the vote";
//	}
//}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
/*	float principle,rate,time,amount,ci;
//	cout<<"enter principle amount ";
//	cin>>principle;
//	cout<<"enter rate ";
//	cin>>rate;
//	cout<<"enter time(in years) ";
//	cin>>time;
//	amount = principle * pow((1+rate/100),time);
//	ci = amount - principle;
//	cout<<"compound interest = "<<ci<<endl;
//	cout<<"total amount = " << amount <<endl;
//	ci = principle * pow((1+ rate/100),time) - principle;
//	cout<<ci;*/

	float a,b,c,x;
	cout<<"quadratic equation is "<<endl;
	cin>>a>>b>>c;
	cout<<a*pow(x,2) + b*x + c;
	x = (-b+ pow(pow(b,2)-(4*a*c)),1/2)/(2*a);
	cout<<x;

	
	
	
}
