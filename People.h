#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include <vector>
class People{
        public:
                People(std::vector<std::string>&inputVec);
                void showAllAttr();
                float getAge();
                std::string getWorkClass();
                float getFnlwgt();
                std::string getEducation();
                float getEducationNum();
                std::string getMaritalStatus();
                std::string getOccupation();
                std::string getRelationship();
                std::string getRace();
                std::string getSex();
                float getCapitalGain();
                float getCapitalLoss();
                float getHoursPerWeek();
                std::string getCountry();
                std::string getGroup();
        private:
                float age;
                std::string workclass;
                float fnlwgt;
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
                std::string country;
                std::string group;
};
#endif