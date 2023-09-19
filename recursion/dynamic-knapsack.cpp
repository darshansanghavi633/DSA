#include <iostream>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapsack(int value[], int weight[], int capacity, int n)
{
    if (n == 0 || capacity == 0)
    {
        return 0;
    }
    if (weight[n - 1] > capacity)
    {
        return knapsack(value, weight, capacity, n - 1);
    }
    else
    {
        return max(knapsack(value, weight, capacity - weight[n - 1], n - 1) + value[n - 1], knapsack(value, weight, capacity, n - 1));
    }
}
int main()
{
    int value[3] = {60, 100, 120};
    int weight[3] = {10, 20, 30};
    int capacity = 50;
    cout << knapsack(value, weight, capacity, 3);
    return 0;
}