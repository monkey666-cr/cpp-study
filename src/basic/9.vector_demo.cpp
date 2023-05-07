#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // vector<char> vowels;
    // vector<char> vowels(5);

    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    // vector<int> student_scores(3);
    // cout << student_scores[0] << endl;

    // vector<int> student_scores(3, 100);
    // cout << student_scores[0] << endl;

    vector<int> student_scores{100, 99, 98};
    cout << "array风格访问: " << endl;
    cout << "三个学生的成绩为: " << student_scores[0] << " " << student_scores[1] << " " << student_scores[2] << endl;

    cout << "====================" << endl;
    cout << "vector风格访问: " << endl;
    cout << "三个学生的成绩: " << student_scores.at(0) << " " << student_scores.at(1) << " " << student_scores.at(2) << endl;
    cout << "vector大小为: " << student_scores.size() << endl;

    cout << "=====================" << endl;
    cout << "修改vector中的元素: ";
    cin >> student_scores.at(0);
    cin >> student_scores.at(1);
    cin >> student_scores.at(2);
    cout << "修改后的三个学生成绩: " << student_scores.at(0) << " " << student_scores.at(1) << " " << student_scores.at(2) << endl;

    cout << "======================" << endl;
    int new_add_score{0};
    cout << "新添加的成绩: ";
    cin >> new_add_score;
    student_scores.push_back(new_add_score);
    cout << "再添加一个新的成绩: ";
    cin >> new_add_score;
    student_scores.push_back(new_add_score);

    cout << "添加后一共有: " << student_scores.size() << "成绩, 分别为: " << endl;
    cout << "第1个成绩为: " << student_scores.at(0) << endl;
    cout << "第2个成绩为: " << student_scores.at(1) << endl;
    cout << "第3个成绩为: " << student_scores.at(2) << endl;
    cout << "第4个成绩为: " << student_scores.at(3) << endl;
    cout << "第5个成绩为: " << student_scores.at(4) << endl;

    cout << "=================================" << endl;

    vector<vector<int>> vector_2d{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    cout << "array 风格打印二维vector第一行: " << endl;
    cout << vector_2d[0][0] << " " << vector_2d[0][1] << " " << vector_2d[0][2] << endl;
    cout << "vector 风格打印二维vector第二行: " << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << " " << vector_2d.at(1).at(2) << endl;

    return 0;
}
