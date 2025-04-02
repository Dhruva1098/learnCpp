#include <vector>
#include <stack>

bool validateStackSequence(std::vector<int>& pushed, std::vector<int>& popped){
  std::stack<int> stack;
  int j = 0;
  for (int i : pushed) {
    while(!stack.empty() && stack.top() == popped[j]) {
      stack.pop(); j++;
    }
  }
  if (stack.empty())
    return true;
  return false;
}
