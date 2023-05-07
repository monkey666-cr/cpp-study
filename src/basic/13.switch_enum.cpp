#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    enum Traffic_light {red, yellow, green};
    Traffic_light light_color {yellow};

    switch (light_color)
    {
    case red:
        cout << "红灯" << endl;
        break;
    case yellow:
        cout << "黄灯" << endl;
        break;
    default:
        cout << "ok" << endl;
        break;
    }

    return 0;
}
