#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int main() 
{
    string line;
    int numberOfSubstitutions = 15;
    string triggers[numberOfSubstitutions]      = {"ro","rm","re","vi","va","th","l","mr","rou","or","are","don't","dont",".","."};
    string substitutions[numberOfSubstitutions] = {"wo","wm","we","wi","wa","f","w","mistew","wu","ow","awe","downt","downt"," uwu"," owo"};
    while (getline(cin, line)){
        string outln = line;
        bool stillWorking = true;
        int found = 0;
        while (stillWorking) {
            stillWorking = false;
            for (int i=0;i<numberOfSubstitutions;i++) {
                found = outln.find(triggers[i]); 
                if (found != string::npos) {
                    outln = outln.replace(found,triggers[i].length(),substitutions[i]);
                    stillWorking = true;
                }
            }
            //outln = outln.replace(line.find("."),4," uwu");
        }
        cout << outln << endl;
    }
    return 0;
}
