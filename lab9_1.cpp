#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double pb,i,t,p,nb,b;
int y = 1;

int main(){
	cout << "Enter initial loan: ";
	cin >> pb;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> p;
	
	i = pb*(b/100);
	t = pb+(pb*(b/100));
	nb = t-p;

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
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << y; 
	cout << setw(13) << left << pb;
	cout << setw(13) << left << i;
			    if(p>t){
	            p=t;
	            nb=p-t;
	            }
	cout << setw(13) << left << t;
	cout << setw(13) << left << p;
	cout << setw(13) << left << nb;
	cout << "\n";
	while(nb > 0){
	    pb = nb;
	    i = pb*(b/100);
	    t = pb+i;
	    nb = t-p;
	    y++;
	    cout << setw(13) << left << y; 
	    cout << setw(13) << left << pb;
	    cout << setw(13) << left << i;
	    		if(p>t){
	            p=t;
	            nb=p-t;
	            }
	    cout << setw(13) << left << t;
	    cout << setw(13) << left << p;
	    cout << setw(13) << left << nb;
	    cout << "\n";
	    }
	
	return 0;
}