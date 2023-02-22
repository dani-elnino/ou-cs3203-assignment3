//
// Created by Daniel Nino on 2/21/23.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> list;

void sum(vector<int> list){
    int sum = 0; // sum of the list of numbers

    //for loop to add the numbers
    for(int i = 0; i < list.size(); i++){
        sum = sum + list[i];
    }

    //output sum
    cout << "sum: " << sum << endl;
}

void product(vector<int> list){
    int prod = 0; // porduct of the list of numbers

    //for loop to find product of list
    prod = list[0];
    for(int i = 1; i < list.size(); i++){
        prod = prod * list[i];
    }

    //output product
    cout << "product: " << prod << endl;
}

int main(){
    int temp; //temporary variable to hold user inputs

    //while loop for user inputted numbers
    while(cin >> temp){
        list.push_back(temp);
    }

    //call functions
    sum(list);
    product(list);
}