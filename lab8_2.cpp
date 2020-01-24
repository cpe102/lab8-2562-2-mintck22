#include<iostream>
using namespace std;

//Write the function printO() here

char printO(int line , int o){

	if(line > 0){
		if(o > 0){
			for(int j = 1; j <= line; j++){
				for(int i = 1; i <= o ; i++){
					cout << "O";
			}
			cout << "\n";
		}
		}
		else
		{
			cout << "Invalid input";
		}
		
		
		
		
	}else
		{
			cout << "Invalid input";
		}
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
