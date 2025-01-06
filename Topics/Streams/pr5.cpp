#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
// you just need to implement this function
string mostCommonWord(string document)
{
    // your code here
    unordered_map<string,int> strwords;
    string word;
    string maxWord;
    int maxCount = 0;
    for(char &c : document){
        if(ispunct(c)){
            c = ' ';
        }
        c = tolower(c);
    }
    stringstream s(document);
    while(s >> word){
        strwords[word]++;
    }
    for(auto &ss : strwords){
        if(ss.second > maxCount){
            maxWord = ss.first;
            maxCount = ss.second;
        }
    }

    return maxWord;
}
int main()
{
    string document;
    cin >> document;

    // please do not change the below code
    cout << mostCommonWord(document);
    return 0;
}