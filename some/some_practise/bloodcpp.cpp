#include<iostream>
#include<string>

using namespace std;

void sugar_blood();   //ÑªÌÇÓëÌÇ»¯Ñªºìµ°°×º¯Êý
void blood_sugar();

int main(void)
{
    sugar_blood();
   // blood_sugar();
    system("pause");
    return 0;
}


void sugar_blood()
{    //yÑªÌÇ=(x-6)*1.6+7  ÌÇ»¯
    double x = 4.0;
    double y = 0.0;
    while (true)
    {
        if (x > 6.0) { break; }
        y = (x - 6) * 1.6 + 7;
        cout << "ÌÇ»¯=" << x << "\tÑªÌÇ" << y << endl;
        x += 0.1;
    }
}

void blood_sugar()
{    //ÌÇ»¯y=(x-6)*1.6+7   ÑªÌÇ
    double x = 3.8; //ÑªÌÇ3.9-6.1    6.1-7.0
    double y = 0.0;   //ÌÇ»¯4.0-6.0
    while (true)
    {
        x += 0.1;
        if (x > 7.0) { break; }
       // y = (x - 6) * 1.6 + 7;
        else if (x > 3.9 && x < 5.6)
        {
            y = (x - 7) / 1.6 + 6;
            cout << "ÑªÌÇ=" << x << "\tÌÇ»¯" << y << endl;
            
        }
        else if(x>=5.6&&x<=6.1)
        {
            cout << "\n";
            y = (x - 7) / 1.6 + 6;
            cout << "ÑªÌÇ=" << x << "\tÌÇ»¯" << y << endl;
        }
        else {
            cout << "\n";
            y = (x - 7) / 1.6 + 6;
            cout << "ÑªÌÇ=" << x << "\tÌÇ»¯" << y << endl;
        }
    }
}