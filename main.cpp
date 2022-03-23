#include <iostream> // standard input/output stream objects
#include <stdlib.h> // srand, rand
using namespace std;

// 1 = "rock"
// 2 = "paper"
// 3 = "scissors"

void userMenu(); // Function Prototype
void computersChoice(int); // Function Prototype
void finalAnswer(int, int);

int main()
{
  int compChoice, userInput;
  
  while(true) {
  // Create computer's random number from 1-3
  srand (time(NULL)); // initialize random seed
  compChoice = {
    rand() % 3 + 1
    };

  // Display Welcome message
  cout << "Welcome to a game of Rock, Paper, Scissors." << endl;

  // User must enter their chioce of "rock", "paper", or scissors"
  userMenu();
  cin >> userInput;
  cout << "----------------------------------------" << endl;
  cout << "----------------------------------------" << endl;
  // validate input
  while (userInput < 1 || userInput > 3) {
    cout << "\nThe number you selected doesn't exist. Try again." << endl;
    cout << "Enter a number between 1-3: ";
      cin >> userInput;
    }; // end of while loop

  // Computer's choice is displayed
  computersChoice(compChoice);
  finalAnswer(compChoice, userInput);  
  }  
  return 0;
} // end of main


/* Function Definitions */
void userMenu(){
  cout << "Choose your weapon and enter the number: " << endl;
  // rock
  cout << "1: Rock" << endl;
  cout << "********************" << endl;
  cout << "    _______" << endl;
  cout << "---'   ____)" << endl;
  cout << "       (_____)" << endl;
  cout << "      (_____)" << endl;
  cout << "      (____)" << endl;
  cout << "---.__(___)\n\n\n";
  // paper
  cout << "2: Paper" << endl;
  cout << "********************" << endl;
  cout << "      _______" << endl;
  cout << " ---'    ____)____" << endl;
  cout << "             ______)" << endl;
  cout << "            _______)" << endl;
  cout << "           _______)" << endl;
  cout << "   ---.__________)\n\n\n";
  // scissors
  cout << "3: Scissors" << endl;
  cout << "********************" <<  endl;
  cout << "    _______" << endl;
  cout << "---'   ____)____" << endl;
  cout << "          ______)" << endl;
  cout << "     __________)" << endl;
  cout << "      (____)" << endl;
  cout << "---.__(___)" << endl;
  cout << "********************" << endl;

  cout << "Your choice of weapon is: ";
  
};

void computersChoice(int compChoice)
{
  // cout << "Computer's Choice: " << compChoice << endl;
  switch(compChoice) {
    case 1:
      cout << "Computer's Choice was, 1: Rock" << endl;
      // rock
      cout << "    _______" << endl;
      cout << "---'   ____)" << endl;
      cout << "       (_____)" << endl;
      cout << "      (_____)" << endl;
      cout << "      (____)" << endl;
      cout << "---.__(___)" << endl;
      break;
    case 2:
      cout << "Computer's Choice was, 2: Paper" << endl;
      // paper
      cout << "      _______" << endl;
      cout << " ---'    ____)____" << endl;
      cout << "             ______)" << endl;
      cout << "            _______)" << endl;
      cout << "           _______)" << endl;
      cout << "   ---.__________)" << endl;
      break;
    case 3:
      cout << "Computer's Choice was, 3: Scissors" << endl;
      // scissors
      cout << "    _______" << endl;
      cout << "---'   ____)____" << endl;
      cout << "          ______)" << endl;
      cout << "     __________)" << endl;
      cout << "      (____)" << endl;
      cout << "---.__(___)" << endl;
      break;
    }
    cout << "\n\n\n";
  return compChoice;
};

void finalAnswer(int cC, int uI){
    if (cC == 1 && uI == 3) {
      cout << "Rock beats Scissors. Computer Wins!" << endl;
       // rock
      cout << "1: Rock" << endl;
      cout << "********************" << endl;
      cout << "    _______" << endl;
      cout << "---'   ____)" << endl;
      cout << "       (_____)" << endl;
      cout << "      (_____)" << endl;
      cout << "      (____)" << endl;
      cout << "---.__(___)" << endl;
      exit(0);
    }
    else if (cC == 3 && uI == 2) {
      cout << "Scissors beats Paper. Computer Wins!" << endl;
       // scissors
      cout << "********************" <<  endl;
      cout << "    _______" << endl;
      cout << "---'   ____)____" << endl;
      cout << "          ______)" << endl;
      cout << "     __________)" << endl;
      cout << "      (____)" << endl;
      cout << "---.__(___)" << endl;
      exit(0);
    }
    else if (cC == 2 && uI == 1) {
      cout << "Paper beats Rock. Computer Wins!" << endl;
        // paper
      cout << "********************" << endl;
      cout << "      _______" << endl;
      cout << " ---'    ____)____" << endl;
      cout << "             ______)" << endl;
      cout << "            _______)" << endl;
      cout << "           _______)" << endl;
      cout << "   ---.__________)" << endl;
      exit(0);
    }
    else if (cC == 3 && uI == 1) {
      cout << "Rock beats Scissors. You Win!" << endl;
       // rock
      cout << "********************" << endl;
      cout << "    _______" << endl;
      cout << "---'   ____)" << endl;
      cout << "       (_____)" << endl;
      cout << "      (_____)" << endl;
      cout << "      (____)" << endl;
      cout << "---.__(___)" << endl;
      exit(0);
    }  
    else if (cC == 2 && uI == 3) {
      cout << "Scissors beats Paper. You Win!" << endl;
      cout << "" << endl;
       // scissors
      cout << "********************" <<  endl;
      cout << "    _______" << endl;
      cout << "---'   ____)____" << endl;
      cout << "          ______)" << endl;
      cout << "     __________)" << endl;
      cout << "      (____)" << endl;
      cout << "---.__(___)" << endl;
      exit(0);
    }  
    else if (cC == 1 && uI == 2) {
      cout << "Paper beats Rock. You Win!" << endl;
        // paper
      cout << "********************" << endl;
      cout << "      _______" << endl;
      cout << " ---'    ____)____" << endl;
      cout << "             ______)" << endl;
      cout << "            _______)" << endl;
      cout << "           _______)" << endl;
      cout << "   ---.__________)" << endl;
      exit(0);
    }  
    else {
      cout << "It's a tie! Try again.\n\n";
    };
} // end of finalAnswer
  

