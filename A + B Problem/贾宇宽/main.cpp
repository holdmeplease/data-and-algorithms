//
//  main.cpp
//  OJ1001
//  A+B
//
//  Created by 贾宇宽 on 17/9/25.
//  Copyright © 2017年 贾宇宽. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    string a, b, result = "";
    cin >> a >> b;
    if(b.length() > a.length())
        swap(a, b);
    
    int temp, iscarry = 0;
    for(int i = 0; i < b.length(); i++)
    {
        temp = b[b.length() - 1 - i] + a[a.length() - 1 - i] - '0' * 2 + iscarry;
        if(temp >= 10)
        {
            iscarry = 1;
            temp -= 10;
        }
        else
            iscarry = 0;
        
        result = char('0' + temp) + result;
    }
    for(int i = 0; i < a.length() - b.length(); i++)
    {
        temp = a[a.length() - b.length() - 1 - i] - '0' + iscarry;
        if(temp == 10)
        {
            iscarry = 1;
            temp = 0;
        }
        else
            iscarry = 0;
        result = char('0' + temp) + result;
    }
    if(iscarry)
        result = char('1') + result;
    
    cout << result << endl;
    return 0;
}
