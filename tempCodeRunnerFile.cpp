#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0};
	int student=0,i=0; 
		char  grade=' ' ;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		student++ ;
	
		cout << "Student [" <<i+1<< "]: ";
		cin >> grade;
		
		if(grade=='A') 
			{
			count[0]++ ;
			}
		else if(grade=='B')
		{
			count[1]++ ;
		}
		else if(grade=='C')
		{
			count[2]++ ;
		}
		else if(grade=='D') 
		{
			count[3]++ ;
		}
		else if(grade=='F')
		{
			count[4]++ ;
		}
		else if(grade !='0')
		
		{ 
			cout<<"Wrong input. Please input again." ;
			i-- ;
		} 
		
	
		i++ ;
	}while(grade != '0');
	
	
	
	cout << "In total "<<student<<" students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] <<", ";	
	
	return 0;
	
}