// Eunice Wu 
// November 3, 2024
// In-Class Lab 7

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {

    // declared valariables so values taken from input file can be stored and worked with
    string name;
    double s1, s2, s3 = 0;
    double finalscore = 0; // set to zero to prevent garbage values

    // declared and opened input file 
    ifstream scores;

    scores.open("game_scores.txt"); 

    // a loop that runs for three times. it reads the user name, print it, calculate avg, and output corresponding statement 
    for (int i = 0; i < 3; i++)
    {
        scores >> name >> s1 >> s2 >> s3;
        cout << name << " - ";
        finalscore = (s1*.2)+(s2*.3)+(s3*.5);

        if (finalscore < 1000)
        cout << "Beginner - Keep Practicing!" <<"\n";
        else if (finalscore < 1500)
        cout << "Intermediate" <<"\n"; // continous else if statements that narrows down options
        else if (finalscore < 1800)
        cout << "Advanced - Good Job!" <<"\n";
        else if (finalscore < 2000)
        cout << "Master - Good Job!" <<"\n";
        else if (finalscore > 2000)
        cout << "Congrats! You are an Expert!" <<"\n";

    }
    
    return 0;
}