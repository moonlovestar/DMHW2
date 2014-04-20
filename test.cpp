#include <iostream>
#include <fstream>
using namespace std;


struct People{
        float age;
        std::string workclass;
        std::string education;
        float educationNum;
        std::string maritalStatus;
        std::string occupation;
        std::string relationship;
        std::string race;
        std::string sex;
        float capitalGain;
        float capitalLoss;
        float hoursPerWeek;
        float country;
        std::string group;


};

int main()
{
	People* s[100];
    ifstream input;
    ofstream output; 
    input.open("census1997.dat");



    for(int i=0; i< 10; i++){
                s[i] = new People; 
                std::vector<std::string> splitStringToWords(std::string inputString, std::string delim);
                input >> s[i]->age >> s[i]->workclass >> s[i]->education >> s[i]->educationNum >> s[i]->maritalStatus >> s[i]->occupation
                	  >> s[i]->relationship >> s[i]->race >> s[i]->sex >> s[i]->capitalGain >> s[i]->capitalLoss >> s[i]->hoursPerWeek
                	  >> s[i]->country >> s[i]->group;
        }
        cout << s[0]->age << endl;
        cout << s[0]->workclass << endl;
        cout << s[0]->education << endl;
        cout << s[0]->educationNum << endl;
        cout << s[0]->maritalStatus << endl;
    system("pause");
    return 0;

}