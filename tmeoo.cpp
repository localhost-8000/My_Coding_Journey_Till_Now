#include<bits/stdc++.h>
using namespace std;


bool compareFunction(pair<int, int> p1, pair<int, int> p2) {
    if(p1.first == p2.first) {
        return p1.second > p2.second;
    }
    return (p1.first < p2.first);
}

void sortPoints(vector<pair<int, int>>& points) {
    sort(points.begin(), points.end(), compareFunction);
    for(int i=0; i<points.size(); ++i) {
        cout<<points[i].first<<" "<<points[i].second<<endl;
    }
}


int main()
{
    int n;
    cin>>n;
    vector<pair<int, int>> points(n);
    for(int i=0; i<n; ++i) {
        cin>>points[i].first>>points[i].second;
    }
    sortPoints(points);
    return 0;
}
