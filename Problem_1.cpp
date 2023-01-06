#include <iostream>

int * CreateSequence(int numbers[], int Length);
int CreateAnswer(int numbers[], int Length);

int main ()
{
    int blankSequence [1000] = {0};
    int *myNumbers = CreateSequence(blankSequence, 1000);

    int answer = CreateAnswer(myNumbers, 1000);
    std::cout << answer << std::endl;
    return 0;
}

int * CreateSequence(int numbers[], int Length)
{
    for (int counter = 0; counter < Length; ++counter)
    {
        if ((counter % 3 == 0) || (counter % 5 == 0))
        {
            numbers [counter] = counter;
        }   
        else
            numbers [counter] = 0;
    }
    return numbers;
}

int CreateAnswer(int numbers[], int Length)
{
    int sumMultiples = 0;
    for (int counter = 0; counter < Length; ++counter)
        sumMultiples += numbers[counter];
    return sumMultiples;
}