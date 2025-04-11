#include<string>
#include<unordered_set>
using namespace std;
#include<iostream>
bool isPangram(string& sentence)
{
    unordered_set<char> letters;
    for(char c:sentence){
        if(isalpha(c)){
        letters.insert(tolower(c));
        }

        }
        return letters.size()==26;
        


    }
   int main(){
    string sentence="Quickbrownfoxjumpsoverthelazydog";
    if(isPangram(sentence)){
        cout<<"\""<<sentence<<","<<"is a panagram"<<endl;
    }
    else{
        cout<<"\""<<sentence<<","<<"is  not a panagram"<<endl; 
    }
   }