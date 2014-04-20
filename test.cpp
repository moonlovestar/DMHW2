#include <iostream>
#include <fstream>
using namespace std;

vector<string> splitStringToWords(string inputString,string delim)
{
	vector<string> wordVector;
	stringstream stringStream(inputString);
	string line;
	getline(stringStream, line); 
	{
		std::size_t prev = 0, pos;
		while ((pos = line.find_first_of(delim, prev)) != std::string::npos)
		{
			if (pos > prev)
				wordVector.push_back(line.substr(prev, pos-prev));
			prev = pos+1;
		}
		if (prev < line.length())
			wordVector.push_back(line.substr(prev, std::string::npos));
	}
	return wordVector;
}

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
    file.open("census1997.dat");
    if(file)
	{
	    string tempStr="";
		while(getline(file,tempStr))
		{
			//  cout<<tempStr<<endl;
			if(tempStr.find("spam")==0)
			{
				SpamSMS.push_back(tempStr);
			//	cout<<"------------------------------"<<endl;
			//	cout<<"This Message is Spam SMS"<<endl;
			}
			else
			{
			//	cout<<"------------------------------"<<endl;
			//	cout<<"This Message is normal SMS"<<endl;
				SMS.push_back(tempStr);
			}

		}


	}
	else
	{
		cout<<"Cannot open file!"<<endl;
	}


    for(int i=0; i< 10; i++){
                s[i] = new People; 
                //vector<string> wordVector;
				//wordVector=splitStringToWords(,",");
				for(int j=0;j<wordVector.size();j++)
				{
					input >> s[i]->age >> s[i]->workclass >> s[i]->education >> s[i]->educationNum >> s[i]->maritalStatus >> s[i]->occupation
					      >> s[i]->relationship >> s[i]->race >> s[i]->sex >> s[i]->capitalGain >> s[i]->capitalLoss >> s[i]->hoursPerWeek
					       >> s[i]->country >> s[i]->group;
				}
                
        }
        cout << s[0]->age << endl;
        cout << s[0]->workclass << endl;
        cout << s[0]->education << endl;
        cout << s[0]->educationNum << endl;
        cout << s[0]->maritalStatus << endl;
    system("pause");
    return 0;

}