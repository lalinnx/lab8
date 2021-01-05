#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double rate, prev, in, total, pay, balance;
	int year=0;
	cout << "Enter initial loan: ";
	cin >> balance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	do{ 
	prev=balance;
	in = prev*rate/100;
	total = prev+in;
	if (total<pay) pay=total;
	balance=total-pay;
	year++;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prev;
	cout << setw(13) << left << in;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << balance;
	cout << "\n";	
    }while(balance != 0);
	return 0;
}
