#include <iostream>
#include <string>


struct Fish
{
    char class_id[10];
    float weight;
    float length;
};

enum Response{
    Yes = 1,
    No = 0,
    Maybe = -1
};


int main()
{
    using namespace std;
    char actor[30];
    short betsie[100];
    int number_1[5] = {1,3,5,7,9};
    short even = betsie[0] + betsie[100];
    char str_0[13] = "cheeseburger";
    string str_1 = "cheeseburger";
    Fish fish_A{"fish_A",10,10};
    // 枚举的用法比较特殊
    Response number_2 = Yes;
    // 指针
    double ted = 10.0d;
    double* p_ted = &ted;
    // 数组 + 指针
    float treacle[10];
    treacle[0] = treacle[9]= 999;
    float* p_treacle = &treacle[0];
    // cout << *(p_treacle) << endl;
    // cout << *(p_treacle+9) << endl;
    int size;
    // cout << "Please input positive integer: ";
    // cin >> size;
    // new 创建的数组没有名字，arr是指向这个数组的指针的名字，可以用来操作数组
    int* arr = new int[size];

    // cout << (int *)"home";

    Fish* fish_b = new Fish;
    fish_b->weight = 10;


    char ts[10];
    // cout << *(ts+9) << endl;

    cin.get();
    cin.get();

    return 0;
}