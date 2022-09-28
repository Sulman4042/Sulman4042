#include <iostream>
using namespace std;

int main()
{
	double marks;
	cout<<"Enter marks obtaine in math: ";
	  cin>>marks;
	cout<<"\nGrade = ";
	if(marks>=80)
	  cout<<"A+";
	else if(marks>=60 && marks<80)
	  cout<<"B+";
	else if(marks>=56 && marks<60)
      cout<<"C-";
    else if(marks>=50 && marks<56)
      cout<<"D";
    else if(marks>=40 && marks<49)
      cout<<"E";
    else if(marks>40)
      cout<<"F";
    else
        cout<<"invalid";
        cout<<endl;
		return 0;
	
}
