#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <chrono>
#include <windows.h>
#include <cmath>

struct Timer
{
    // std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::system_clock::time_point start, end;
    std::chrono::duration<float> duration;

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float cost_time = duration.count()*1000.0f;
        std::cout<< "\ncost:  " <<  cost_time  << " ms" << std::endl;
    }
};

void function(){
    Timer timer;
}



int main(){

    /*
    // 获取键盘输入
    int c;
    std::cin >> c;

    
    // 连续赋值
    int a,b;
    a = b = c =100;
    printf("%d\n",c);

    int d = sqrt(a);
    printf("%d",d);

    printf("%d", '$');
    */



    function();
    // Sleep(30);
    
    // // char* p = "C Language";
    
    // int y = 9;
    // int* x = &y;
    // std::cout << "\n\nvalue:  " << *x ;
    // std::cout << std::endl;

    // int number_list[50];
    // int number = number_list[0] = 10;

    // printf("%d",number);

    // int v500[500] = {0};

    
    // char name[50],age[50];
    // std::cout << "name: \n";
    // std::cin.getline(name,20);
    // std::cout << "age: \n";
    // std::cin >> age;
    // std::cout << std::endl;

    int home = 10;
    std::cout<< &home << std::endl;



    std::cin.get();
    std::cin.get();
 
    return 0;
}


