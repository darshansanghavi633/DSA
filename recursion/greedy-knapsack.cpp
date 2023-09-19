#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int knapsack(int value[], int weight[], int capacity)
{
    float ratio[3];
    int count = 0, maxValue = 0, maxWeight = 0;
    for (int i = 0; i < 3; i++)
    {
        ratio[i] = float(value[i]) / weight[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (ratio[j] < ratio[j + 1])
            {
                swap(ratio[j], ratio[j + 1]);
                swap(value[j], value[j + 1]);
                swap(weight[j], weight[j + 1]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (weight[i] + maxWeight <= capacity)
        {
            maxValue = maxValue + value[i];
            maxWeight += weight[i];
        }
        else if (capacity - maxWeight > 0)
        {
            maxValue += (float(capacity - maxWeight) / weight[i]) * value[i];
        }
    }
    return maxValue;
}
int main()
{
    int value[3] = {60, 100, 120};
    int weight[3] = {10, 20, 30};
    int capacity = 50;
    cout << knapsack(value, weight, capacity);

    return 0;
}