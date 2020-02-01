#include <bits/stdc++.h>
#define lint long long int

int countActualDataPoints(std::vector<std::pair<std::string, lint>> data) {
    /*std::unordered_map<std::string, lint> umap;
    int count = 0;
    for(auto i=0;i<data.size();i++) {
        // Check if already encountered
        if(umap.count(data[i].first)>0) {
            // Check if same value and update
            if(umap[data[i].first]==data[i].second) 
                count++;
        }
        else {
            // First occurrence and using as base
            umap[data[i].first] = data[i].second;
            count++;
        }

    }*/

    std::unordered_map<std::string, std::pair<int, int>> umap;
    int count =0;

    for(auto point:data) {
        // Not first occurence
        if(umap.count(point.first)>0) {
            // Update count for spam and not spam
            if(point.second==0)umap[point.first].first++;
            else umap[point.first].second++;
        } else {
            // First occurence
            // Setup map between string and pair count for spam and not spam
            if(point.second==0)umap[point.first]=std::make_pair(1,0);
            else umap[point.first]=std::make_pair(0,1);
        }
    }

    // Edge case:
    // Let p be a point a string in the data points
    // If there are i occurrences of p where it is classified as spam
    // and there are j occurrences of p where it is classified as not-spam
    // 
    // The correct classification would be "i" if i>j and vice versa.
    for(auto point:umap) {
        count += std::max(point.second.first, point.second.second);
    }
    
    return count;
}

int main() {
    int num_tests = 0;
    int num_data_points = 0;

    std::cin >> num_tests;
    for(int i=0;i<num_tests;i++) {
        std::cin >> num_data_points;
        std::vector<std::pair<std::string, lint>> data_points;
        std::string tmp;
        int num;
        for(int j=0;j<num_data_points;j++) {
            std::cin>>tmp>>num;
            data_points.push_back(std::make_pair(tmp, num));
        }
        sort(data_points.begin(), data_points.end());
        std::cout << countActualDataPoints(data_points) << std::endl;
            
    }
}