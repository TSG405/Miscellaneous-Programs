//: C02:GetWords.cpp
// Break a file into whitespace-separated words
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    vector<string> words;
     ifstream in("GetWords.cpp");
     string word;
     while(getline(in, word))// strings separated in the basis of new lines
     // while(in >> word) // to separate he characters of the string in space separated strnings
     words.push_back(word);
     for(int i = 0; i < words.size(); i++)
     cout << words[i] << endl;
}
