#include<iostream>
using namespace std;

int main(){
    int x = 1;
    char grade;
    
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << x << "]: ";
		cin >> grade;
		
		
		if(grade == '0') {
		    break;
		} //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){ 
		   count[0]++;
		}else if(grade == 'B'){ // if grade is B
		    count[1]++;
		}else if(grade == 'C'){ // if grade is C
		    count[2]++;
		}else if(grade == 'D'){ // if grade is D
		    count[3]++;
		}else if(grade == 'F'){ // if grade is F
		    count[4]++;
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again.\n";
			continue;
			
		} 
		x++;
	}while(true);
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";
	//	and so on ... for grade = C, D, F	
	
	return 0;
}