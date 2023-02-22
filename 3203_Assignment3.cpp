//
// Created by Daniel Nino on 2/21/23.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> list;

void sum(vector<int> list){
    int sum = 0;

    for(int i = 0; i < list.size(); i++){
        sum = sum + list[i];
    }

    cout << "sum = " << sum;
}

void product(vector<int> list){
    int prod = 0;

    prod = list[0];
    for(int i = 1; i < list.size(); i++){
        prod = prod * list[i];
    }

    cout << "product: " << prod;
}
