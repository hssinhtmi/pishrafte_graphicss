#ifndef FILe
#define FILe
#include <fstream>
#include <vector>

using namespace std;

class file
{
    public :
        //member functions
        void write_name(string);
        void write_patient(vector<int>);
        void write_score(int);
        void open();

    private :
        fstream myfile;
     
};

#endif