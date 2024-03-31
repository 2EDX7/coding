#ifndef lab11_h
#define lab11_h

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

string concatenate(int day, int month, int year){
    return to_string(year)+'-'+to_string(month)+'-'+to_string(day);
}

void textStatistic(string sentence, int &CountVowel, int &CountConsonant, int &CountDigit, int &CountWhiteSpace){
    for (int i = 0; i < sentence.length(); i++)
    {
        if (isdigit(sentence[i]))
        {
            CountDigit++;
        }
        else if (isspace(sentence[i]))
        {
            CountWhiteSpace++;
        }
        else if (isalpha(sentence[i]))
        {
            sentence[i]=tolower(sentence[i]);
            if (sentence[i]=='a' ||sentence[i]=='o' ||sentence[i]=='i' ||sentence[i]=='u' ||sentence[i]=='e')
            {
                CountVowel++;
            }
            else{
                CountConsonant++;
            }
            
        }

    }
    

}

void removeNonAlphabetic(string &str){
    string str1="";
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            str1+=str[i];
        }
    }
    str=str1;
}

int textSplit(const string txt, string segments[], char delimiter = ' ') {
    int startDelimiter = 0, j = 0;

    for (int i = 0; i <= txt.length(); i++) {
        if (i == txt.length() || txt[i] == delimiter) {
            if (i > startDelimiter) {
                segments[j++] = txt.substr(startDelimiter, i - startDelimiter);
            }
            startDelimiter = i + 1;
        }
    }

    return j;
}

void capitalizingFirstLetter(std::string &sentence) {
    for (int i = 0; i < sentence.length(); i++) {
        if (isspace(sentence[i]) || i == 0) {
            if (isalpha(sentence[i + 1])) {
                if (i == 0) {
                    sentence[0] = toupper(sentence[0]);
                }
                else{
                sentence[i + 1] = toupper(sentence[i + 1]);
                }
            }
        }
    }
}

int countWordOccurrences(string txt, string target){
    int occ=0,i=0;
    if (target.length() <= txt.length()) {
        for (int i = 0; i <= txt.length() ; i++) {
            string tempTarget = txt.substr(i, target.length());
            if (tempTarget == target) {
                occ++;
            }
        }
    }


    //second funciton
    // while ( i < txt.length())
    // {
    //     if ((txt.find(target,i)) != std::string::npos)
    //     {
    //         occ++;
    //         i+=target.length();
    //     }
    //     else{
    //         i++;
    //     }
    // }


    return occ;

}

string removeConsecutiveRepetitions(string sentence) {
    int segmentStart = 0, i = 0;
    string sentenceCleaned = "";

    while (i < sentence.length()) {
        if (sentence[i] == ' ') {
            int j = i + 1;
            while (j < sentence.length() && sentence[j] != ' ') {
                j++;
            }

            string firstWord = sentence.substr(segmentStart, i - segmentStart);
            string secondWord = sentence.substr(i + 1, j - i - 1);

            if (firstWord == secondWord && (i + secondWord.length()) != sentence.length()) {
                sentenceCleaned += firstWord+' ';
                i = i + firstWord.length() + 1;
                segmentStart = i;
            } else {
                sentenceCleaned += firstWord + ' ' + secondWord+' ';
                i = j + 1;
                segmentStart = i;
            }

        } else {
            i++;
        }
    }
    return sentenceCleaned;
}

void removeStopWord(string arrayOfWord[],int &wordsSize,string newArrayOfWords[]){
    string stopWordsList[]={"a", "an", "and", "are", "as", "at", "be", "but", "by", "for", "if", "in", "into", "is", "it", "no", "not", "of", "on", "or", "such", "that", "the", "their", "then", "there", "these", "they", "this", "to", "was","will" , "with"};
    int k=0;
    for (int i = 0; i < wordsSize; i++)
    {
        bool differenceFromStop=true;
        for ( int j = 0; j < 33; j++)
        {
            if (arrayOfWord[i] == stopWordsList[j])
            {
                differenceFromStop=false;
                break;
            }
        }

        if (differenceFromStop)
        {
            newArrayOfWords[k]  = arrayOfWord[i];
            k++;
        }
    }
    wordsSize=k;
}

double Similarity( string sentence1, string sentence2){
    
    int commonwords=0;
    bool commonword=false;
    double similarity;
    string sentence1Array[100],sentence2Array[100];
    
    int size1 = textSplit(sentence1,sentence1Array);
    int size2 = textSplit(sentence2,sentence2Array);

    int minSize = min(size1,size2);
    for (int i = 0; i < minSize; i++)
    {
        commonword=false;
        for (int j = 0; j < minSize; j++)
        {
            if (sentence1Array[i] == sentence2Array[j])
            {
                commonword=true;
            }
            
        }
        if (commonword)
        {
            commonwords++;
        }
    }
    similarity = commonwords/minSize;
    return  similarity;
}



#endif