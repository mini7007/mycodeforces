#include<iostream>
using namespace std;
int main() {
    string s, t;
    int a = 0;
    cin>>s>>t; // Like this we write the words s and t
    // Checking whether length of word s is equal to word t
    if(s.length() == t.length()) {
        // Since their lengths are the same, we need only 1 for loop
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == t[s.length()-i-1]) // Checking if the words are written reversely
                a++; // Will count how many letters are the same
        }
        if(a == s.length()) // If every single letter is correct then it'll be equal to lenght of s
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
        
    return 0;
}