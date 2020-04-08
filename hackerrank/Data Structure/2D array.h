//
// Created by bormaa on 4/7/20.
//

#ifndef HACKERRANK_PROBLEM2_H
#define HACKERRANK_PROBLEM2_H

int hourglassSum(vector<vector<int>> arr) {
    vector<vector<int>> temparr(4);
    for (int i = 0; i < 4; i++) {
        temparr[i].resize(4);
    }


for (int i=1;i<5;i++){
    for(int j=1;j<5;j++){
    temparr[i-1][j-1]=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
    }
}
int max=-100000;
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(temparr[i][j]>max){
                max=temparr[i][j];
            }
        }
    }
return max;
}

#endif //HACKERRANK_PROBLEM2_H
