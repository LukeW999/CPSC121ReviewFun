#include <iostream>
#include <vector>
using namespace std;

void fillVector(vector<int> &);
void findExtremes(vector<int> &, int &min, int &max);

int main(void) {
  vector<int> userNums;
  int min = 0;
  int max = 0;

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  findExtremes(userNums, min, max);
  cout << "min: " << min << "max: " << max << endl;
}

void fillVector(vector<int> &vec) {
  int i;
  int num;

  for (i = 0; i < 5; i++) {
    cout << "gimme a number: ";
    cin >> num;
    vec.push_back(num);
  }
}
void findExtremes(vector<int> &vec, int &min, int &max) {
  min = max = vec[0];
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] < min) {
      min = vec[i];
    }
    if (vec[i] > max) {
      max = vec[i];
    }
  }
}
