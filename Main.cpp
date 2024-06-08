#include <iostream>
#include <string>
#include <map>
#include <vector>

std::map<std::string, char> decryptionMap = {
    {"A0", 'A'}, {"A1", 'B'}, {"B0", 'C'}, {"B1", 'D'}, {"C0", 'E'}, {"C1", 'F'},
    {"D0", 'G'}, {"D1", 'H'}, {"E0", 'I'}, {"E1", 'J'}, {"F0", 'K'}, {"F1", 'L'},
    {"G0", 'M'}, {"G1", 'N'}, {"H0", 'O'}, {"H1", 'P'}, {"I0", 'Q'}, {"I1", 'R'},
    {"J0", 'S'}, {"J1", 'T'}, {"K0", 'U'}, {"K1", 'V'}, {"L0", 'W'}, {"L1", 'X'},
    {"M0", 'Y'}, {"M1", 'Z'}
};

std::map<char, std::string> encryptionMap = {
    {'A', "A0"}, {'B', "A1"}, {'C', "B0"}, {'D', "B1"}, {'E', "C0"}, {'F', "C1"},
    {'G', "D0"}, {'H', "D1"}, {'I', "E0"}, {'J', "E1"}, {'K', "F0"}, {'L', "F1"},
    {'M', "G0"}, {'N', "G1"}, {'O', "H0"}, {'P', "H1"}, {'Q', "I0"}, {'R', "I1"},
    {'S', "J0"}, {'T', "J1"}, {'U', "K0"}, {'V', "K1"}, {'W', "L0"}, {'X', "L1"},
    {'Y', "M0"}, {'Z', "M1"}
};

void Decode()
{
    std::string Pass;
    std::string Word;

    std::cin >> Pass;
    std::cin >> Word;

    std::string Password;
    if(Pass.length() != Word.length())
        return;
    std::cout << "\n";
    for (int i = 0; i < Pass.length(); i++)
    {
        Password += Pass.at(i); 
        Password += Word.at(i);
    }

    std::vector<std::string> Pw;
    int Point = 0;
    for (int i = 0; i < Password.length(); i += 2)
    {        
        std::string Temp;
        Temp += Password[i];
        Temp += Password[i+1];
        Pw.push_back(Temp);
    }

    std::string Output;
    for (int i = 0; i < Pw.size(); i++)
    {
        Output += decryptionMap[Pw[i]];
    }
    
    std::cout << Output;
}

void Encode()
{

}

int main()
{
    Decode();
    return 0;
}