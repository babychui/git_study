#include<iostream>
#include<string>

using namespace std;

void sugar_blood();   //Ѫ�����ǻ�Ѫ�쵰�׺���
void blood_sugar();

int main(void)
{
    sugar_blood();
   // blood_sugar();
    system("pause");
    return 0;
}


void sugar_blood()
{    //yѪ��=(x-6)*1.6+7  �ǻ�
    double x = 4.0;
    double y = 0.0;
    while (true)
    {
        if (x > 6.0) { break; }
        y = (x - 6) * 1.6 + 7;
        cout << "�ǻ�=" << x << "\tѪ��" << y << endl;
        x += 0.1;
    }
}

void blood_sugar()
{    //�ǻ�y=(x-6)*1.6+7   Ѫ��
    double x = 3.8; //Ѫ��3.9-6.1    6.1-7.0
    double y = 0.0;   //�ǻ�4.0-6.0
    while (true)
    {
        x += 0.1;
        if (x > 7.0) { break; }
       // y = (x - 6) * 1.6 + 7;
        else if (x > 3.9 && x < 5.6)
        {
            y = (x - 7) / 1.6 + 6;
            cout << "Ѫ��=" << x << "\t�ǻ�" << y << endl;
            
        }
        else if(x>=5.6&&x<=6.1)
        {
            cout << "\n";
            y = (x - 7) / 1.6 + 6;
            cout << "Ѫ��=" << x << "\t�ǻ�" << y << endl;
        }
        else {
            cout << "\n";
            y = (x - 7) / 1.6 + 6;
            cout << "Ѫ��=" << x << "\t�ǻ�" << y << endl;
        }
    }
}