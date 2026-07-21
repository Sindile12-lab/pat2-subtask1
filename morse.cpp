#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

string getMorse(char c) {
    switch(c) {
        case 'A': return ".-"; case 'B': return "-..."; case 'C': return "-.-.";
        case 'D': return "-.."; case 'E': return "."; case 'F': return "..-.";
        case 'G': return "--."; case 'H': return "...."; case 'I': return "..";
        case 'J': return ".---"; case 'K': return "-.-"; case 'L': return ".-..";
        case 'M': return "--"; case 'N': return "-."; case 'O': return "---";
        case 'P': return ".--."; case 'Q': return "--.-"; case 'R': return ".-.";
        case 'S': return "..."; case 'T': return "-"; case 'U': return "..-";
        case 'V': return "...-"; case 'W': return ".--"; case 'X': return "-..-";
        case 'Y': return "-.--"; case 'Z': return "--..";
        default: return "";
    }
}

int main() {
    string input;
    string fullMorse = "";
    
    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++) {
        char ch = toupper(input[i]);
        
        if(isalpha(ch)) {
            string code = getMorse(ch);
            cout << ch << ": " << code << endl;
            
            if(fullMorse!= "") 
                fullMorse += " "; // 3 spaces between letters
            fullMorse += code;
        }
    }

    cout << "\nFull Morse Code Message: " << fullMorse << endl;
    return 0;
}
