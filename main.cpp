#include <iostream>

using namespace std;

class timeconverter
{
public:
    void sectohours()
    {
        int sec, h, m;
        cout << "Enter seconds: ";
        cin >> sec;
        h = sec / 3600;
        sec = sec % 3600;
        m = sec / 60;
        sec = sec % 60;
        cout << "hh:mm:ss = " << h << ":" << m << ":" << sec << endl;
    }

    void hourstosec()
    {
        int h, m, sec;
        cout << "Enter hours: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> sec;
        sec = (h * 3600) + (m * 60) + sec;
        cout << "Total seconds = " << sec << endl;
    }
};

int main()
{
    timeconverter tc;
    tc.sectohours();
    tc.hourstosec();

    return 0;
}