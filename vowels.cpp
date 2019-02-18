/*
* Tianqi Yang
* CIS 22A M/W
*/
#include <iostream>
using namespace std;
int countVowels(string s)
{
int numVowels =0 ;
     for  (int i = 0; i < s.length(); i++)
    {
      char cur =s[i];
        if (( cur == 'A') ||
                ( cur == 'E') ||
                (cur == 'I') ||
                (cur  == 'O') ||
                (cur == 'U') ||
                (cur  == 'a') ||
                (cur  == 'e') ||
                (cur == 'i') ||
                (cur == 'o') ||
                (cur== 'u'))
numVowels++;
    }
return numVowels;
}
int countLetters (string s)
{
    int numLetters = 0;
    for (int i=0; i <s.length();i++)
    {
        char cur =s[i];
            if(('a'<=cur && cur<='z')||('A'<=cur && cur<='Z'))
        numLetters ++;
    }
    return numLetters;
}
int main()
{
    string sentence;
    int numVowels, numLetters;
     cout << "Please enter a sentence or q to quit: ";
        getline (cin,sentence);
  while (sentence!="q" && sentence!= "Q" && sentence!= "quit" && sentence != "Quit")
    {

    numVowels = countVowels(sentence);
    numLetters = countLetters(sentence);
    cout << "There are " << numVowels << " vowels in your sentence, " << "and " <<numLetters <<" letters."<<endl;
cout << "Please enter a sentence or q to quit: ";
    getline (cin,sentence);
    }
    cout << "Goodbye!" <<endl;
return 0;
}
