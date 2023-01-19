#include <fstream>
#include "file.h"
#include <vector>

using namespace std;

void file::open()
{
    myfile.open("../src/hospital.txt", ios::out);
    
    myfile.close();
}

void file::write_name(string name)
{
    myfile.open("../src/hospital.txt", ios::in | ios::app);

    myfile << name << endl;

    myfile.close();
}
void file::write_patient(vector<int> number)
{
    myfile.open("../src/hospital.txt", ios::in | ios::app);

    for (size_t i = 0; i < number.size(); i++)
    {
        myfile << number.at(i) << endl;
    }
    myfile.close();
}
void file::write_score(int score)
{
    myfile.open("../src/hospital.txt", ios::in | ios::app);

    myfile << score << endl;

    myfile.close();
}