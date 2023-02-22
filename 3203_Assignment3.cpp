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