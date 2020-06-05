#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);
    tm *lm = localtime(&now);
    cout << "Years : " << 1900 + lm->tm_year << endl;
    cout << "Month : " << 1 + lm->tm_mon << endl;
    cout << "Day : " << lm->tm_mday << endl;
    cout << "Time : " << lm->tm_hour << ": "<< lm->tm_min << ": " << lm->tm_sec << endl;
    return 0;
}
