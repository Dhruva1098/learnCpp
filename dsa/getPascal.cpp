#include <vector>

std::vector<std::vector<int>> getPascal(int num) {
	std::vector<std::vector<int>> out = {{1}};
	if (num == 1) return out;
	while (num - 1) {
		std::vector<int> temp;
		int end = out.size() - 1;
		for (int i = 0; i <= out[end].size(); i++) {
			if (out[end].size() == 1) {
				temp = {1,1};
				break;
			}
			else if (i == 0 || i == out[end].size()){
				temp.push_back(1);
			}
			else {
				temp.push_back(out[end][i-1] + out[end][i]);
			}
		} out.push_back(temp); num--;
	} return out;
}
										
					
