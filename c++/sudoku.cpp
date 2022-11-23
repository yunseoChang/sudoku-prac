#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int board[81], answer[81];
vector<int> boards[4] = {
        {0,0,0,0,1,7,2,0,0,0,0,0,4,0,0,0,0,0,0,0,9,0,0,3,0,0,0,4,0,0,7,8,0,5,0,0,0,2,5,0,0,0,8,0,0,0,0,0,6,0,0,0,0,0,6,0,1,5,0,0,0,0,0,0,0,0,0,0,6,0,3,0,2,0,0,0,0,1,7,0,4},
        {0,5,1,3,6,2,7,0,0,0,4,0,0,5,8,0,0,0,0,0,0,4,0,0,0,2,5,0,8,0,0,0,0,9,0,3,0,0,0,0,0,0,0,0,0,7,0,5,0,0,0,0,8,0,1,2,0,0,0,9,0,0,0,0,0,0,2,8,0,0,6,0,0,0,8,5,3,4,2,9,0},
        {0,0,0,0,4,3,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,5,0,0,0,0,0,8,0,7,0,0,0,2,0,0,6,0,0,0,0,0,0,3,0,0,0,0,0,0,0,4,0,0,0,5,8,0,0,6,0,0,4,0,0,1,0,0,0,0,0,3,0,0,0,0,0,5,0,0},
        {0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,1},
};

void load_board();
bool solve();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  load_board();

  if (solve()){
    for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
        cout<< answer[i*9+j]<<" ";
      }
      cout<<endl;
    }
  }else{
    cout<<"Can't solve this puzzle!"<<endl;
  }

  return 0;
}

void load_board() {
  int index = rand() % 4;
  for(int i=0;i<81;i++){
    board[i] = boards[index][i];
  }
}

bool solve(){
  /////TODO: solve sudoku

  /////
  return false;
}