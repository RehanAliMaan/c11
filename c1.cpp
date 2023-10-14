
#include <iostream>
using namespace std;

int main(){

 int a=400,b=275;
 char status;
 cout << "Please enter your status: ";
 cin>> status;
 
 if (status=='s' || status=='S'){
 	
 	cout << "Senior salesperson salary is: "<<a<<endl;
 }
else if(status=='j' || status== 'J'){
	
	cout << "Junior salesperson salary is: "<<b<<endl;
}
else {
	
	cout << "Error Message"<<endl;
	cout << "Please enter valid status";
}

return 0;



}