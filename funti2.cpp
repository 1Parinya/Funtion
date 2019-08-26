#include<iostream>
#include<iomanip>
using namespace std;
int checknum(int);
int r,n,c=0;
int main ()
{
	cout<<"#welcome to guessing number game#"<<endl;
	srand(time(NULL));
	r = rand()%10+1;
	do{
		cout<<"Guess number (1to10)";
		cin >> n;
		checknum(n);
		c++;
	}while (n != r);
	cout<<"the secret number is"<<r<<endl;
	cout<<"you made "<< c << "guesses"<<endl;
	return 0;
}
int checknum(int f)
{
	if (f < r){ 
		cout <<"The secret number is lower"<<endl;
	}
	else if(f > r){
		cout<<"The secret number is higher"<<endl;
	}
	else if(f == r)
	{
		cout<<"congratulation!"<<endl;
	}
	return f;
}


