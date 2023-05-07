#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int student_scores[] {100, 98, 90, 86, 84};
    for (auto score: student_scores)
        cout << score << endl;

    vector <double> temps {23.1, 22.9, 19.3, 23.2};
    double temp_average {};
    double temp_total {};

    for (auto temp: temps)
        temp_total += temp;

    if (temps.size() != 0)
        temp_average = temp_total / temps.size();

    cout << fixed << setprecision(1);
    cout << "平均温度: " << temp_average << endl;

    for (auto i: {1, 2, 3, 4, 5, 6})
        cout << i << endl;

    for (auto c: "This is test")
        cout << c;
    cout << endl;

    return 0;
}
