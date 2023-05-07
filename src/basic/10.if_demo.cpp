#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int input_num{0};
    const int lower_limit{10};
    const int upper_limit{100};

    cout << "请输入一个介于" << lower_limit << "和" << upper_limit << "之间的整数: " << endl;
    cin >> input_num;

    if (input_num >= lower_limit)
    {
        cout << "=================条件1==================" << endl;
        cout << input_num << "大于等于" << lower_limit << endl;
        cout << input_num << "比" << lower_limit << "大" << (input_num - lower_limit) << endl;
    }

    if (input_num <= upper_limit)
    {
        cout << "===================条件2====================" << endl;
        cout << input_num << "小于等于" << upper_limit << endl;
        cout << input_num << "比" << upper_limit << "小" << (upper_limit - input_num) << endl;
    }
    

    return 0;
}
