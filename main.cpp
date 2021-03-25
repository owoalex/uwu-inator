#include <iostream>
#include <string>
#include <sstream>


using namespace std;

const int NUMBER_OF_SUBS = 17;

int main() 
{
    string line;
    const string triggers[NUMBER_OF_SUBS]      = {"ru","ro","the","rm","re","vi","va","th","l","mr","rou","or","are","don't","dont",".","."};
    const string substitutions[NUMBER_OF_SUBS] = {"wu","wo","de","wm","we","wi","wa","f","w","mistew","wu","ow","awe","downt","downt"," uwu"," owo"};
    while (getline(cin, line)){
        string outln = line;
        bool stillWorking = true;
        int found = 0;
        while (stillWorking) {
            stillWorking = false;
            for (int i=0;i<NUMBER_OF_SUBS;i++) {
                found = outln.find(triggers[i]); 
                if (found != string::npos) {
                    outln = outln.replace(found,triggers[i].length(),substitutions[i]);
                    stillWorking = true;
                }
            }
        }
        cout << outln << endl;
    }
    return 0;
}
