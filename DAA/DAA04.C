#include <stdio.h>

struct Item {
    int value;
    int weight;
};


void swap(struct Item *a, struct Item *b) {
    struct Item temp = *a;
    *a = *b;
    *b = temp;
}

// sort items by value/weight ratio (descending) using simple bubble sort
void sort(struct Item arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            float r1 = (float)arr[j].value / arr[j].weight;
            float r2 = (float)arr[j+1].value / arr[j+1].weight;

            if(r1 < r2) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

float fractionalKnapsack(int W, struct Item arr[], int n) {

    sort(arr, n);

    float totalValue = 0.0;

    for(int i = 0; i < n; i++) {

        if(arr[i].weight <= W) {
            W -= arr[i].weight;
            totalValue += arr[i].value;
        }
        else {
            totalValue += arr[i].value * ((float)W / arr[i].weight);
            break;
        }
    }

    return totalValue;
}

int main() {
    int n, W;
  printf("Enter number of items: ");
    scanf("%d",&n);

    struct Item arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter value and weight of item %d: ", i+1);
        scanf("%d %d",&arr[i].value,&arr[i].weight);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d",&W);

    float result = fractional(W, arr, n);

    printf("\nMaximum value = %.2f\n", result);


  
    return 0;
}





/*!SECTION



Structure Definition
struct Item {
    int value;
    int weight;
};


Each item has two properties:

Item	Value	Weight
I1	60	10
I2	100	20
I3	120	30
Knapsack capacity:

W = 50
2. Swap Function
void swap(struct Item *a, struct Item *b)

This simply swaps two items in the array.

Example:

Before swap

Item A = {60,10}
Item B = {100,20}

After swap

Item A = {100,20}
Item B = {60,10}

It is used during sorting.

3. Sorting by Value/Weight Ratio
float r1 = (float)arr[j].value / arr[j].weight;
float r2 = (float)arr[j+1].value / arr[j+1].weight;

The algorithm calculates value density:

value / weight

Let's compute it.

Item	Value	Weight	Ratio
I1	60	10	6
I2	100	20	5
I3	120	30	4

Higher ratio means more profit per weight.

The sort function arranges items in descending ratio order.

Sorted order:

I1 (6)
I2 (5)
I3 (4)

The array becomes:

{60,10}, {100,20}, {120,30}

(In this example it was already sorted.)

4. Fractional Knapsack Function
float fractionalKnapsack(int W, struct Item arr[], int n)

Variables:

W = capacity of bag
totalValue = total profit collected

Initial state:

W = 50
totalValue = 0
Step-by-Step Execution
Step 1 — Take Item 1
weight = 10
value = 60

Check:

10 <= 50 ✔

Take full item.

Update:

W = 50 - 10 = 40
totalValue = 60
Step 2 — Take Item 2
weight = 20
value = 100

Check:

20 <= 40 ✔

Take full item.

Update:

W = 40 - 20 = 20
totalValue = 60 + 100 = 160
Step 3 — Item 3
weight = 30
value = 120

Check:

30 > 20

Bag cannot hold full item.

So we take a fraction.

Fraction taken:

W / weight = 20 / 30 = 0.66

Value gained:

120 × (20 / 30) = 80

Update:

totalValue = 160 + 80 = 240

Knapsack is now full.

Final Result
Maximum value = 240

Items taken:

Item	Taken
I1	100%
I2	100%
I3	66%
Why Greedy Works Here

Fractional knapsack allows splitting items.
Because of that, taking the highest value density first always produces the optimal solution.

If items were not divisible, this greedy trick fails—that becomes the famous 0/1 Knapsack problem, which uses dynamic programming instead.

Time Complexity

Sorting dominates the runtime.

Bubble sort = O(n²)
Knapsack traversal = O(n)

Total:

O(n²)

If we used quick sort, the complexity becomes:

O(n log n)






First recall what those variables are:

float r1 = arr[j].value / arr[j].weight
float r2 = arr[j+1].value / arr[j+1].weight

These represent value density (profit per unit weight).

Now the condition:

if (r1 < r2)

means:

“If the next item gives more value per weight than the current item…”

Then this line runs:

swap(&arr[j], &arr[j+1]);

which exchanges the two items in the array.

The result is that the item with the higher ratio moves toward the front.

Think of the array slowly organizing itself so that the most profitable items appear first.

Small Example

Suppose the array currently looks like this:

Position	Value	Weight	Ratio
j	100	20	5
j+1	60	10	6

Compute:

r1 = 100/20 = 5
r2 = 60/10 = 6

Now check:

if (5 < 6)  → TRUE*/





