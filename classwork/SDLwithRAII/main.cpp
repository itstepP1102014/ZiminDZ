#include <iostream>
#include <exception>


using namespace std;

int main()
{
    try
    {

    }
    catch(exception &e)
    {
        cerr<< "ERROR: " << e.what() << endl;
    }
    catch(...)
    {
        cerr<< "ERROR: something happened\n";
    }
    return 0;
}
