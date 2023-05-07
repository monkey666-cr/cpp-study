#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // 字符型
    cout << "========================" << endl;
    char my_char {'j'};
    cout << "my char: " << my_char << endl;

    // 整型
    cout << "========================" << endl;
    short my_score {59};
    cout << "my score: " << my_score << endl;

    // = 与 {} 的区别
    short overflow_num_i = 32768; // 不会报错
    cout << overflow_num_i << endl;

    // short overflow_num_i {32768}; 
    // cout << overflow_num_i << endl;

    int my_height {170};
    cout << "my height: " << my_height << endl;

    long people_in_hangzhou {1036000};
    cout << "people in hangzhong: " << people_in_hangzhou << endl;

    long long people_on_earth {80'0000'0000};
    cout << "people on earth: " << people_on_earth << endl;

    // 浮点型
    cout << "========================" << endl;
    float book_price {32.23f};
    cout << "book price: " << book_price << endl;

    double pi {3.141592};
    cout << "pi: " << pi << endl;

    // 布尔型
    cout << "========================" << endl;
    bool add_to_cart {false};
    cout << boolalpha;
    cout << "add to cart: " << add_to_cart << endl;

    return 0;
}
