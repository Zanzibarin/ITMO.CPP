#pragma once
#include <string>
#include <sstream>

using namespace std;
class Discipline {
public:
	Discipline(string nameDiscipline, unsigned int workTime, string reportingForm) :
		nameDiscipline(nameDiscipline), workTime(workTime), reportingForm (reportingForm){}
	string getInfoDistcipline() const
	{
		std::ostringstream fullInfo;
		fullInfo << this->nameDiscipline << " "
			<< this->workTime << " "
			<< this->reportingForm;
		return fullInfo.str();
	}
private:
	string nameDiscipline;
	unsigned int workTime;
	string reportingForm;
};