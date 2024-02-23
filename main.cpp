#include <iostream>
#include <string>
#include <time.h>

using namespace std;
int main()
{
	cout << "******* " << "Welcome In AI ChatBot"<< " *******" <<endl;
	cout << "how can i help U!" <<endl;
	bool exit = false ;
	string name{};
    while(exit == false) {
        string input{};
        getline(cin, input);
		if(input=="hi"){
			cout << "Barca:)Hi, iam barca and U!" <<endl;
			getline(cin, name);
			cout << "Barca:)Hi, "<< name <<endl;
			}
		else if (input=="how are you"){
			cout << "Barca:)Iam fine and U!" <<endl;
			getline(cin, input);
			if(input=="fine")
				cout << "Barca:)greet!" <<endl;
			else
				cout << "Barca:)I wish being fine soon!" << name<<endl;

			}
		else if (input=="exit"){
			cout << "Barca:)goodBye! " << name<<endl;
			exit=true;
			}
		else{
			cout << "Barca:)I don't understand U!" <<endl;
			int input_number{} ;
			cout << "Barca:)let's play Guessing game!" <<endl;
				// to genrate a random number every time run!! 
			srand((unsigned)time(NULL));
			// random number from 1 to 100		
			int random = 1 + (rand() % 9);
			//cout << "Barca:)greet gave anther number: " <<endl;
			//cin >> number2 ;
			do {
				cout << "Barca:)please gave me a number between 1-9: " <<endl;
				// store input number to compare with random number
				cin >> input_number ;
				
				if(input_number == random ){
					cout << "Barca:)Congratulation!!!!!!!!! " << name<< endl ;
					cout << "The correct number is : " << random << endl ;					
				}
				else if ( input_number < random )
					cout << "too low, try again" << endl ;
				else 					
					cout << "too high, try again" << endl ;		
			} while(input_number != random ) ;
			
			getline(cin, input);


			}

    }

    return 0;
}
