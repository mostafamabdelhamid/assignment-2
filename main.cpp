#include <iostream>
#include <string>

using namespace std;

int toInt(string);
int main()
{
    string num ;
    int bigNum;
    string sameNum;
    int minNum;
    while(true)
    {
        cout << "Enter a number: " ;

        cin >> num;

        sameNum = num;

        //to get the bigger number

        for (int i = 2 ; i >= 0 ; i--)
        {

            while ((num[i] == '7') || (num[i] == '1') || (num[i] == '4'))
            {

                //stoi to convert from string to integer
                bigNum = stoi(num);
                bigNum ++;
                //to_string to convert from integer to string
                num = to_string(bigNum);


            }
        }

        //to get the smaller number
        for (int i = 2 ; i >= 0 ; i--)
        {

            while ((sameNum[i] == '7') || (sameNum[i] == '1') || (sameNum[i] == '4'))
            {

                minNum = stoi(sameNum);
                minNum --;
                sameNum = to_string(minNum);

            }
        }
        cout <<"the first greater nymber is : " << num << endl;
        cout <<"the first smaller number is : "<< sameNum << endl;
    }
    return 0;
}

//smaller
