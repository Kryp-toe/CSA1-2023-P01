#include <iostream>

using namespace std;

int main()
{
    int imon = 83;
    int itue = 12;
    int iwed = 33;
    int ithu = 49;
    int ifri = 76;
    int isat = 52;
    int isun = 58;
    
    string mon = "Mon";
    string tue = "Tue";
    string wed = "Wed";
    string thu = "Thu";
    string fri = "Fri";
    string sat = "Sat";
    string sun = "Sun";
    
    double TotalAvgKM = (imon+itue+iwed+ithu+ifri+isat+isun)/7;
    
    const double ConvFact = 0.621371;
    
    double TotalAvgMl = TotalAvgKM * ConvFact;
    
    std::cout << mon << "\t" << imon << std:: endl;
    std::cout << tue << "\t" << itue << std:: endl;
    std::cout << wed << "\t" << iwed << std:: endl;
    std::cout << thu << "\t" << ithu << std:: endl;
    std::cout << fri << "\t" << ifri << std:: endl;
    std::cout << sat << "\t" << isat << std:: endl;
    std::cout << sun << "\t" << isun << std:: endl;
    
    std::cout << "Total Average KM" << "\t" << TotalAvgKM << std:: endl;
    std::cout << "Total Average Ml" << "\t" << TotalAvgMl << std:: endl;
    
    return 0;
}