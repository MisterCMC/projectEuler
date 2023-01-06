#include <iostream>
#include <vector>

int NewFibonacci(int num1, int num2);
int CreateAnswer(std::vector<int> numbers, int Length);

int main ()
{
    std::vector<int> fibNum (2);
    fibNum[0] = 1;
    fibNum[1] = 2;
    while(true)
    {
        int lastElement = fibNum.size()-1;
        int newFib = NewFibonacci(fibNum[lastElement-1], fibNum[lastElement]);
        if (newFib > 4000000)
            break;
        else
        {
            fibNum.push_back(newFib);
        }
    
    }
    int answer = CreateAnswer(fibNum, fibNum.size());
    std::cout << answer << std::endl;
    return 0;

}

int NewFibonacci (int num1, int num2)
{
    int newNum = num1 + num2;
    return newNum;
}

int CreateAnswer(std::vector<int> numbers, int Length)
{
    int sumEven = 0;
    for (int i = 0; i < Length; ++i)
    {
        if (numbers[i] % 2 == 1)
            continue;
        else
            sumEven += numbers[i];
    }
    return sumEven;
}
