//
// Created by bormaa on 4/7/20.
//

#ifndef HACKERRANK_PROBLEM1_H
#define HACKERRANK_PROBLEM1_H


class problem1 {

};
vector<int> reverseArray(vector<int> a) {
    vector<int>temp(a.size());
    int num=0;
    for(int i=a.size()-1;i!=-1;i--){
        temp[num]=a[i];
        num++;
    }
    return temp;
}

#endif //HACKERRANK_PROBLEM1_H
