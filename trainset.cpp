#include <bits/stdc++.h>
#define lint long long int

int countActualDataPoints(std::vector<std::pair<std::string, lint>> data) {
    std::unordered_map<std::string, lint> umap;
    for(auto i=0;i<data.size();i++) {
        // Check if map is same
        if(umap[data[i].first]!=data[i].second) {
            umap[data[i].first] = -1;
        } else {
            umap[data[i].first] = data[i].second;
        }

    }
    int count = 0;
    for(auto point:umap) {
        if(point.second!=-1)
            count++;
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

        std::cout << countActualDataPoints(data_points) << std::endl;
            
    }
}