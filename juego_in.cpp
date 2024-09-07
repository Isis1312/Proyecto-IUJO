#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ClearScreen();
void PlayGame();
void Draw();

char choice; 
string words[] = {"update", "cybersecurity", "firewall", "protection", "antivirus"};
string word, incorrectGuesses;
int nA;
int lives;
bool correct, complete;

int main() {
    while(true){
        lives = 6;    
        word = "";
        incorrectGuesses = "";
        ClearScreen();
        Draw();
        cout << "::::MENU::::" << endl;
        cout << "1) Play game" << endl;
        cout << "2) Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch(choice){
            case '1':
                PlayGame();
                break;
            case '2':
                return 0;
                break;    
        }
    }
}

void PlayGame(){
    srand((int)time(NULL));
    nA = rand() % 5;
    
    for(int i = 0; i < (int)words[nA].size(); i++){
        word += "-";
    }
    
    while(lives > 0){
        ClearScreen();
        cout << "::: H A N G M A N :::" << endl;
        Draw();
        cout << "Mistakes: " << incorrectGuesses;
        cout << "  Progress: " << word << endl;
        cout << "Enter a letter (lowercase): ";
        cin >> choice;
        
        correct = false;
        for(int i = 0; i < (int)words[nA].size(); i++){
            if(words[nA][i] == choice){
                word[i] = choice;
                correct = true;
            }
        }
        if(!correct){
            lives--;
            incorrectGuesses += choice;
        }
        
        complete = true;
        for(int i = 0; i < (int)word.size(); i++){
            if(word[i] == '-'){
                complete = false;
            }
        } 
        if(complete){
            ClearScreen();
            cout << "::: H A N G M A N :::" << endl;
            Draw();
            cout << "Word: " << words[nA] << endl;
            cout << "You won! Press any key to continue: ";
            cin >> choice;
            return;
        }
    }
    ClearScreen();    
    cout << "::: H A N G M A N :::" << endl;
    Draw();
    cout << "Word: " << words[nA] << endl;
    cout << "You lost! Press any key to continue: ";
    cin >> choice;
    return;
}

void Draw(){
    switch(lives){
        case 6:
        cout << " --------" << endl;
        cout << " |       |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " ---" << endl;
        break;
        case 5:
        cout << " --------" << endl;
        cout << " |       |" << endl;
        cout << " |       0" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " ---" << endl;    
        break;
        case 4:
        cout << " --------" << endl;
        cout << " |       |" << endl;
        cout << " |       0" << endl;
        cout << " |       |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " ---" << endl;    
        break;
        case 3:
        cout << " --------" << endl;
        cout << " |       |" << endl;
        cout << " |       0" << endl;
        cout << " |      -|" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " ---" << endl;    
        break;
        case 2:
        cout << " --------" << endl;
        cout << " |       |" << endl;
        cout << " |       0" << endl;
        cout << " |      -|-" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " ---" << endl;    
        break;
        case 1:
        cout << " --------" << endl;
        cout << " |       |" << endl;
        cout << " |       0" << endl;
        cout << " |      -|-" << endl;
        cout << " |      -" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " ---" << endl;    
        break;
        case 0:
        cout << " --------" << endl;
        cout << " |       |" << endl;
        cout << " |       0" << endl;
        cout << " |      -|-" << endl;
        cout << " |      - -" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " ---" << endl;    
        break;
    }
}

void ClearScreen(){
    if(system ("cls") == -1){
        cout << "Error clearing the screen.";
    }
}
