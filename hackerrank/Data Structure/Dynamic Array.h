//
// Created by bormaa on 4/7/20.
//

#ifndef HACKERRANK_DYNAMIC_ARRAY_H
#define HACKERRANK_DYNAMIC_ARRAY_H
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> temparr(n);
    vector<int>result;
    int lastanswer=0;
    int query=0;
    int x=0;
    int y=0;
    int seq=0;
    int index=0;
    for(int i=0;i<queries.size();i++){
    x=queries[i][1];
    y=queries[i][2];
    query=queries[i][0];
    seq=(x ^lastanswer)%n;
    if(query==1){
        temparr[seq].push_back(y);

    }
    else{
        int size=temparr[seq].size();
    int element=y%size;
    lastanswer=temparr[seq][element];
//    cout<<lastanswer<<endl;
    result.push_back(lastanswer);

    }
}
    return result;
}
#endif //HACKERRANK_DYNAMIC_ARRAY_H
