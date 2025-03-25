#include <iostream>
#include <vector>

bool check_corners(int x, int y , vector<string>& out, int N, int M){
  if(x == 0, y == 0){if(out[1][1] == 'x' && out[1][0] == 'x' && out[0][1]) return true;}
  if(x == 0, y == m - 1){if(out[0][m-2] == 'x' && out[1][m-2] == 'x' && out[1][m-1] == x) return true;}
  if(x == n-1, y == 0){if(out[])}
}
bool check_boundries(int x, int y, vector<string>& out){}
bool check_in(int x, int y, vector<string>& out){}
using namespace std;
int main(){
  int N,M;
  cin >> N >> M;
  vector<string> out(N);
  for(int i = 0; i < N; i++){
    cin >> out[i];
  }
  int x,y;
  cin >> x >> y;


}
