#include <utility>
#include <vector>
int max_meetings_possible(int n, int start[], int end[]){
  int min = 0;
  int count = 0;
  std::vector<std::pair<int,int>> v;
  for(int i = 0; i<n; i++){
    v.push_back({end[i], start[i]});
  }
  sort(v.begin(), v.end());
  for(auto it : v){
    if(min < it.second){
      min = it.first;
      count++;
    }
  }
  return count;
}
