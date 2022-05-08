#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

double findPrecision(int mid, int target)
{
    // for given precision = 3
    double precisionStart = 0.001, precisionEnd = 0.999;

    double midPrecisionElement = precisionStart + (precisionEnd - precisionStart) / 2;

    double preciseMidElement = 0;


    while (precisionStart <= precisionEnd)
    {
        double midPrecisionElement = precisionStart + (precisionEnd - precisionStart) / 2;

        preciseMidElement = mid + midPrecisionElement;

        if((preciseMidElement*preciseMidElement == target)){
            return preciseMidElement;
        }
        else if(preciseMidElement*preciseMidElement > target){
            precisionEnd = midPrecisionElement - 0.001;
        }
        else{
            precisionStart = midPrecisionElement + 0.001;
        }
        
    }

    return preciseMidElement;
}

double findSquareRoot(int target)
{

    int start = 0, end = target;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid * mid == target)
        {
            cout << "Square Root of Target is : " << mid << ".000 \n";
            return 1;
        }

        else if (mid * mid > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (mid * mid > target)
    {
        mid -= 1;
        double ans = findPrecision(mid, target);
        return ans;
    }

    double ans = findPrecision(mid, target);
    return ans;
}

int main()
{

    int target;
    cout << "ENTER TARGET : ";
    cin >> target;

    int precision ;
    cout << "ENTER PRECISION : ";
    cin >> precision;

    double squareRoot = findSquareRoot(target);

    
    cout << std::setprecision(precision+1) << squareRoot << endl;

    return 0;
}