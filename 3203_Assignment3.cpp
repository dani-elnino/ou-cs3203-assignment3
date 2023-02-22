//
// Created by Daniel Nino on 2/21/23.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> list;

void sum(vector<int> list){
    int sum = 0;

    for(int i = 0; i < list.size(); i++){
        sum = sum + list[i];
    }

    cout << "sum: " << sum << endl;
}

void product(vector<int> list){
    int prod = 0;

    prod = list[0];
    for(int i = 1; i < list.size(); i++){
        prod = prod * list[i];
    }

    cout << "product: " << prod << endl;
}

vector<int> reverse(vector<int> list){
    stack<int> stack;
    vector<int> reverse;

    for(int i = 0; i < list.size(); i++){
        stack.push(list[i]);
    }

    while (!stack.empty()){
        reverse.push_back(stack.top());
        stack.pop();
    }

    return reverse;
}

int main(){
    int temp;

    while(cin >> temp){
        list.push_back(temp);
    }

    sum(list);
    product(list);
}