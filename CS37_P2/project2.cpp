#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std; 

template <int n>
float matrix_power(int (&pwrs)[n], int cnt, int bpwr){
    float tpwr = 0;
    for(int& pwr : pwrs){tpwr += pwr;}
    tpwr += bpwr;

    return tpwr;
}

int main(){

    //Open file
    ifstream combatFile("combat.txt");
    if(!combatFile.is_open()) {cout << "File failed to open!" << endl; return 0;}

    int botsCount;
    combatFile >> botsCount;
    int botsPower[botsCount];

    float matrixPowerRequired = matrix_power(botsPower, botsCount, bossPower);

    int microMissiles;
    float defenseMatrix;

    return 0;
}

