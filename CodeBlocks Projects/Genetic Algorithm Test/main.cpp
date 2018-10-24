#include <iostream>
#include <math.h>

using namespace std;

// Define Terget Value
int target = 42;


char decodeBit (int a, int b, int c, int d)
{
    char returnVal;
    switch(a)
    {
        // Case 0 for First Val
        case 0 : switch(b)
        {
            // Case 0 for second Val
            case 0 : switch(c)
            {
                // Case 0 for third Val
                case 0 : switch(d)
                {
                    case 0 : returnVal == '0'
                    break;
                    case 1 : returnVal == '1'
                    break;
                }
                break;
                // Case 1 for third fal
                case 1 : switch(d)
                {
                    case 0 : returnVal == '2'
                    break;
                    case 1 : returnVal == '3'
                }
            }
            break;
            // Case 1 for second Val
            case 1 : switch(c)
            {
                // Case 0 for third Val
                case 0 : switch(d)
                {
                    case 0 : returnVal == '4'
                    break;
                    case 1 : returnVal == '5'
                    break;
                }
                break;
                // Case 1 for third Val
                case 1 : switch(d)
                {
                    case 0 : returnVal == '6'
                    break;
                    case 1 : returnVal == '7'
                }
            }
            break;
        }
        break;
        // Case 1 for first Val
        case 1 : switch(b)
        {
            // Case 0 for second Val
            case 0 : switch(c)
            {
                // Case 0 for third Val
                case 0 : switch(d)
                {
                    case 0 : returnVal == '8'
                    break;
                    case 1 : returnVal == '9'
                    break;
                }
                break;
                // Case 1 for third fal
                case 1 : switch(d)
                {
                    case 0 : returnVal == '+'
                    break;
                    case 1 : returnVal == '-'
                }
            }
            break;
            // Case 1 for second Val
            case 1 : switch(c)
            {
                // Case 0 for third Val
                case 0 : switch(d)
                {
                    case 0 : returnVal == '*'
                    break;
                    case 1 : returnVal == '/'
                    break;
                }
                break;
                // Case 1 for third Val
                case 1 : returnVal == '~'
            }
            break;
        }
        break;
    }
}
int calcBit (int in [28])
{
    char decoded [7];
    int valType [7]; // 0 is number, 1 is operation, 2 is null
    char deNoised [7];
    for (int i = 0; x<6; x++)
    {
        decoded [i] = decodeBit(in[4*i], in[4*x+1], in[4*x+2], in[4*x+3])
        if (decoded [i] == '0' || decoded [i] == '1' || decoded [i] == '2' || decoded [i] == '3' || decoded [i] == '4' || decoded [i] == '5' || decoded [i] == '6' || decoded [i] == '7' || decoded [i] == '8' || decoded [i] == '9')
        {
            valType [i] = 0;
        }
        else if (decoded [i] == '+' || decoded [i] == '-' || decoded [i] == '*' || decoded [i] == '/')
        {
            valType [i] = 1;
        }
        else
        {
            valType [i] = 2;
        }
    }
    switch valType[0]
    {
    case '0' :
        deNoised[0] = decoded[0];
        switch valType[1]
        {
        case '1' :
            deNoised[1] = decoded[1];
            switch valType[2]
            {
            case '0' :
                deNoised[2] = decoded[2];
                switch valType[3]
                {

                }
                break;
            default :
                switch valType
                break;
            }
            break;
        default:
            switch valType[2]
            {

            }
        }

        break;
        default :
        switch valType[1]
        {
        case '0' :
            deNoised[0] = decoded [1];
        }
        break;
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
