#include <iostream>
using namespace std;

int main(){

    //1 den 10a kadar sayıları yaz
    for (int i = 1; i < 10; i++)
    {
        cout << i << endl;
    }
    
    for (int i = 10; i > 0; i--) // 10dan 1e kadar sayıları yaz
    {
        cout << i << endl;
    }

    //{1,2,3,4} kümesinin elemanlarını kullanarak yazılabilecek 2 basamaklı sayılar (?)
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <=4; j++)
        {
            cout << i<<j <<endl;
        }      
    }
}