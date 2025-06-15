#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Item {
    int value, weight;

    
    Item(int v, int w) : value(v), weight(w) {}
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}


double fractionalKnapsack(int capacity, vector<Item> &items) {
    
    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;
    for (Item &item : items) {
        if (capacity >= item.weight) {
            
            capacity -= item.weight;
            totalValue += item.value;
        } else {
            
            totalValue += item.value * ((double)capacity / item.weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    int n = 3; 
    int capacity = 50; 

    vector<Item> items;
    items.push_back(Item(60, 10));
    items.push_back(Item(100, 20));
    items.push_back(Item(120, 30));

    double maxValue = fractionalKnapsack(capacity, items);

    cout << "Maximum value in Knapsack = " << maxValue << endl;

    return 0;
}