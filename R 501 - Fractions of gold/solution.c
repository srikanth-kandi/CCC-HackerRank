#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int weight;
    int value;
} Sample;

int compareSamples(const void *a, const void *b)
{
    double ratioA = ((Sample *)a)->value / (double)((Sample *)a)->weight;
    double ratioB = ((Sample *)b)->value / (double)((Sample *)b)->weight;
    if (ratioA < ratioB)
        return 1;
    else if (ratioA > ratioB)
        return -1;
    else
        return 0;
}

double fractionalKnapsack(Sample samples[], int N, int W)
{

    qsort(samples, N, sizeof(Sample), compareSamples);

    double maxValue = 0.0;
    int remainingWeight = W;
    int i = 0;

    while (i < N && remainingWeight > 0)
    {
        if (samples[i].weight <= remainingWeight)
        {

            maxValue += samples[i].value;
            remainingWeight -= samples[i].weight;
        }
        else
        {

            maxValue += (samples[i].value / (double)samples[i].weight) * remainingWeight;
            remainingWeight = 0;
        }
        i++;
    }

    if (remainingWeight > 0)
        return -1.0;

    return maxValue;
}

int main()
{
    int N, W;
    scanf("%d %d", &N, &W);

    Sample samples[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &samples[i].weight, &samples[i].value);
    }

    double max = fractionalKnapsack(samples, N, W);

    printf("%.12lf\n", max);

    return 0;
}
