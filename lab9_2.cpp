#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int n, int m){
    if(n <= 0 || m <= 0){
        cout << "Invalid input";
        }
    for(int x=0; x < n; x++){
        for(int y = 0; y < m; y++){
            cout << "O";
            }
        cout <<endl;    
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