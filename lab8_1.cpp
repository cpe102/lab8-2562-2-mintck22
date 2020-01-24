#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;




int main(){	

	float loan,interest,pay;
	cout << "Enter initial loan: ";
	cin >> loan;

	cout << "Enter interest rate per year (%): ";
	cin >> interest;

	cout << "Enter amount you can pay per year: ";
	cin >> pay;


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	float pb,in,total,nb;
	int ey = 1;

	pb = loan;
	in = loan*(interest/100);
	total = pb+in;

	if(total < pay){pay = total;}
	nb = total - pay;
	

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << ey; 
		cout << setw(13) << left << pb;
		cout << setw(13) << left << in;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << nb;
		cout << "\n";
	
	while (nb != 0)
	{	
		
		pb = nb;
		in = pb*(interest/100);
		total = pb+in;
		ey++;

		if(total < pay){pay = total;}
		nb = total - pay;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << ey; 
			cout << setw(13) << left << pb;
			cout << setw(13) << left << in;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << nb;
			cout << "\n";	
		


		
	}

	
	
	return 0;
}
